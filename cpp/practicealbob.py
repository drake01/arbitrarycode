#!/usr/bin/python3

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
    if a ==0:
        if fincur%2:
            print("Alice won")
        else:
            print("Bob won")
    else:
        numtwos, acur= calc_pow_twos(a)
        fincur += numtwos
        numnext = calc_pow_next(acur)
        fincur += 1
        acur -= acur/numnext
        calc_winner(acur,fincur)
    return fincur



def main():
  a = input("Enter something: ")
  (calc_winner(int(a)))
  pass


if __name__ == '__main__':
    main()

