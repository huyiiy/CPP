#include <iostream>
#include <cstring>
bool func(int a, char *errorMsg = NULL)
{
    if(errorMsg != NULL)
        strcpy(errorMsg,"connect error!\n");
    return false;
}
// 占位参数
int add(int a,int b,int)
{
    return a + b;
}

int main()
{
    // func(1);
    // add(1,2);
    
    return 0;
}