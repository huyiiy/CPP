#include <iostream>


enum color
{
    black,
    white,
};

enum RGB
{
    red,
    green,
    blue,
};

int main()
{
    if(color::white == RGB::green)
    {
        std::cout<<"equal"<<std::endl;
    }
    return 0;
}