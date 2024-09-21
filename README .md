# CS-EASY-01 Hello world!
### 第一个程序

 #### 1.关于低级计算机语言和高级计算机语言

 

> 低级机算机语言

优点
* ~~快就是好，好就是快！~~
* 效率高，性能好
* 控制精确，适用于底层开发

缺点

 - 语法复杂，学习难度高，开发效率低
 - 由于与特定的硬件强相关，所以可移植性差
 - ~~我不会:sob:(bushi~~

> 高级计算机语言

优点
* 易读、易写、易维护
* 有大量现成的库
* 许多高级语言可跨平台运行
* ~~我可能会🤓~~

缺点
* 效率低于低级语言
*  不适合编写对性能要求极高的程序

> 个人

*要说喜欢当然是高级语言，毕竟更容易懂
但我也对会汇编语言的大佬心存敬畏，可能有朝一日我也会尝试学习吧* <(￣︶￣)>

## 2.hello.c
```
#include <stdio.h>    

int main() {
    printf("Hello, world!");
    return 0;
}
```
#### 各行

 - `#include <stdio.h>` 标准输入输出库的头文件，使得可以使用 `printf` 函数等,其中 `#include `为文件包含命令 ，用来引入头文件 `.h`
 - ~~一行空白，起强调作用~~
 - 用`int`定义了主函数 `main`
 - 用 `printf` 函数，将"Hello, world!" 输出到屏幕
 - 表示程序正常结束，返回值为 `0`
 - ~~大括号括回~~
 
 ## 3.删去哪一行？🧐
 
 - 显然，删去第二行 ---- 即空白行，不会对程序产生影响
 - ***如果删除 `return 0;` 行，程序仍然可以运行,C语言中,默认返回 `0`***
## 4.`int` 类型的意义
 - `int` 类型用于存储整数元素
 
 ***为何使用`int`进行声明***
 - `main`函数返回的整数值可以向操作系统传达程序执行的状态，`int`表示函数的返回值类型，表示该主函数的返回值是一个`int`类型的值，即整数
 - 在本程序中，返回0表示程序正常结束（大概？）
## 5.Hello glimmer!
![输入图片说明](/imgs/2024-09-21/V86PO99wmN0BkAnG.png)

# 小明の代码

```
#include <cstdio>

int mian() {
    short code;
    for(true){
		printf("Show me your code,please.")；
        scanf("%d",code);
        if(code >= 100000 || code <= 999999)printf("I am super hacker!");
        return 0;
        else printf(Fake code!);
    }
    return 0;
}
```
***错误***
由于是用C语言

> 我查到的资料里，小明用的许多命令只适用于C++，不知道对不对😑

 - ` cstdio` 应为` stdio.h`
 - `“mian”`应为`“main”`
 - `scanf("%d", code);`,**code**前需要加上 `&`
 - 数字大小需同时满足两个要求，`||`改为`&&`
 - `(Fake code)`改为`("Fake code")`
 - `short`>`int`
 - `true`>`1`
 - `for`>`while`
 - 增加花括号
#### 修改后
```
#include <stdio.h>
int main() {
    int code; 
    while (1) {
        printf("Show me your code, please: ");
        scanf("%d", &code);
        if (code >= 100000 && code <= 999999) {
            printf("I am super hacker!");
            return 0; 
        } else {
            printf("Fake code!\n");
        }
    }
    return 0;
}
```

> 几个疑难
> * 直接使用`int`时，正常输出，但从`short`修改为`int`时，则输入任何数字都视为`fake code`
> * 不输入数字而输入字母时，则生成大量`fake code`![输入图片说明](/imgs/2024-09-21/psDp13ZWfbnW3faG.png)
# 课后题
```#include <stdio.h>
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
```
> 用的是辗转相除法，问gpt还可以用`gcd`函数，但我不懂诶

