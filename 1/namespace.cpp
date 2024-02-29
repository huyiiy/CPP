#include <iostream>
#include <functional>
#include <sys/socket.h>
//尾插函数

namespace A
{
    void InsertTail()
    {
        std::cout<<"first"<<std::endl;
    }
    int a = 10;
    namespace B
    {
        int a = 30;
    }
}

namespace B
{  
    void InsertTail()
    {
        std::cout<<"second"<<std::endl;
    }
    int a = 20;
}
int main()
{
    
    return 0;
}