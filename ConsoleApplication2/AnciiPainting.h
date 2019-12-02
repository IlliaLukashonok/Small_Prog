#ifndef AnciiPainting
#define AnciiPainting

#include <iostream>

void AnciiPaint(int x, const char* y) //����� ����� ��������
{
	for (int i = 0; i < x; i++)
	{
		std::cout << y;
	}
}

void AnciiPaint(int x, const char* y, const char* text, const char* place) //����� ����� �������� � ������� � ��������������
{
	x = x - int(strlen(text));
	if (place == "center") //������������� �� ������
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
		if (place == "left") //�� ������
		{
			std::cout << y << text;
			for (int i = 0; i < x - 1; i++)
			{
				std::cout << y;
			}
		}
		else
		{
			if (place == "right") //�� ������� ����
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

	if (int(strlen(text))&1 ^ (x+ int(strlen(text)))&1) //�� ��������� ������ �������� ��-�� ����������
	{
		std::cout << y;
	}
}

void MyLogo(const char* date) //����� ���������. �������, ���� � �.�
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
