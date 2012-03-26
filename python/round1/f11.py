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
    for num in (cases[case]):
        print(num)
        num2 = int(num)
        for ij in range(1,num2/2+1):
            if ( num % ij == 0):
                fir = ij
                sec = num / ij
                res.append(hello(fir)+ hello(sec))
        final = res.min()
    print("Case #{}: {}".format(case,final))





        #letters[letter] += 1
    #letters['C'] /= 2
    #words = min(int(letters[x]) for x in "HACKERCUP")
   # print("Case #{}: {}".format(case,words))



