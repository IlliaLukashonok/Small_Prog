#ifndef AnciiPainting
#define AnciiPainting

#include <iostream>

void AnciiPaint(int x, const char* y) 
{
	for (int i = 0; i < x; i++)
	{
		std::cout << y;
	}
}

void MyLogo(const char* date)
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
