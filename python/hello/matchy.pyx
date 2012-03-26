#!/usr/bin/python
import re
import urllib

regex = re.compile(r'href="([^"]+)"')

def matchd(url, max=100):
    "Print the first several url refs in given urls."
    data = urllib.urlopen(url).read()
    hits = regex.findall(data)
    for hit in hits[:max]:
        print urllib.basejoin(url, hit)

matchd("http://python.org")
