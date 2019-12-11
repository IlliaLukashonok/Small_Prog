#ifndef AnciiPainting
#define AnciiPainting

#include <iostream>
/*
Вывод линии символов.
Первый аргумент - кол-во символов.
Второй - символ
*/
void AnciiPaint(int x, const char* y)
{
	for (int i = 0; i < x; i++)
	{
		std::cout << y;
	}
}

/*
Вывад лініі сымбалаў з тэкстам і цэнтроўкай тэксту
Першы аргумэнт - колькасьць сімбалаў
Другі - сімбал
Трэці - тэкст які трэ разьмесьціць сярод сімбалоў
Чацьверты - дзе трэ разьмесьціць адносна сімбалаў
*/
void AnciiPaint(int x, const char* y, const char* text, const char* place)
{
	x = x - int(strlen(text));
	if (place == "center") //Центрирование по центру
	{
		for (int i = 0; i < x / 2; i++)
		{
			std::cout << y;
		}
		std::cout << text;
		for (int i = 0; i < x / 2; i++)
		{
			std::cout << y;
		}

	}
	else
	{
		if (place == "left") //По левому
		{
			std::cout << y << text;
			for (int i = 0; i < x - 1; i++)
			{
				std::cout << y;
			}
		}
		else
		{
			if (place == "right") //По правому боку
			{
				for (int i = 0; i < x - 1; i++)
				{
					std::cout << y;
				}
				std::cout << text << y;
			}
			else
			{
				for (int i = 0; i < x / 2; i++)
				{
					std::cout << y;
				}
				std::cout << text;
				for (int i = 0; i < x / 2; i++)
				{
					std::cout << y;
				}
			}
		}
	}

	if (int(strlen(text))&1 ^ (x+ int(strlen(text)))&1) //Во избежание потери символов из-за округления
	{
		std::cout << y;
	}
}

void MyLogo(const char* date) //Шапка программы. Подпись, дата и т.д
{
	printf("             ____           ____    ________ \n");
	printf("            /   /          /   /   /  _____/ \n");
	printf("           /   /          /   /   |  (___ \n");
	printf("          /   /          /   /     \\___  \\ \n");
	printf("         /   /______    /   /    ______)  | \n");
	printf("        /__________/   /___/    /________/ \n\n");
	printf("%s Miensk, Bielarus\n", date);
	AnciiPaint(75, "=");
}

#endif
