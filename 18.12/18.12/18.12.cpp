
#include <iostream>
#include"Cave.h"
#include<vector>
#include<random>
#include<ctime>

int main()
{
    srand(time(0));//здесь задается стартовое число для генерации рандомной последовательности. В аргументе устанавливается функция тайм
   // которая возвращает сумму прошедших секунд с 1970 года в каждый момент времени.Таким образом обеспечили изменямость стартого числа ,
       // так как от этого зависит генерация последовательности чисел (т.е. если запускать стартовое число одинаковое то и генерация 
           // последовательности будет одинаковое).Стартовое число как то отправляется в систему откуда функция rand()берет и при каждом ее
      //  вызове генерирует последовательность и записывает этот результат уже для следующей генерации
    std::vector<Cave> caves;
    int number = 0;
    int status = 0;
    bool num = true;
    bool sta = true;
    while (caves.size()<=6)
    {
        int count = 0;
        
        if (caves.size() == 0)
        {
            int number = rand() % 6 + 1;// вданом случае диапазон от 1 до 6(сначала выплняется действие с остатком)
            caves.push_back(Cave(number));
        }
        else
        { 
            if (num)
            {
                number = rand() % 6 + 1;
            }
            if (sta)
            {
                status = rand() % 4;// здесь диапазон от 0 до 3
            }
            
            for (int i = 0; i < caves.size(); ++i)
            {
                if (caves[i].number == number )//&& caves[i].status == status)//1 яма 1 вампус и 1 мыш должны быть еще в условии
                {
                    num=true;
                    sta = false;
                    break;
                }
                
                if (caves[i].status == status)
                {
                    num = false;
                    sta = true;
                    
                    break;
                }
                
                    if (count != 4)
                    {
                        caves.push_back(Cave(number, status));
                        num = true;
                        sta = true;
                        ++count;
                    }
                    else
                    {
                        caves.push_back(Cave(number));
                    }
            }
        }
        

            ;

       
    }
}
