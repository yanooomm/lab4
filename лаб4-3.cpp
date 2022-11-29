// Задача 9  1/(1-x^2) = 1 + 2x + 3x^2 + ... + (n+1)x^n + ... , x принадлежит (-1; 1)

#include <iostream>

using namespace std;

int main()
{
	double x, s, a;
	int n;
	cin >> x >> n;
	s = 1;
	a = 1;
	for (int i = 1; i < n; i++)
	{
		s+= a * ((x * i + x) / i);
		a*= (x * i + x) / i;
		//cout << a <<  endl;
	}
	cout << s;
}

/*
0.5
5
3.5625
*/

/*
0.8
8
14.0948
*/