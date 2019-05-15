#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    float a1, a2, a3;
    cout << "Enter first number: " << endl;
		cin >> a1;
	cout << "Enter second number: " << endl;
		cin >> a2;
	cout << "Enter third number: " << endl;
		cin >> a3;

    if (a1>=a2 && a1>=a3)
	{
		cout << "The largest number is: " << a1;
	}
	if (a2>=a1 && a2>=a3)
	{
		cout << "The largest number is: " << a2;
	}
	if (a3>=a1 && a3>=a2)
	{
		cout << "The largest number is: " << a3;
	}   
	_getch();
    return 0;
}



