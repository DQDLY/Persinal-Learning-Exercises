#include <stdio.h>
#include <math.h>

// 1的1次方 + 2的2次方 + 3的3次方 + …… + 10的10次方。

long long NoMath(int num);
long long HaveMath(int num);
int main()
{
    int num;
    scanf("%d",&num);
    printf("%lld\n",NoMath(num));
    printf("%lld\n",HaveMath(num));
    return 0;
}

long long NoMath(int num)
{
    long long sum = 0;
    for(int i = 1 ; i <= num ; i++)
    {
        long long pow = 1;
        for(int j = 1 ; j <= i ; j++)
        {
            pow *= i;
        }

        sum += pow;
    }
    return sum;
}

long long HaveMath(int num)
{
    int i,j;
    long long sum = 0;
    for(i = 1,j = 1 ; i <= num ; i++,j++)
    {
        sum += pow(i,j);
    }
    return sum;
}