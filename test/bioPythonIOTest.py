from __future__ import print_function
import sys
import re
import numpy as np
import Bio
from Bio import SeqIO
from Bio.Seq import Seq
from Bio.Alphabet import IUPAC


seq_record = list(SeqIO.parse("dna_sequences.fasta","fasta"))

print(seq_record[12])

