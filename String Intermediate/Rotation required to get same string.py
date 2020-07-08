string = "geeks"

check = ''

for i in range(1 , len(string)+1):

    check = string[i:] + string[:i]
    print(check)

    if check == string:
        print(i)
        break
    
