import sys
cases = sys.stdin.readlines() 
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
 
 
for case in range(1, len(cases)):
    data = cases[case].split()
    w, h = int(data[0]), int(data[1])
    words = data[2:]
    print "Case #{}: {}".format(case, solve(w, h, words))
 
 
