#!/usr/bin/python3 -tt

import sys
def Cat(filename):
    f=open(filename,'rU')
    for line in f:
        print(line)

        def main():
            Cat(sys.argv[1])



if __name__ == '__main__':
  main()
