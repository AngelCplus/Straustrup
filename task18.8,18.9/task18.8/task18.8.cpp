

#include <iostream>
#include<string>
int b = 9;
int v = 45;


int main()
{
	int a = 7;
	int c = 10;

	int* g = new int(11);
		int* s = new int(100);
		std::cout << "global data" <<'\n' << &b << '\n' << &v << '\n';
		std::cout << "stack" <<'\n' << &a << '\n' << &c << '\n';
		std::cout << "dynamic" <<'\n' << &g << '\n' << &s << '\n';
	return 0;
}





//bool is_palindrome3(const char* s)
//{
//    bool isPalindrome = true;
//    int max = 0;
//    for (int i = 0; s[i] != '\0'; ++i)
//    {
//        ++max;
//    }
//
//    char* back = new char(max);
//
//    int count = 0;
//    for (int i = max - 1; i >= 0; --i)
//    {
//        back[count] = s[i];
//        if (back[count] != s[count])
//        {
//            isPalindrome = false;
//        }
//        ++count;
//    }
//
//    return isPalindrome;
//}
//bool is_palindrome2(const char s[], int n)
//{
//    bool isPalindrome = true;
//    char* back = new char[n];
//    int count = 0;
//    for (int i = n - 1; i >= 0; --i)
//    {
//        back[count] = s[i];
//        if (back[count] != s[count])
//        {
//            isPalindrome = false;
//        }
//        ++count;
//    }
// 
//    return isPalindrome;
//}
//bool is_palindrome(const std::string& a)
//{
//    bool isPalindrome = false;
//    std::string back;
//    for (int i = a.size() - 1; i >= 0; --i)
//    {
//        back.push_back(a[i]);
//    }
//    if (a == back)
//    {
//        isPalindrome = true;
//    }
//    return isPalindrome;
//}
//
//int main()
//{
//    std::cout << is_palindrome("home");
//    std::cout << is_palindrome2("home",4);
//    std::cout << is_palindrome3("home");
//}

