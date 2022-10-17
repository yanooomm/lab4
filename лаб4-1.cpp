/* TextFile5 Дан текстовый файл, в котором записано несколько
натуральных чисел. Посчитать среднее арифметическое чисел, 
хранимых в файле.*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    ifstream f;
    f.open("TextFile5.txt");
    float x;
    int sum = 0, k = 0;
    if (!f.is_open())
    {
        cout << "Ошибка открытия файла";
    }
    else
    {
        while (f >> x)
        {
            sum += x;
            k += 1;
        }
        cout << sum / k;
    }
}

//1 2 3 -> 2
//123 456 789 -> 456
//98 54 32 5 -> 47
