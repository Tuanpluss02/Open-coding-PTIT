#include <stdio.h>
int a[2000002];
int main()
{
    int t, n, carry, l;
    scanf("%d", &t);
    while (t--)
    {
        carry = 0;
        scanf("%d", &n);
        l = n << 1;
        for (int i = 1; i ^ l; ++i)
        {
            if (i <= n)
                carry += i;
            else
                carry += (l - i);
            a[i] = carry % 10;
            carry /= 10;
        }
        if (carry)
            printf("%d", carry);
        for (int i = l - 1; i > 0; --i)
            printf("%d", a[i]);
        printf("\n%d\n", l);
    }
}