for t in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    if sum(a[:n-1]) == a[n-1]:
        print(0)
        continue
    mn = 1e9
    tmp = a[0] + a[n-1]
    for i in range(1, n-1):
        # print(mn, abs(tmp - a[i] - a[n-i-1]))
        mn = min(mn, abs(tmp - a[i] - a[n-i-1]))
    print(mn)
