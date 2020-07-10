# UPARSE
# Language: C++
# Input: FASTA
# Output: PREFIX
# Tested with: PluMA 1.0, GCC 4.8.4
# Dependencies: USearch 11.0

PluMA plugin that takes a FASTA file of sequences and
clusters them into OTUs using UPARSE (Edgar et al, 2013).

Input is the FASTA file, output is a prefix that will be
used for a FASTA file of OTUs and a TXT file of statistics on each
OTU (i.e. size).  
