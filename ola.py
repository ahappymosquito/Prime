import time

def getPrimes(n):
    prime = []
    isprime = [0]*n
    for i in range(2,n):
        if not isprime[i]:
            prime.append(i)
        for j in prime:
            if j*i<n:
                isprime[j*i] = 1
            if not i%j:
                break
    return prime

def goldBach(n,prime):
    for i in range(4,n,2):
        flag = 0
        for j in prime:
            if i>j:
                if i-j in prime:
                    flag = 1
                    break
        if flag:
            continue
        else:
            return False
    return True
    
if __name__ =="__main__":
    M = 1000000
    t = time.time()
    P = getPrimes(M)
    print(len(P))
    print(time.time()-t)

    t = time.time()
    if goldBach(M,P):
        print(time.time()-t)



    
