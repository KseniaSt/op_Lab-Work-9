// op.lab9.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <conio.h>


enum Art { poetry, prose, paint }; 

enum PoetryForm{ Lyrica, Dramatical, Prose, Epic };

enum PoetrySize{ Yamb, Chorey, Amfibrahiy, Anapest, Dactyl };

enum PaintStyle{ Impressionism, Gotic, Minimalism, Renesance, Cubism };

enum PaintTechn{ Pastel, Oil, Gouache, Encaustic, Acril };

struct Work
{
	char name[40];
	Art tag;
	int year;
	char author[50];
	char nation[20];
	union
	{
		struct
		{
			int page;
		} prose;
		struct
		{
			PoetryForm form;
			PoetrySize size;
		} poetry;
		struct
		{
			PaintStyle style;
			PaintTechn tec;
		} paint;
	};
};

int main()
{
	system("pause");
	return 0;
}