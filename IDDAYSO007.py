for t in range(int(input())):
    s = input()
    count = 0
    for i in range(1, len(s)):
        a = s[:i]
        b = s[i:]
        if sum(int(x) for x in a) <= sum(int(i) for i in b):
            count += 1
            print(a, b)
    # print(count)
