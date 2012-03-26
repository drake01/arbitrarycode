#!/usr/bin/python3
import sys
from collections import defaultdict
cases = sys.stdin.readlines()
for case in range(1,len(cases)):
    letters = defaultdict(int)
    for letter in cases[case]:
        letters[letter] += 1
    letters['C'] /= 2
    words = min(int(letters[x]) for x in "HACKERCUP")
    print("Case #{}: {}".format(case,words))


