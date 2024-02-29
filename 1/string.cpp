#include <iostream>
#include <string>

int main()
{
    //动态数组
    std::string s;
    s = "helloworld";
    std::string s1 = s + "world";

    if (s == s1)
    {
        std::cout<<"equal"<<std::endl; 
    }
    else
    {
        std::cout<<"not equal"<<std::endl;
    }

    std::cout<<s.substr(1,4)<<std::endl;
    std::cout<<s.find_first_of("ello")<<std::endl;
    return 0;
}