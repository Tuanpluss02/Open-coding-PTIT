

if __name__ == '__main__':
    t = int(input())
    for k in range(t):
        n = int(input())
        a = sum([int(i)**len(str(n)) for i in str(n)])
        if a == n:
            print('1')
        else:
            print('0')
