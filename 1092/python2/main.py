#!usr/bin/env python
# coding: utf-8

while True:
    try:
        nums = map(int, raw_input().strip().split())
        if nums[0] == 0:
            break
        print sum(nums[1::])
    except EOFError:
        break

