#!/usr/bin/perl

use Tie::File;
for (@ARGV){
    tie my @array, 'Tie::File', $_ or die $!;
    unshift @array, "<>";
    }
