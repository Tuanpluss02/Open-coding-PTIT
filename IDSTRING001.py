
if __name__ == '__main__':
    t = int(input())
    for k in range(t):
        s = input().split()
        s1 = s[2][1:-2]
        s2 = s[5][1:-2]
        # print(s1, s2)
        if s1 == "" or s2 == "":
            print(0)
            continue
        try:
            print(1 if s2.index(s1) == 0 else s2.index(s1))
        except:
            print(-1)
