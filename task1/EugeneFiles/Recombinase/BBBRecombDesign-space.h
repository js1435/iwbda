/** PROPERTIES ***/
Property Name(txt);
Property Sequence(txt);
Property Pigeon(txt);

PartType SmallMolecule(Name);

/** PART TYPES ***/
PartType Promoter(Name, Sequence, Pigeon);
PartType RBS (Name, Sequence, Pigeon);
PartType Repressor(Name, Sequence, Pigeon);
PartType Reporter(Name, Sequence, Pigeon);
PartType Terminator(Name, Sequence, Pigeon);
PartType Recombinase(Name,Sequence,Pigeon);
PartType attSite(Name, Sequence, Pigeon);
PartType Gene(Name, Sequence, Pigeon);

//***************************
// Define the Design Space
//***************************

/*** Inducible Promoters ***/
Promoter pLtetO(
    .Name("pLtet0"),
    .Sequence("tccctatcagtgatagagattgacatccctatcagtgatagagatactgagcac"),
    .Pigeon("p pLtet0 2"));
   
Promoter pBAD(
    .Name("pBAD"),
    .Sequence("acattgattatttgcacggcgtcacactttgctatgccatagcatttttatccataagattagcggatcctacctgacgctttttatcgcaactctctactgtttctccataccgtttttttgggctagc"),
    .Pigeon("p pBAD 2"));

Promoter pPhlF(
    .Name("pPhlF"),
    .Sequence("tctgattcgttaccaattgacatgatacgaaacgtaccgtatcgttaaggt"),
    .Pigeon("p pPhlF 2"));

// let's define some molecules
SmallMolecule ATc(.Name("ATc"));
ATc INDUCES pLtet0;

SmallMolecule Ara(.Name("Ara"));
Ara INDUCES pBAD;

SmallMolecule DAPG(.Name("DAPG"));
DAPG INDUCES pPhlF;


/** Define Recombinases **/ 
Recombinase bxbI(
    .Name("bxbI"),
    .Sequence("gtgagagccctggtagtcatccgcctgtcccgcgtcaccgatgctacgacttcaccggag
cgtcagctggagtcttgccagcagctctgcgcccagcgcggctgggacgtcgtcggggtagcggaggatctggacgtctccggggcggtcgatccgttcgaccggaagcgcagaccgaa
cctggcccggtggctagcgttcgaggagcaaccgtttgacgtgatcgtggcgtaccgggtagatcggttgacccgatcgatccggcatcttcagcagctggtccactgggccgaggacca
caagaagctggtcgtctccgcgaccgaagcgcacttcgatacgacgacgccgtttgcggcggtcgtcatcgcgcttatgggaacggtggcgcagatggaattagaagcgatcaaagagc
ggaaccgttcggctgcgcatttcaatatccgcgccgggaaataccgaggatccctgccgccgtggggatacctgcctacgcgcgtggacggggagtggcggctggtgccggaccctgtg
cagcgagagcgcatcctcgaggtgtatcaccgcgtcgtcgacaaccacgagccgctgcatctggtggcccacgacctgaaccggcgtggtgtcctgtcgccgaaggactacttcgcgcag
ctgcaaggccgcgagccgcagggccgggagtggtcggctaccgcgctgaagcgatcgatgatctccgaggcgatgctcgggtacgcgactctgaacggtaagaccgtccgagacgacg
acggagccccgctggtgcgggctgagccgatcctgacccgtgagcagctggaggcgctgcgcgccgagctcgtgaagacctcccgggcgaagcccgcggtgtctaccccgtcgctgctg
ctgcgggtgttgttctgcgcggtgtgcggggagcccgcgtacaagttcgccgggggaggacgtaagcacccgcgctaccgctgccgctcgatggggttcccgaagcactgcgggaacg
gcacggtggcgatggccgagtgggacgcgttctgcgaggagcaggtactggatctgctcggggacgcggagcgtctggagaaagtctgggtagcgggctcggactccgcggtcgaact
cgcggaggtgaacgcggagctggtggacctgacgtcgctgatcggctccccggcctaccgggcgggctctccgcagcgagaagcactggatgcccgtattgcggcgctggccgcgcgg
caagaggagctggagggcctggaggctcgcccgtctggctgggagtggcgcgagaccgggcagcggttcggggactggtggcgggagcaggacaccgcggcaaagaacacctggcttc
ggtcgatgaacgttcggctgacgttcgacgtccgcggcgggctgactcgcacgatcgacttcggggatcttcaggagtacgagcagcatctcaggctcggcagcgtggtcgaacggcta
cacaccgggatgtcgtaa"),
    .Pigeon("c bxbI 2"));

Recombinase tp901(
    .Name("tp901"),
    .Sequence("ATGAAACATCATCACCATCACCACCAGGCCGGCACTAAGAAAGTAGCAATCTATACACG
    AGTATCCACTACTAACCAAGCAGAGGAAGGCTTCTCAATTGATGAGCAAATTGACCGTTT
    AACAAAATATGCTGAAGCAATGGGGTGGCAAGTATCTGATACTTATACTGATGCTGGTTT
    TTCAGGGGCCAAACTTGAACGCCCAGCAATGCAAAGATTAATCAACGATATCGAGAATA
    AAGCTTTTGATACAGTTCTTGTATATAAGCTAGACCGCCTTTCACGTAGTGTAAGAGATAC
    TCTTTATCTTGTTAAGGATGTGTTCACAAAAAATAAAATAGACTTTATCTCGCTTAATGAA
    AGTATTGATACTTCTTCTGCTATGGGTAGCTTGTTTCTCACTATTCTTTCTGCAATTAATGA
    GTTTGAAAGAGAGAATATAAAAGAACGCATGACTATGGGTAAACTAGGGCGAGCGAAAT
    CTGGTAAGTCTATGATGTGGACTAAGACAGCTTTTGGGTATTACCACAACAGAAAGACAG
    GTATATTAGAAATTGTTCCTTTACAAGCTACAATAGTTGAACAAATATTCACTGATTATTT
    ATCAGGAATATCACTTACAAAATTAAGAGATAAACTCAATGAATCTGGACACATCGGTAA
    AGATATACCGTGGTCTTATCGTACCCTAAGACAAACACTTGATAATCCAGTTTACTGTGGT
    TATATCAAATTTAAGGACAGCCTATTTGAAGGTATGCACAAACCAATTATCCCTTATGAG
    ACTTATTTAAAAGTTCAAAAAGAGCTAGAAGAAAGACAACAGCAGACTTATGAAAGAAA
    TAACAACCCTAGACCTTTCCAAGCTAAATATATGCTGTCAGGGATGGCAAGGTGCGGTTA
    CTGTGGAGCACCTTTAAAAATTGTTCTTGGCCACAAAAGAAAAGATGGAAGCCGCACTAT
    GAAATATCACTGTGCAAATAGATTTCCTCGAAAAACAAAAGGAATTACAGTATATAATGA
    CAATAAAAAGTGTGATTCAGGAACTTATGATTTAAGTAATTTAGAAAATACTGTTATTGA
    CAACCTGATTGGATTTCAAGAAAATAATGACTCCTTATTGAAAATTATCAATGGCAACAA
    CCAACCTATTCTTGATACTTCGTCATTTAAAAAGCAAATTTCACAGATCGATAAAAAAAT
    ACAAAAGAACTCTGATTTGTACCTAAATGATTTTATCACTATGGATGAGTTGAAAGATCG
    TACTGATTCCCTTCAGGCTGAGAAAAAGCTGCTTAAAGCTAAGATTAGCGAAAATAAATT
    TAATGACTCTACTGATGTTTTTGAGTTAGTTAAAACTCAGTTGGGCTCAATTCCGATTAAT
    GAACTATCATATGATAATAAAAAGAAAATCGTCAACAACCTTGTATCAAAGGTTGATGTT
    ACTGCTGATAATGTAGATATCATATTTAAATTCCAACTCGCTACCGGTGCTGCTAAGGAC
    GAAAACTACGCTCTGGCTGCTTAA")
    .Pigeon("c tp901 7"));

/** Define Genes **/ 

Gene araC(
    .Name("araC")
    .Sequence ("ATGCAATATGGACAATTGGTTTCTTCTCTGAATGGCGGGAGTATGAAAAGTATGGCTGAA
    GCGCAAAATGATCCCCTGCTGCCGGGATACTCGTTTAATGCCCATCTGGTGGCGGGTTTA
    ACGCCGATTGAGGCCAACGGTTATCTCGATTTTTTTATCGACCGACCGCTGGGAATGAAA
    GGTTATATTCTCAATCTCACCATTCGCGGTCAGGGGGTGGTGAAAAATCAGGGACGAGAA
    TTTGTTTGCCGACCGGGTGATATTTTGCTGTTCCCGCCAGGAGAGATTCATCACTACGGTC
    GTCATCCGGAGGCTCGCGAATGGTATCACCAGTGGGTTTACTTTCGTCCGCGCGCCTACT
    GGCATGAATGGCTTAACTGGCCGTCAATATTTGCCAATACGGGGTTCTTTCGCCCGGATG
    AAGCGCACCAGCCGCATTTCAGCGACCTGTTTGGGCAAATCATTAACGCCGGGCAAGGG
    GAAGGGCGCTATTCGGAGCTGCTGGCGATAAATCTGCTTGAGCAATTGTTACTGCGGCGC
    ATGGAAGCGATTAACGAGTCGCTCCATCCACCGATGGATAATCGGGTACGCGAGGCTTGT
    CAGTACATCAGCGATCACCTGGCAGACAGCAATTTTGATATCGCCAGCGTCGCACAGCAT
    GTTTGCTTGTCGCCGTCGCGTCTGTCACATCTTTTCCGCCAGCAGTTAGGGATTAGCGTCT
    TAAGCTGGCGCGAGGACCAACGTATCAGCCAGGCGAAGCTGCTTTTGAGCACCACCCGG
    ATGCCTATCGCCACCGTCGGTCGCAATGTTGGTTTTGACGATCAACTCTATTTCTCGCGGG
    TATTTAAAAAATGCACCGGGGCCAGCCCGAGCGAGTTCCGTGCCGGTTGTGAAGAAAAA
    GTGAATGATGTAGCCGTCAAGTTGTCATAA")
    .Pigeon("c araC 6"));

/** att Recombinase sites **//
attSite BxblBGT(
    .Name("BxblBGT")
    .Sequence("CGGCCGGCTTGTCGACGACGGCGGTCTCCGTCGTCAGGA
    TCATCCGGGC")
    .Pigeon(">BxblBGT 6"));

attSite BxblPGT(
    .Name("BxblPGT")
    .Sequence("GTCGTGGTTTGTCTGGTCAACCACCGCGGTCTCAGTGGTG
    TACGGTACAAACCCCGAC")
    .Pigeon(">BxblPGT 6"));

attSite TP901BTC(
    .Name("TP901BTC")
    .Sequence("ATGCCAACACAATTAACATCTCAATCAAGGTAAATGCTTT
    TTGCTTTTTTTGC")
    .Pigeon(">TP901BTC 2"));

attSite TP901PTC(
    .Name("TP901PTC")
    .Sequence("GCGAGTTTTTATTTCGTTTATTTCAATTAAGGTAACTAAA
    AAACTCCTTT")
    .Pigeon("<TP901PTC 2"));

attSite TP901BAG(
    .Name("TP901BAG")
    .Sequence("ATGCCAACACAATTAACATCAGAATCAAGGTAAATGCTT
    TTTGCTTTTTTTGC ")
    .Pigeon(">TP901BAG 7"));

attSite TP901PAG(
    .Name("TP901PAG")
    .Sequence("GCGAGTTTTTATTTCGTTTATTAGAATTAAGGTAACTAAA
    AAACTCCTTT")
    .Pigeon("<TP901PAG 7"));


/** TERMINATOR ARMY - COME WITH ME IF YOU WANT TO LIVE **//

Terminator ECK120010850(
    .Name("CK120010850")
    .Sequence("AGTTAACCAAAAAGGGGGGATTTTATCTCCCCTTTAATTT
    TTCCT")
    .Pigeon("<t"));

Terminator ECK120010825(
    .Name("ECK120010825")
    .Sequence("ATCTCCTTTCACGGCCCATTCCTCATGGATGGGCCGTTTA
    TTTCCC")
    .Pigeon(<t));

Terminator ECK120030221(
    .Name("ECK120030221")
    .Sequence("CCCGCACTTAACCCGCTTCGGCGGGTTTTTGTTTTT")
    .Pigeon("<t"));

Terminator ECK120010799(
    .Name("ECK120010799")
    .Sequence("GTTATGAGTCAGGAAAAAAGGCGACAGAGTAATCTGTCGCCTTTTTTCTTTGCTTGCTTT")
    .Pigeon("<t"));

Terminator ECK120010818(
    .Name("ECK120010818")
    .Sequence ("GTCAGTTTCACCTGTTTTACGTAAAAACCCGCTTCGGCGGGTTTTTACTTTTGG")
    .Pigeon("<t")

Terminator BBaB0062R(
    .Name("BBaB0062R")
    .Sequence("CAGATAAAAAAAATCCTTAGCTTTCGCTAAGGATGATTTCT"))
    .Pigeon("<t")


/** attP-attB Pairs 
attPair TP901AGF(
    .Name("TP901AGF")
    .Sequence("ATGCCAACACAATTAACATCAGAATCAAGGTAAATGCTT
    TTTGCTTTTTTTGCGCGAGTTTTTATTTCGTTTATTAGAATTAAGGTAACTAAA
    AAACTCCTTT")
    .Pigeon(">TP901AG_F 2"));

attPair TP901TCF( 
    .Name("TP901TCF")
    .Sequence("ATGCCAACACAATTAACATCTCAATCAAGGTAAATGCTTT
    TTGCTTTTTTTGCGCGAGTTTTTATTTCGTTTATTTCAATTAAGGTAACTAAA
    AAACTCCTTT ")
    .Pigeon(">TP901TC_F 7"));

attPair BxbICA(
    .Name("BxbICA")
    .Sequence("CGGCCGGCTTGTCGACGACGGCGCACTCCGTCGTCAGGA
    TCATCCGGGCGTCGTGGTTTGTCTGGTCAACCACCGCGCACTCAGTGGTG
    TACGGTACAAACCCCGAC")
    .Pigeon(">BxbICA_F 6"))

**/ 

/** Reverse compliment attP-attB pairs**/ 
/**
attPair TP901AGR(
    .Name("TP901AGR")
    .Sequence("AAAGGAGTTTTTTAGTTACCTTAATTCTAATAAACGAAATAAAAACTCGC
        GCAAAAAAAGCAAAAAGCATTTACCTTGATTCTGATGTTAATTGTGTTGGCAT")
    .Pigeon("<TP901AG_R 2"));

attPair TP901TCR( 
    .Name("TP901TCR")
    .Sequence("AAAGGAGTTTTTTAGTTACCTTAATTGAAATAAACGAAATAAAAACTCGCGC
        AAAAAAAGCAAAAAGCATTTACCTTGATTGAGATGTTAATTGTGTTGGCAT")
    .Pigeon("<TP901TC_R 7"))

**/
/*** Repressible Promoters
Promoter pCI(
    .Name("pCI"),
    .Sequence("taacaccgtgcgtgttgactattttacctctggcggtgataatggttgc"),
    .Pigeon("p pCI 2"));

Promoter pLux(
    .Name("pLux"),
    .Sequence("acctgtaggatcgtacaggtttacgcaagaaaatggtttgttatagtcgaatacctctggcggtgata"),
    .Pigeon("p pLux 5"));
    
Promoter pTetR(
    .Name("pTetR"),
    .Sequence("tccctatcagtgatagagattgacatccctatcagtgatagagatactgagcac"),
    .Pigeon("p pTetR 8"));
 
Promoter pLac(
    .Name("pLac"),
    .Sequence("gcggcgcgccatcgaatggcgcaaaacctttcgcggtatggcatgatagcgcccggaagagagtcaattcagggtggtgaat"),
    .Pigeon("p pLac 6"));

 ***/

/**

Repressor cI(
    .Name("BBa_C0051"),
    .Sequence("atgagcacaaaaaagaaaccattaacacaagagcagcttgaggacgcacgtcgccttaaagcaatttatgaaaaaaagaaaaatgaacttggcttatccc
aggaatctgtcgcagacaagatggggatggggcagtcaggcgttggtgctttatttaatggcatcaatgcattaaatgcttataacgccgcattgcttgc
aaaaattctcaaagttagcgttgaagaatttagcccttcaatcgccagagaaatctacgagatgtatgaagcggttagtatgcagccgtcacttagaagt
gagtatgagtaccctgttttttctcatgttcaggcagggatgttctcacctgagcttagaacctttaccaaaggtgatgcggagagatgggtaagcacaa
ccaaaaaagccagtgattctgcattctggcttgaggttgaaggtaattccatgaccgcaccaacaggctccaagccaagctttcctgacggaatgttaat
tctcgttgaccctgagcaggctgttgagccaggtgatttctgcatagccagacttgggggtgatgagtttaccttcaagaaactgatcagggatagcggt
caggtgtttttacaaccactaaacccacagtacccaatgatcccatgcaatgagagttgttccgttgtggggaaagttatcgctagtcagtggcctgaag
agacgtttggcgctgcaaacgacgaaaactacgctttagtagcttaataa"),
    .Pigeon("c cI 2")
    .Represses(pCI)); 



Repressor LuxR(
	.Name("LuxR"),
	.Sequence("atgaaaaacataaatgccgacgacacatacagaataattaataaaattaaagcttgtagaagcaataatgatattaatcaatgcttatctgatatgacta
aaatggtacattgtgaatattatttactcgcgatcatttatcctcattctatggttaaatctgatatttcaatcctagataattaccctaaaaaatggag
gcaatattatgatgacgctaatttaataaaatatgatcctatagtagattattctaactccaatcattcaccaattaattggaatatatttgaaaacaat
gctgtaaataaaaaatctccaaatgtaattaaagaagcgaaaacatcaggtcttatcactgggtttagtttccctattcatacggctaacaatggcttcg
gaatgcttagttttgcacattcagaaaaagacaactatatagatagtttatttttacatgcgtgtatgaacataccattaattgttccttctctagttga
taattatcgaaaaataaatatagcaaataataaatcaaacaacgatttaaccaaaagagaaaaagaatgtttagcgtgggcatgcgaaggaaaaagctct
tgggatatttcaaaaatattaggttgcagtgagcgtactgtcactttccatttaaccaatgcgcaaatgaaactcaatacaacaaaccgctgccaaagta
tttctaaagcaattttaacaggagcaattgattgcccatactttaaaaattaataa"),
    .Pigeon("c LuxR 5")
    .Represses(pLux)); 



Repressor TetR(.Name("TetR"),
	.Sequence("
		ttatgacaacttgacggctacatcattcactttttcttcacaaccggcacggaactcgctcgggctggccccggtgcattttttaaatacccgcgagaaa
		tagagttgatcgtcaaaaccaacattgcgaccgacggtggcgataggcatccgggtggtgctcaaaagcagcttcgcctggctgatacgttggtcctcgc
		gccagcttaagacgctaatccctaactgctggcggaaaagatgtgacagacgcgacggcgacaagcaaacatgctgtgcgacgctggcgatatcaaaatt
		gctgtctgccaggtgatcgctgatgtactgacaagcctcgcgtacccgattatccatcggtggatggagcgactcgttaatcgcttccatgcgccgcagt
		aacaattgctcaagcagatttatcgccagcagctccgaatagcgcccttccccttgcccggcgttaatgatttgcccaaacaggtcgctgaaatgcggct
		ggtgcgcttcatccgggcgaaagaaccccgtattggcaaatattgacggccagttaagccattcatgccagtaggcgcgcggacgaaagtaaacccactg
		gtgataccattcgcgagcctccggatgacgaccgtagtgatgaatctctcctggcgggaacagcaaaatatcacccggtcggcaaacaaattctcgtccc
		tgatttttcaccaccccctgaccgcgaatggtgagattgagaatataacctttcattcccagcggtcggtcgataaaaaaatcgagataaccgttggcct
		caatcggcgttaaacccgccaccagatgggcattaaacgagtatcccggcagcaggggatcattttgcgcttcagccatacttttcatactcccgccatt
		cagagaagaaaccaattgtccatattgcatcagacattgccgtcactgcgtcttttactggctcttctcgctaaccaaaccggtaaccccgcttattaaa
		agcattctgtaacaaagcgggaccaaagccatgacaaaaacgcgtaacaaaagtgtctataatcacggcagaaaagtccacattgattatttgcacggcg
		tcacactttgctat"),
    .Pigeon("c TetR 8")
    .Represses(pTetR));




Repressor LacI(
	.Name("LacI"),
	.Sequence("gcggcgcgccatcgaatggcgcaaaacctttcgcggtatggcatgatagcgcccggaagagagtcaattcagggtggtgaat"),
    .Pigeon("c LacI 6")
    .Represses(pLac)); 

**/

/**

RBS rbs61100("J61100","tctagaGAAAGAGGGGACAAactagt", "r rbs61100 13");
RBS rbs61101("J61101","tctagaGAAAGACAGGACCCactagt", "r rbs61101 13");
RBS rbs61102("J61102","tctagaGAAAGATCCGATGTactagt", "r rbs61102 13");
RBS rbs61103("J61103","tctagaGAAAGATTAGACAAactagt", "r rbs61103 13");
RBS rbs61104("J61104","tctagaGAAAGAAGGGACAGactagt", "r rbs61104 13");

Reporter GFP("GFP",
"tccctatcagtgatagagattgacatccctatcagtgatagagatactgagcactactagagaaagaggagaaatactagatgcgtaaaggagaagaact
tttcactggagttgtcccaattcttgttgaattagatggtgatgttaatgggcacaaattttctgtcagtggagagggtgaaggtgatgcaacatacgga
aaacttacccttaaatttatttgcactactggaaaactacctgttccatggccaacacttgtcactactttcggttatggtgttcaatgctttgcgagat
acccagatcatatgaaacagcatgactttttcaagagtgccatgcccgaaggttatgtacaggaaagaactatatttttcaaagatgacgggaactacaa
gacacgtgctgaagtcaagtttgaaggtgatacccttgttaatagaatcgagttaaaaggtattgattttaaagaagatggaaacattcttggacacaaa
ttggaatacaactataactcacacaatgtatacatcatggcagacaaacaaaagaatggaatcaaagttaacttcaaaattagacacaacattgaagatg
gaagcgttcaactagcagaccattatcaacaaaatactccaattggcgatggccctgtccttttaccagacaaccattacctgtccacacaatctgccct
ttcgaaagatcccaacgaaaagagagaccacatggtccttcttgagtttgtaacagctgctgggattacacatggcatggatgaactatacaaataataa
tactagagccaggcatcaaataaaacgaaaggctcagtcgaaagactgggcctttcgttttatctgttgtttgtcggtgaacgctctctactagagtcac
actggctcaccttcgggtgggcctttctgcgtttata",
	"c GFP 4");

Reporter YFP("YFP",
"aaagaggagaaatactagatggtgagcaagggcgaggagctgttcaccggggtggtgcccatcctggtcgagctggacggcgacgtaaacggccacaagt
tcagcgtgtccggcgagggcgagggcgatgccacctacggcaagctgaccctgaagttcatctgcaccaccggcaagctgcccgtgccctggcccaccct
cgtgaccaccttcggctacggcctgcaatgcttcgcccgctaccccgaccacatgaagctgcacgacttcttcaagtccgccatgcccgaaggctacgtc
caggagcgcaccatcttcttcaaggacgacggcaactacaagacccgcgccgaggtgaagttcgagggcgacaccctggtgaaccgcatcgagctgaagg
gcatcgacttcaaggaggacggcaacatcctggggcacaagctggagtacaactacaacagccacaacgtctatatcatggccgacaagcagaagaacgg
catcaaggtgaacttcaagatccgccacaacatcgaggacggcagcgtgcagctcgccgaccactaccagcagaacacccccatcggcgacggccccgtg
ctgctgcccgacaaccactacctgagctaccagtccgccctgagcaaagaccccaacgagaagcgcgatcacatggtcctgctggagttcgtgaccgccg
ccgggatcactctcggcatggacgagctgtacaagtaataatactagagccaggcatcaaataaaacgaaaggctcagtcgaaagactgggcctttcgtt
ttatctgttgtttgtcggtgaacgctctctactagagtcacactggctcaccttcgggtgggcctttctgcgtttata",
	"c YFP 12");

Reporter RFP(.Name("RFP"), .Pigeon("c RFP 6"));

Terminator T1("T1", 
"nagattactataaataggcgtatcacgaggcagaatttcagataaaaaaaatccttagctttcgctaaggatgatttctg
gaattcgcggccgcttctagagccggcttatcggtcagtttcacctgatttacgtaaaaacccgcttcggcgggtttttg
cttttggaggggcagaaagatgaatgactgtccacgacgctatacccaaaagaaatactagtctgcaggcttcctcgctc
actgactcgctgcgctcggtcgttcggctgcggcgagcggtatcagctcactcaaaggcggtaatacggttatccacaga
atcaggggataacgcaggaaagaacatgtgagcaaaaggccagcaaaaggccaggaaccgtaaaaaggccgcgttgctgg
cgtttttccacaggctccgcccccctgacgagcatcacaaaaatcgacgctcaagtcagaggtggcgaaacccgacagga
ctataaagataccaggcgtttccccctggaagctccctcgtgcgctctcctgttccgaccctgccgcttaccggatacct
gtccgcctttctcccttcgggaagcgtggcgctttctcatagctcacgctgtaggtatctcagttcggtgtaggtcgttc
gctccaagctgggctgtgtgcacgaaccccccgttcagcccgaccgctgcgccttatccggtaactatcgtcttgagtcc
aacccggtaagacacgacttatcgccactggcagcagccactggtaacaggattagcagagcgaggtatgtaggcggtgc
tacagagttcttgaagtggtggcctaactacggctacactagaagaacagtatttggtatctgcgctctgctgaagccag
ttaccttcggaaaaagagttggtagctcttgatccggcaaacaaaccaccgctggtagcggtggttttttngtttgcang
cagcaaattacgcgcanaaaaaaagcnaanaaaaaantntttntttttttttnggggnttnnnnccnnggggnaaaaaan
ncccnnnnannnnttttnnnnnnggnantttnnaaangganttccccnnannnctttnnntnaaannnttttttnaannn
nnnnnnttttnnnnnannnannnnnnnnnaannnnncnnnnttnaannngnnnncnttnnnnnngggggnnntttttnnn
nnnnnntttnnnnnccccccnnnnnaannnnncann",
	"t T1 14");

Terminator T7(.Name("T7"), .Pigeon("t T7 13"));
Terminator BBa_B0010("BBa_B0010",
"nnnncccnnanacnntttttatcccaaannnntaanngaaccctccncgncncccttttnnccannnntttnnccggttn
ttctnnnncngttttttggcgggnaaaaaaagnntattnnnnnnnnntntggggnnnnnnntttttngntnccncccccc
cccgcgcgnntcntntgttatgntgtnctctactntctctcgagagattagtacctttggagatctactagagaaagagg
agaaatactagatggcttcctncgaagacgttatcaaagagttcatgcgtttcaaagttcgtatggaaggttccgttaac
ggtcacgagttcgaaatcgaaggtgaaggtgaaggtcgtccgtacgaaggtacccagaccgctaaactgaaagttaccaa
aggtggtccgctgccgttcgcttgggacatcctgtccccgcagttccagtacggttccaaagcttacgttaaacacccgg
ctgacatcccggactacctgaaactgtccttcccggaaggtttcaaatgggaacgtgttatgaacttcgaagacggtggt
gttgttaccgttacccaggactcctccctgcaagacggtgagttcatctacaaagttaaactgcgtggtaccaacttccc
gtccgacggtccggttatgcagaaaaaaaccatgggttgggaagcttccaccgaacgtatgtacccggaagacggtgctc
tgaaaggtgaaatcaaaatgcgtctgaaactgaaagacggtggtcactacgacgctgaagttaaaaccacctacatggct
aaaaaaccggttcagctgccgggtgcttacaaaaccgacatcaaactggacatcacctcccacaacgaagactacaccat
cgttgaacagtacgaacgtgctgaaggtcgtcactccaccggtgcttaataacgctgatagtgctagtgtagatcgctac
tagagccaggcatcaaataaaacgaaaggctcagtcgaaagactgggcctttcgttttatctgttgtttgtcggtgaacg
ctctctactagagtcacactggctcaccttcgggtgggcctttctgcgtttatatactagtagcggccgctgcagtccgg
caaaaaagggcaaggtgtcaccaccctgccctttttctttaaaaccgaaaagattacttcgcgttatgcaggcttcctcg
ctcactgactcgctgcgctcggtcgtnngnnngcnnnnnnnnn",
	"t BBa_B0010 13");
**/