n=int(input("Enter the number of words : "))
a=[]
order=[]
for i in range(n):
    t=input("Enter the word : ")
    a.append(t)
    order.append(len(t))
order.sort()
lim=order[0]
common=[]
k=0
for i in range(lim):
    c=0
    h=a[0][i]
    for j in a:
        if h==j[i]:
            c+=1
    if c==n:
        common.append(a[0][i])
common = ''.join(common)
if len(common)==0:
    print("There are no common prefixes")
else:
    print("The common prefix is \""+common+"\"")



