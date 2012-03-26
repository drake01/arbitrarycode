#!/usr/bin/python
#Multithreaded Framework

import sys, re

pat = re.compile('aa[bc]*dd')

while 1:
    line =raw_input('Enter a line ("q" to quit):')
    if line == 'q':
        break
    if pat.search(line):
        print('matched:',line)
    else:
        print('no mathch:',line)


