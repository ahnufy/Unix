#include <stdio.h>
#include <stdarg.h>

int mul(int num,int data1,)
{
    int total = data1;
    int arg,i;
    va_list ap;
    va_start(ap,data1);
    for(i=1;i<num;i++)
    {
        arg = va_arg(ap,int);
        total*=arg;
    }
    va_end(ap);
    return total;
}

long mul2(int i,)
{
    int *p,j;
    p = &i+1;//p指向参数列表下一个位置
    long s = *p;
    for (j=1;j<i;j++)
        s *= p[j];
    return s;
}

int main()
{
    printf("%d\n",mul(3,2,3,5));
    printf("%d\n",mul2(3,2,3,5));
    return 0;
}