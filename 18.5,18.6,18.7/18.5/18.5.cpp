

#include <iostream>
#include<sstream>

int counterSymb(const char* smb)
{
	int i = 0;
	while (smb[i] != '\0')
	{
		++i;
	}
	return i;
}
char* copyInOne(char* ptr,const char* s1, int& i)
{
	for (int c = 0; s1[c] != '\0'; ++c)
	{
		ptr[i] = s1[c];
		++i;
	}
	return ptr;
}

 
 char* cat_dot (const char* s1, const char* s2, const char* punct)
{
	 int max = counterSymb(s1) + counterSymb(s2) + counterSymb(punct)+1;
	 char* ptr= new char[max] ;
	 int countFor = 0;
	 copyInOne(ptr, s1, countFor);
	 copyInOne(ptr, punct, countFor);
	 copyInOne(ptr, s2, countFor);
	 ptr[countFor] = '\0';
	 return ptr;
	 
}


int main()
{
	char* ptr = cat_dot("hot", "boy", ".");
	std::cout <<ptr ;
	delete[] ptr;
	return 0;
}






//for 18.6
//std::string cat_dot(const std::string& s1,const std::string& s2,const std::string& punct)      // если передавать в 
// аргументы постоянные значение константного обозначения выдаст ошибку, так как константным зачениям должны соответсвовать
//  константные аргументы, однако если аргкмен не будет константным и не будет передаваться по значению, то ошибка исчезнет 
//{
//
//    std::ostringstream os;
//    os << s1 << punct << s2;
//
//   
//    return os.str();
//}
//
//int main()
//{
//    std::cout << cat_dot("hot","boy",".");
//}

//for 18.5
//std::string cat_dot(const std::string& s1, const std::string& s2)
//{
//
//    std::ostringstream os;
//    os << s1 << '.' << s2;
//
//
//    return os.str();
//}
//
//int main()
//{
//    std::cout << cat_dot("hot", "boy");
//}