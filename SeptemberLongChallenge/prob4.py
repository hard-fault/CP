def primes(n):
    primfac = []
    i = 2
    while i*i <= n:
        while (n % i) == 0:
            primfac.append(i)
            n/=i
        i += 1
    if n > 1:
       primfac.append(n)
    return primfac

t=int(input())
while t:
    t=t-1
    #a=int(input())
    a=10**1000
    myprime=primes(int(a))
    n=len(myprime)
    print(n)
    for i in myprime:
        print(i)
