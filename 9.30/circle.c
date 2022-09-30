#include <stdio.h>
int main()
{   
    int radius = 10;
    const double Pi = 3.14159;
//const constant 不会修改的常数
//声明定义DeclareDefine 变量类型是int整型integer
//radius 指代了一个一个位置&radius 在内存中

    double circumference = 2 * Pi * radius;
    double area = Pi * radius * radius;

    printf("circumference = %.2f\narea = %.2f\n",circumference, area);

    return 0;
}

