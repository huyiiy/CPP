#include <iostream>

// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp; 
// }

void swap(int &a, int &b)
{
    int temp = a;
    b = a;
    a = temp; 
}

void show(const int &a)
{
    std::cout<<a<<std::endl;
}
int main()
{
    // int a = 10;
    // int &b = a; //b是a的别名  引用定义必须初始化, 初始化以后不再改变朝向
    
    // int c = 20;
    // b = c;
    // std::cout<<a<<std::endl;

    // int a = 10;
    // int *b = &a;

    // int c = 20;
    // b = &c;

    // int a = 10;
    // int b = 20;
    // swap(a,b);
    // std::cout<<a<<","<<b<<std::endl;

    // int a = 10;
    // int &b = a;
    // //int *const b =&a;
    // std::cout<<sizeof(*b)<<std::endl;


    show(10);
    return 0;
}