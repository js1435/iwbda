from __future__ import print_function
import sys
import re

file = sys.argv[1]

RFILE = open( file, "r" )

lines = RFILE.readlines()

seqs = lines[1::2] 					#slicing lines matrix to take only the second 
									#elements of the array i.e. the DNA seq

for i in range(0, len(seqs) ):
	seq = seqs[i].rstrip()			#removing newline comments
	# print ( "%s" % seq )

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


