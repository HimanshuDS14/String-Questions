
def find(s):
    
    flag = 0
    for i in range(1,len(s)):
        if s[i] == s[0]:
             print(s[0])
             flag=0
             break
        else:
            flag = 1
    if flag == 1:
        print("Not Found")
        


s = 'geeksforeeks'
find(s)


        
