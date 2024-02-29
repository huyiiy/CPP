#include <iostream>
#include <cstdlib>
#include <cstring>
// int main()
// {
//     char** str = (char**)malloc(sizeof(char*) * 10);
//     if(str == NULL)
//         return -1;

//     for(int i = 0; i < 3; i++)
//     {
//         str[i] = (char*)malloc(sizeof(char) * 10);
//         if(str[i] == NULL)
//         {
//             std::cout<<"malloc error!\n";
//             return -1;
//         }
//         strcpy(str,"hello");
//     }

//     for (int i = 0; i < 3; i++)
//     {
//        std::cout<<str<<std::endl; 
//     }

//     for (int i = 0; i < 3; i++)
//     {
//        free(str[i]);
//     }

//     free(str);
//     return 0;
// }


int main()
{
    // char *s = (char*)malloc(sizeof(char) * 10);
    // char * s = new char[10]; 
    // //1、不需要计算内存大小
    // //2、不需要对指针进行转换
    // //3、不需要判断指针是否为空：抛出异常，终止程序
    // strcpy(s,"hello");
    // std::cout<<s<<std::endl;

    // 释放数组
    // delete s;

    // int *a = new int(10);//小括号是赋值的，【】申请数组
    // std::cout<<*a<<std::endl;
    // delete a;

    char **s = new char*[3];
    for (int i = 0; i < 3; i++)
    {
        s[i] = new char[10];
        strcpy(s[i],"hello");
        
    }
    for (int i = 0; i < 3; i++)
    {
       std::cout<<s[i]<<std::endl; 
    }

    for (int i = 0; i < 3; i++)
    {
       delete []s[i];
    }

    delete []s;
    
    return 0;
}