from __future__ import print_function
import sys
import re

file = sys.argv[1]

RFILE = open( file, "r" )

lines = RFILE.readlines()

# print ( "%s" % lines ) 

id = []											#sequence id matrix

for line in lines:
	i = re.search(r">\d+", line)
	if i:
		id.append(i.group(0))

preseq = [ x for x in lines if ">" not in x ] 	#removing lines in matrix that contain 
												#">" character.

preseq = [x.rstrip() for x in preseq]			#removing newline comments

# print ("%s" % preseq )

seqs = []										#sequence matrix
nearlyseq = []
k = 0
p = 0

# print("%s" %preseq[0])
# print("%s" %len(preseq[0]))

for j in range(0, len(preseq)):
	if len(preseq[j]) == 80 :
		nearlyseq[p] = preseq[j]
		p = p + 1
	elif len(preseq[j]) != 80 :
		seqs = preseq[j] + "".join(nearlyseq)
		p = 0
		k = k + 1

print ("%s" %seqs[3])
# print("%s" %len(preseq[3]))


# print ("%s" % seqs)

RFILE.close

########################################################
# Task 1 ###############################################
########################################################

#Module 1 - Read FASTA, div sequences (Break ) ACTION J 
#Input FASTA file 
#Output "seq_x" where x is the sequence id 

#Module 2 - Length of object + compare length  - ACTION V 
#Input "seq_x" 
#Output "seq_x" object I.D and "seq_x " length and comparison of modules 


