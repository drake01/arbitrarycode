#!/usr/bin/python3
import sys
cases = sys.stdin.readlines()
def merge_sort(arr):
    n = arr.length()
    if n <= 1:
        return arr

   # arr is indexed 0 through n-1, inclusive
    mid = floor(n/2)

    first_half = merge_sort(arr[mid-1])
    second_half = merge_sort(arr[mid:n-1])
    return merge(first_half, second_half)

def  merge(arr1, arr2):
    result = []
    while arr1.length() > 0 and arr2.length() > 0:
        if(arr1[0] < arr2[0]):
            print('1')
            result.append(arr1[0])
            arr1.remove_first()
        else:
            print('2')
            result.append(arr2[0])
            arr2.remove_first()

    result.append(arr1)
    result.append(arr2)
    return result

def solve(width, height, words):
    for size in range(1, 1 + max(width, height)):
        cols, rows = width // size, height // size
        w = list(reversed(words))
        r, c = 1, 0
        while w:
            c = len(w.pop())
            if c > cols:
                # word is too wide to fit on this line
                return size - 1
            while w and not (c + 1 + len(w[-1]) > cols):
                c += 1 + len(w.pop())
            if not w:
                # We fit everything, check the next larger font size
                continue
            r += 1
            if r > rows:
                # Too tall
                return size - 1
            c = 0
for caser in range(1, int(cases[1])):
    print(repr(cases[caser-1]))
    for li in range(case)
for case2 in range(1, 2*int(cases[0])+1):
    x = cases[case2-1]
    y = cases[case2]
   #print(x,"\n", y, "__")
for case in range(1, len(cases)-1):
    data = cases[case].split()
#    w, h = int(data[0]), int(data[1])
    words = data[2:]
#    print "Case #{}: {}".format(case, solve(w, h, words))


