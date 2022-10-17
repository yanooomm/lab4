/* Найти все целые числа на промежутке [a;b] у которых первая 
и последняя цифры совпадают. Если таких чисел нет, то результирующий 
файл должен быть создан, но пуст.*/
#include <iostream>
#include <fstream>

using namespace std;

int ch(int a)
{
    int k = 1;
    while (a > 0)
    {
        k *= 10;
        a /= 10;
    }
    return k;
}

int main()
{
    int a, b, k = 1;
    cin >> a >> b;
    ofstream f;
    f.open("TextFile10.txt");
    if (!f.is_open())
    {
        cout << "Ошибка при открытии файла";
    }
    else
    {
        for (a; a<=b; a++)
        {
            if ((a % 10) == ((a / (ch(a) / 10))))
            {
                f << a << endl;
            }
        }
    }
    f.close();
}
/* 12 54
22 
33 
44*/

/* 930 1052
939
949
959
969
979
989
999
1001
1011
1021
1031
1041
1051*/