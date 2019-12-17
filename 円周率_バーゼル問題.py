# -*- coding: utf-8 -*-

#円周率をバーゼル問題から求める

a = [0]

for i in range(1, 10000000):
    a.append(1 /(i ** 2))
    pi = (sum(a) * 6) ** 1/2
    print("n = {}, pi = {}".format(i, pi))
