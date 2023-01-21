from math import ceil


def minions(arr1, mid1, h1):

    csum = 0
    for i in arr1:
        csum += ceil(i/mid1)

    if csum > h1:
        return False

    return True

t = int(input())
while t > 0:

    n, h = map(int, input().split())
    arr = list(map(int, input().split()))

    i = 1
    j = max(arr)
    mini = j
    while i <= j:
        mid = (i+j)//2
       # print(m)
        if minions(arr, mid, h):
            if mid < mini:
                mini = mid
                # print(min_k)
                j = mid-1
            else:
                break
        else:
            i = mid+1

    print(mini)
    t = t-1
