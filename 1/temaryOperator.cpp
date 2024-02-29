#include <iostream>


int main()
{
    const int a = 10;
    int *p = (int *)&a;
    *p = 20;
    std::cout<<a<<std::endl;
    std::cout<<*p<<std::endl;
    printf("&a:  %x  p:%x\n", &a,p);
    return 0;
}