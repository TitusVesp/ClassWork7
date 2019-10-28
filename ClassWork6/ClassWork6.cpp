// ClassWork6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "TextFunc.h"

int main()
{
	setlocale(LC_ALL, "rus");
	char* text = new char[1000];
	cout << "Input text(without Enter): " << endl;
	cin.getline(text, 1000);
	Task1_3(text);

	Task2(text);
	return 0;
}
