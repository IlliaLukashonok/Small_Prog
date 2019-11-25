#include <iostream>
#include <string.h>
#include "AnciiPainting.h"

int main()
{
	using namespace std;
	const string BASE = "studt_";			//Объявление всех переменных
	const string PASSWORD_BASE = "Studt_";	//и константы
	unsigned short stud = NULL;				//
	unsigned int start_point = NULL;		//

	MyLogo("25-NOV-2019");

	cout << "\nHi!\n__ students\b\b\b\b\b\b\b\b\b\b\b";
	cin >> stud;
	cout << "From ";
	cin >> start_point;
	
	cout << "\xC9";											//Очень большие рисовашки!
	AnciiPaint(15, "\xCD");
	cout << "\xD1";
	AnciiPaint(15, "\xCD");
	cout << "\xBB\n";

	cout << "\xBA     Login     \xB3   Password    \xBA\n";
	cout << "\xC7";
	AnciiPaint(15, "\xC4");
	cout << "\xC5";
	AnciiPaint(15, "\xC4");
	cout << "\xB6\n";

	bool flag = false;
	for (int i = 0; i < stud; i++)//Main loop
	{
		if (start_point < 96)//Не ну а што не понятно?
		{
			cout << "\xBA  " << BASE << "00" << start_point
				<< "   \xB3   " << PASSWORD_BASE << "00" << start_point<< "  \xBA" << endl;
			start_point += 1;
		}
		else
		{
			if (flag == false) //Проверка во избежание постоянного присваивания
			{
				if (start_point < 2900)
				{
					start_point = 2900;
					flag = true; //Машем флагом
				}
			}
			cout << "\xBA  " << BASE << start_point
				<< "   \xB3   " << PASSWORD_BASE << start_point<< "  \xBA" << endl;
			start_point += 1;
		}
	}

	cout << "\xC8";		//Рисовашки!
	AnciiPaint(15, "\xCD");
	cout << "\xCF";
	AnciiPaint(15, "\xCD");
	cout << "\xBC\n";

	system("pause");
}

