def first_repeat(s):

    d = {}
    words = s.split(' ')

    for i in words:
        if i not in d:
            d[i] = 1
        else:
            return i

s = "Ravi had been saying that he had been there"

print(first_repeat(s))
    
