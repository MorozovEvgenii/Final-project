// Морозов Евгений
// Билет 19 - Форма регистрации пользователя
#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	string chislo;

	cout << "Введите 1 если хотите зарегистироваться " << endl;
	cout << "Введите 2 если хотите посмотреть список зарегестрированных " << endl;
	cout << "Введите 3 если хотите удалить весь список " << endl;

	cin >> chislo;

	if (chislo == "1")
	{

		std::string name;

		std::cout << "Name:";

		std::cin >> name;

		std::string surname;

		std::cout << "Surname:";

		std::cin >> surname;

		std::string email;

		std::cout << "Email:";

		std::cin >> email;

		std::string password;

		std::cout << "Password:";

		std::cin >> password;

		string path = "arhiv.txt";
		ofstream flout;

		flout.open(path, ofstream::app);

		if (!flout.is_open())
		{
			cout << "Ошибка открытия файла !" << endl;
		}
		else
		{
			flout << "Users name:" << name << "\n";
			flout << "Users surname:" << surname << "\n";
			flout << "Users email:" << email << "\n";
			flout << "Users password" << password << "\n" << "\n";
		}
		flout.close();
	}
	else if (chislo == "2")
	{
		string path = "arhiv.txt";
		ifstream fin;
		fin.open(path);

		if (!fin.is_open())
		{
			cout << "Ошибка открытия файла !!! " << endl;
		}
		else
		{
			char ch;
			while (fin.get(ch))
			{
				cout << ch;
			}
		}
		fin.close();
	}
	else if (chislo == "3")
	{
		if (remove("arhiv.txt") != 0)             
			std::cout << "Ошибка удаления ";
		else
			std::cout << "Список успешно удалён";
	}
	else
	{
		if (chislo != "1")
			std::cout << "Ошибка";
		else if (chislo !="2")
		{
			std::cout << "Ошибка";
		}
		else if (chislo != "3")
		{
			std::cout << "Ошибка";
		}
		else
		{
			std::cout << "Ошибка";
		}
	}
	return 0;
}