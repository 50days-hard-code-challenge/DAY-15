def majorityElement(v: [int]) -> [int]:
    # Write your code here
    b=[]
    if len(v)==1:
        b.append(v[0])
        return b
    n=(len(v)//3)
    v.sort()
    c=1
    
    for i in range(len(v)-1):
        if v[i]==v[i+1]:
            c+=1
        else:
            if c>n:
                b.append(v[i-1])
            c=1
    if c>n:
        b.append(v[i-1])
        
    return b
