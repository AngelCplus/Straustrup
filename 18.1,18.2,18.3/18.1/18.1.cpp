

#include <iostream>
int strcmp(const char* s1, const char* s2)
{

	int result = 0;
	
	while (*s2 != '\0' || *s1 != '\0')
	{
		if (*s1 < *s2)
		{
			result = -1;
			break;
		}
		else if (*s1 > *s2)
		{
			result = 1;
			break;
		}
		else if (*s1 == *s2)
		{
			++s1;
			++s2;
			if (*s2 == '\0' && *s1 == '\0')
			{
				result = 0;
			}
			else if (*s2 == '\0')
			{
				result = 1;
			}
			else if (*s1 == '\0')
			{
				result = -1;
			}
		}
	}
	return result;
}
int main()
{
		std::cout << strcmp("sum","sum");
	return 0;
}






















//for 18.2
//const char* findx(const char* s, const char* x)
//{
//    int count = 0;
//	const char* test = x;
//    while ( *test != '\0')
//    {
//        ++count;
//        ++test;
//    }
//
//    test = x;
//    int count2 = 0;
//    while (*s != '\0')
//    {
//        count2 = 0;
//        x = test;
//        if (*x == *s)
//        {
//            ++x;
//            ++s;
//            while (*x == *s)
//            {
//                ++count2;
//                if (count2 == count)
//                {
//                    s -= count;
//                    return s;
//                }
//                ++x;
//                ++s;
//            }
//        }
//        else
//        {
//            ++s;
//        }
//    }
//    return s;
//
//}
//
//int main()
//{
//
//    
//    std::cout<<findx("fusksimple", "simple");
//
//	return 0;
//}





//for 18.1
//char* strdup1(const char* c)//конст чар озачает что нельзя менять память под указателем а е сам адрес указателя
//{
//    int count = 0;
//    const char* test = c;
//    while (*c != '\0')
//    {
//        ++count;
//        ++c;
//    }
//    c = test;
//char* ptr = new char[count+1];
//char* copy = ptr;
//    while (*test != '\0')
//    {
//        *ptr = *test;
//        ++ptr;
//        ++test;
//    }
//    *ptr = '\0';
//    ptr = copy;
//    return ptr;
//}
//int main()
//{
//   std::cout<< strdup1("simple")<<'\n';
//}//исходя из задания можно сделать вывод что за указателями и его изменениями необходимо следить куда он указывает после использования 
