#!/usr/bin/perl
#
perl -pi -e 'BEGIN { print "A new line" }' $(find . -name '*.py')

