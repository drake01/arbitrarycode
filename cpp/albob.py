#!/usr/bin/python
import psyco
psyco.full()

def calc_pow_twos(a):
    j = 0
    while not a % 2:
        a = a / 2
        j += 1
    return j,a

def calc_pow_next(a):
    j = 1
    for i in range(2,int(a/2)):
        if not a % i:
            j=i
            break
    return j

finale = 0

def calc_winner(a,fincur=0):
    #print('\nCall')
    if a ==0:
        #print('a', a,' fincur', fincur)
        if fincur%2:
            print "BOB"
        else:
            print "ALICE"
        #print(fincur)
    else:
        numtwos, acur= calc_pow_twos(a)
        fincur += numtwos
        #print(fincur, acur)
        numnext = calc_pow_next(acur)
        fincur += 1
        acur -= acur/numnext
        #print(fincur, acur)
        calc_winner(acur,fincur)
    return fincur



def main():
  #print(calc_pow_twos(24))
  #print(calc_pow_next(97))
  b = int(input())
  while b:
      b= b-1
      a = input()
      (calc_winner(int(a)))


if __name__ == '__main__':
    main()
