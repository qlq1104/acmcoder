#!usr/bin/env python
# coding: utf-8

n = int(raw_input().strip())
for i in range(n):
    nums = map(int, raw_input().strip().split())
    print sum(nums[1::])
