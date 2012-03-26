#!/usr/bin/perl

my $number = 1 + int rand 10;
do { print "Guess a num b/w 1 and 10:"} until <> == $number;
print "You got it!\n";

