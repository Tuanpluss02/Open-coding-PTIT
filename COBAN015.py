from itertools import combinations, permutations

t = int(input())
for k in range(t):
    a, b = map(int, input().split())
    l = [int(x) for x in range(1, a+1)]
    c = list(combinations(l, b))
    print(len(c))
    for i in c:
        print("[", end="")
        print(*i, end="")
        print("]")
