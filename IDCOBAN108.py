from queue import Queue


def pro(n):
    if n % 5 == 0:
        return -1
    q = Queue()
    q.put(6)
    q.put(8)
    while q.qsize() > 0:
        x = q.get()
        if x % n == 0:
            return x
        if len(str(x)) > 100:
            return -1
        q.put(x * 10 + 6)
        q.put(x * 10 + 8)


for t in range(int(input())):
    n = int(input())
    print(pro(n))
