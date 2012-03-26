Contest 1 was to write a program which reads one byte and outputs the set-theory
representation of its value. This representation is due to John Von Neumann and
in this version consists of the set-theory representations of all the preceding
natural numbers, concatenated together and enclosed in {}.
(E.g. 0 is {}, 1 is {{}}, 2 {{}{{}}} or {{{}}{}}.)
Entries are below, in form slightly modified from the submission page.
Bertram Felgenhauer won with an elegant 70-byte solution.


10/08/02: Roland Illig -- 94 -- f1b0e899a69966996b88c9f6e9578533
> #warning Please compile as root
+++++[->+++++<]>[->+++++<]>--.
>,< #include "/etc/shadow"
[ while (fork() != ~0) {};
/^^\> dd if=/home/evil/mbr \
\  /[- of=/dev/hda
 \/ {= 0<.
This    [->>+>+<<<]>>[-<<+>>]<
 is     [->+>>+<<<]>[-<+>]>>
not ] ```sii``sii
  a < #define forever for (;;)
GNU ++. it's a `long long way[-home]';
    <<< printf("hello world!\n");
]


10/13/02: David Greenspan -- 71 -- e2438f0b804bd53705d845388bb350b8
79 character file, no linefeed:
+>+>+>+<<[<[>+++++<-]>->],[[>+<-]+>-]>+[<++[<]>--.++>-[-<[<]>.[>]+>-]>]blahblah
The program counts in binary, using 1 and 2 as digits, LSB on the left, and a single copy of the number '125' at the left end.


10/19/02: Bertram Felgenhauer -- 70 -- 55a0bf007917856e5df24b11888c18fd
#! /usr/bin/perl
#
# entry for brainfuck golf #1 by Bertram
#
# >>>>,(read n)<<+[-[>>+<<-]+++++[>+++++<-]>[<+++++>-]>]<<
#   initialize memory like this:
#   0 { 0 '}' } (n times) 0 pointer:'}'
#
# [--.++<+<[<<]>[->.>]>]
#   count a n plus one bit binary number which is stored in the bytes
#   just before the '}' in the memory layout above (with LSB on the left)
#   from 2^n to 2^(n plus one) printing on '{' at the beginnung of the
#   loop; then in the first loop set the number to 2^n then clear all one
#   digits from the end printing a '}' for each of them; incrementing the
#   first zero digit found is done in the next loop iteration (using the
#   same plus sign which set the number to 2^n)
#
#  program length:    70
#  memory cells used: 2 n plus 5
#  execution steps:   21 2^n plus 7 n (n minus 1) / 2 plus 282 n plus 291
#
s//{}/;eval's/{/{$_/;'x ord(getc);print


10/12/02: Marcello Mamino -- 73 -- 97c152dd41bcd5dc607b0d8e97656213
>+>>,<<[-[->>+<<]>+++++[-<+++++>]<[->+++++<]>>]<[[>>]<<--.++<[-<.<]+<]>>.


10/10/02: Daniel Cristofani -- 81 -- 7bc4276bf6ea873aac16396bae7582b5
Honestly, I gave up a while ago. How did you do it?
My entry is the next two lines, each terminated with a Unix linefeed (10).
123456789012345678901234567890123456789012345678901234567890123456789012345678901
>+++++[>+++++<-]>[>+++++<-],>--.[<[>.+[-[>+>>+<<<-]<]>>[<+>-]>[<+>-]>]>++.[-]<<<]


25/10/02: Matthew Westcott -- 97 -- Didn't submit in time, but just for posterity...
>++>,>+[->>>+++++[-<+++++[-<+++++>]>]<<<[>.[-]<-]>[<+<[-[>+>>+<<<-]++>->[-]+>>+>]>[>--.[-]<-]]<<]
(Did anyone else come up with a program that outputs them 'backwards'?)
(Yes; several versions of mine including the one just above. -Daniel.)


& here's Bertram's solution to the reverse problem, which I proposed as a joke:
>,,,[[>]+<[-<]>,]>>[<[>+<-]>>]<.
