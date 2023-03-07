#include<iostream>
#include<vector>
#include<string>
template<typename T>
std::vector<T> f(std::vector<T>& a, std::vector<T>& b)
{
    if (a.size() == b.size())
    {
        for (int i = 0; i < a.size(); ++i)
        {
            a[i] += b[i];
        }
    }
    else
    {
        std::cout << "wrong size!\n";
    }
    return a;
}//for 19.1

template<typename T,typename U>
double summ(std::vector<T>& vt, std::vector<U>& vu)
{
    double summ = 0;
    if (vt.size() == vu.size())
    {
        for (int i = 0; i < vt.size(); ++i)
        {
            summ += vt[i] * vu[i];
        }
    }
    else
    {
        std::cout << "wrong size!\n";
    }
    return summ;
   
}//for 19.2

int main()
{
    std::vector<int> a{ 4,6,7,8,9 };
    std::vector<int> b{ 20,60,70,80,100 };
    f(a, b);

    for (int i = 0; i < a.size(); ++i)
    {
        std::cout << a[i] << '\n';
    }//for 19.1

    std::vector<int> vt{ 4,6,7,8,9 };
    std::vector<double> vu{20.5,60.8,70,80,100 };

    std::cout<<summ(vt, vu)<<'\n';

    //for 19.2
    return 0;
}

