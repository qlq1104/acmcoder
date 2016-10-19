#!usr/bin/env python
# coding: utf-8

while True:
    try:
        a, b = map(int, raw_input().strip().split())
        if a == 0 and b == 0:
            break;
        print a + b
    except:
        break;

