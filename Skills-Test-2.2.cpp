#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
int main()
{
    int a, b;
	cout << "Enter a number: " << endl;
	cin >> a;
	cout << "Multiplication Table of entered number: " << endl;

    for(b=1; b<=10; ++b)
    {
		printf("%d * %d = %d \n" , a, b, a*b);
	}
    _getch();
    return 0;
}

