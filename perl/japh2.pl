#!/usr/local/bin/perl

undef$/;$_=<DATA>;y/ODA\n / /ds;@yoda=map{length}split;print chr
oct join('',splice(@yoda,0,3))-111 while@yoda;
__DATA__
         00O00O000O00O0000      000O         DD000000O0
        0DO0000000O0000O00     O00000        00O00000O0O
        0000      0O0         O00  O00       00D     0DO
         00O0     0O0        00D    000      DO0D00000D
          0O00    DOD       000000O00000     000  O00O
 DD0000D000O0     000      0O00O0000D00DO    0OD   D00O000D00O0
 00000DO00O0      000     000O        00D0   O0D    O00000O0DO0

 0O000   OD0D   O00O0   0000         DDDO000000      O00O000000
  0O000 O00DDO 00000   0O0D00        00O0O00000O    0O00O000000
   0O0O00OD00000DDD   00O  0D0       DDD     D0O    00O0D
    00000O00000000   O00    DO0      D00D00O000      00D00
     D0O00  O0000   000O000O00DO     000  00O0        0OD00
      O00    000   0O000D000O00O0    000   0D0O000000O00O00
       0      0   0O0D        0000   0O0    0O0000000O000O

[editorial note: would the author of this JAPH *please* stand up? ]
%
