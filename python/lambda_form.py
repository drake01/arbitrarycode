#!/usr/bin/python
#Filename: lambda_form.py

def make_repeater(n):
    return lambda s: s * n

twice = make_repeater(2)
twicetheword = twice('word')
print twicetheword
quad = make_repeater(4)
quadword = quad('drakeisthebest')
print quadword
