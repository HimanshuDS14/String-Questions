import itertools


def subSeq(string):

    comb = []

    for i in range(1 , len(string)+1):
        comb.append(list(itertools.combinations(string,i)))

    for c in comb:
        for t in c:
            print(''.join(t) , end = " ")

subSeq('abc')
