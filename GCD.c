#include <stdio.h>
int main()
{
    int m,n,t;
    printf("请输入两个数,其中0<m,n<2^31,中间用逗号隔开:");
    scanf("%d,%d",&m,&n);
    t=m%n;
    while(t!=0)
    {
        m=n;
        n=t;
        t=m%n;
    }
    printf("最大公约数是：%d",n);
}
