
from itertools import permutations


def pro(lenn, a, b):
    ok = False
    res = 1e9
    if lenn & 1:
        lenn += 1
    le = lenn // 2
    s = str(a) * le + str(b) * le
    for i in permutations(s):
        if int(''.join(i)) >= n:
            res = min(res, int(''.join(i)))
            ok = True
    if not ok:
        pro(lenn + 2, a, b)
    else:
        print(res)


if __name__ == '__main__':
    t = int(input())
    for k in range(t):
        n, a, b = map(int, input().split())
        lenn = len(str(n))
        pro(lenn, a, b)
