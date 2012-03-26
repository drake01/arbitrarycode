#!/usr/bin/python3
import sys, math
from collections import defaultdict
cases = sys.stdin.readlines()
def hello(x):
    for i in range(15):
        for j in range(15):
            if( x == math.factorial(i+j)/(math.factorial(i)*math.factorial(i)) ):
                sol = i + j
    return sol

res = []
for case in range(1,len(cases)):
    #letters = defaultdict(int)
    #print(cases[case])
    #for num in (cases[case]):
        print(cases[case])
