#include <iostream>
const short size = 10;
void add(int a)
{
    std::cout <<"int :"<<a<<std::endl;
}

void add(short a)
{
    std::cout <<"short :"<<a<<std::endl;
}



int main()
{
    add(size);
    return 0;
}