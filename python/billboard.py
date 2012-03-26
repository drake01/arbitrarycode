#!/usr/bin/python3
import sys
cases = sys.stdin.readlines()
def solve(width,height,words):
    for size in range(1,1+max(width,height)):
        cols,rows = width//size, height//size
        w = list(reversed(words))
        r,c = 1,0
        while w:
            c = len(w.pop())
            if c > cols:
                return size-1
            while w and not(c+1+len(w[-1])> cols):
                c += 1 + len(w.pop())
            if not w:
                continue
            r +=1
            if r > rows:
                return size -1
            c = 0
        for case in range(1,len(cases)):
            data = cases[csae].split()
            w,h = int(data[0]),int(data[1])
            words = data[2:]
            print("Case #{}:{}",format(case,solve(w,h,words)))


