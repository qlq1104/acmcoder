#!usr/bin/env python
# coding: utf-8

while True:
    try:
        a, b = map(int, raw_input().strip().split())
        print a + b
    except EOFError:
        break;
