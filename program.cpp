//program.cpp
#include <iostream>
#include "funcs.h" 
using namespace std;
int main()
{
	double a, b;
	while (count!=0)
	{
		cout << "Vvedite pervoe chislo: "; 
		cin >> a; 
		cout << "Vvedite vtoroe chislo: "; 
		cin >> b; 
		cout << "Vibirite deistvie: 1-clojenie; 2-vichitanie; 3-ymnojenie; 4-delenie; 0-exit: "; 
		cin >> count; 
		switch (count) // 
		{ 
			case 1: // count = 1 
			{ 
				cout << a << " + " << b << " = " << MySum(a, b) << endl;
				break;
			} 
			case 2: // count = 2 
			{
				cout << a << " - " << b << " = " << MySub(a, b) << endl;
				break;
			}
			case 3: // count = 3 
				{ 
				cout << " V razrabotke " << endl;
				break;
			}
			case 4: // count = 4
			{
				cout << " V razrabotke " << endl;
				break;
			} 
			default: 
				cout << "Nepravilni vvod" << endl;
		} 
	}
	system("pause"); 
	return 0; 
}
	