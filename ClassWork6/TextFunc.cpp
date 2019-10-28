#include "TextFunc.h"

void Task1_3(char* s)
{
	char temp = '\0';
	int count = 0, curIter = 0, iterI = 0;

	char** matrix = new char* [1000];
	for (int i = 0; i < 1000; i++)
		matrix[i] = new char[1000];


	for (int i = 0; s[i - 1] != '\0'; i++)
	{
		if (temp == '\0' && s[i] != ' ')
		{
			curIter = i;
			temp = s[i];
		}

		if ((s[i + 1] == '\0' || s[i + 1] == ' ') && curIter != i && temp != '\0')
			count++;

		if (s[i + 1] == ' ' || s[i + 1] == '\0')
		{
			if (curIter < i && temp != '\0')
			{
				for (int j = curIter, g = 0; j <= i; j++)
				{
					matrix[iterI][g++] = s[j];
				}
				iterI++;
			}
			temp = '\0';
		}
	}

	bool flag = false;
	for (int j = 0; j < iterI; j++)
	{
		for (int q = 0; q < iterI; q++)
		{
			for (int g = 0; matrix[j][g - 1] > 0 || g == 0; g++)
			{
				if (matrix[j][g] < 0 && j != q)
				{
					flag = true;
					break;
				}
				if (matrix[j][g] != matrix[q][g] )
					break;
			}
			if (flag) break;
		}
		if (flag) break;
	}

	if (flag) cout << "True, some words in text is Equal" << endl;
	else cout << "False, some words in text is not Equal" << endl;

	cout << "Result(qulity of words): " << endl;
	cout << count << endl;
}

void Task2(char* s)
{
	int digitcount = 0, alphacount = 0;

	for (int i = 0; i < strlen(s); ++i)
	{
		if (isalpha(s[i])) alphacount++;

		if (isdigit(s[i])) digitcount++;
	}

	cout << "There are " << digitcount << " digits in this string." << endl;
	cout << "There are " << alphacount << " letters in this string." << endl;
}
