#include <iostream>
#include "S.h"
#include <string>
#include <vector>

template <typename T>
void read_val(T& v)
{
    std::cin >> v;
}


int main()
{
    std::vector<int> wow{ 2,10,15 };

    S<int> i(20);
    S<char>c ('v');
    S<double>d(20.4);
    S<std::string>s("Hello!");
    S<std::vector<int>> v(wow);

 std::cout << i.get() << '\n';
    std::cout << c.get() << '\n';
    std::cout << d.get() << '\n';
    std::cout << s.get() << '\n';
    for (int i = 0; i < v.get().size(); ++i)
    {
        std::cout << v.get()[i] << '\n';
    }
   //for task 9(4)

    c.get();
    //for task 9(8)
    
     
    std::vector<int> wow2{ 88,999,100 };
    i=S<int> (80);
    c=S<char>('f');
    d=S<double>(99.5);
    s=S<std::string>("fix");
    v=S<std::vector<int>> (wow2);


    std::cout << i.get() << '\n';
    std::cout << c.get() << '\n';
    std::cout << d.get() << '\n';
    std::cout << s.get() << '\n';
    for (int i = 0; i < v.get().size(); ++i)
    {
        std::cout << v.get()[i] << '\n';
    }//for task 9(10)
    

    //S<int> i3;
    //S<char>c3;
    //S<double>d3;
    //S<std::string>s3;

    //read_val(i3);
    //read_val(c3);
    //read_val(d3);
    //read_val(s3);
   
    //std::cout << i3.get() << '\n';
    //std::cout << c3.get() << '\n';
    //std::cout << d3.get() << '\n';
    //std::cout << s3.get() << '\n'; //for task 9(13)
    

    S<std::vector<int>>v3;
    read_val(v3);
    std::cout << v3;
    return 0;
}

