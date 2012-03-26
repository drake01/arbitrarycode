#!/usr/bin/python3
ss = input()
oc = {}
for word in ss.split():
    oc[word] = oc.get(word,0) + 1
for word in oc:
    print("The word", word, "occurs", oc[word], "times in the string")
