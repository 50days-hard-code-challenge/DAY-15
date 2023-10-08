def alternateNumbers(a : List[int]) -> List[int]:
    # Write your code here.
    b=[]
    n=len(a)
    pos=0
    neg=0
    for i in range(n//2) :
        while a[pos]<0:
            pos+=1
        while a[neg]>0:
            neg+=1
        b.append(a[pos])
        b.append(a[neg])
        pos+=1
        neg+=1
    return b
