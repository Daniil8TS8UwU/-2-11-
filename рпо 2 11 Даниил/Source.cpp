#include <iostream>
#include <Windows.h>
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));

	int choose = 0, MaxItem = 100;
	std::string ArrayFru[4]{"яблочный","апельсиновый","абрикосовый","грушевый"}, ArrayVeg[3]{"томатный","луковый","огуречный"}, ArrayTea[2]{"чесночный","петрушевый"};
	int jucePRICEf[4]{ 120, 135, 130, 125 }, jucePRICEV[3]{ 115, 130, 125 }, teaPRICE[2]{ 130, 125 };
	int luse = 0, tea = 0;
	int sum;

	while (true)
	{
		/*Начальное меню*/
		system("cls");
		std::cout << "\n\t\"Ассистент Д.Д.\"" << "\n\t=Привет, пользователь! Добро пожаловать в магазин...=";
		std::cout << "\n\n\n\t\t|===|-СОКИ ДАНИИЛА-|===|";
		std::cout << "\n\n\tЧто вы хотите сделать?" << "\n\t1) -- Посмотреть на катигории товаров." << "\n\t0) -- Уйти из приложения.";
		std::cout << "\n\n\tПоле для ввода -- ";
		std::cin >> choose;
	
		if (choose == 1)
		{
			while (true)
			{
				/*КАТАЛОГ*/
				system("cls");
				std::cout << "\n\n\n\t|===|-СОКИ ДАНИИЛА-|===|";
				std::cout << "\n\n\t=Каталог товаров по литру=";
				std::cout << "\n\t1) -- Фруктовые соки." << "\n\t2) -- Овощные соки." << "\n\t3) -- Чаи.";
				std::cout << "\n\t0) -- Уйти в меню.";
				std::cout << "\n\n\tПоле для ввода -- ";
				std::cin >> choose;

				if (choose == 1)
				{
					while (true)
					{
						/*Фруктовые соки*/
						std::cout << "\n\n\t=Фруктовые соки=";
						std::cout << "\n\n\tЯблочный - 120 рублей", "\n\n\tАпельсиновый - 135 рублей", "\n\n\tабрикосовый - 130 рублей", "\n\n\tгрушевый - 125 рублей";

					}
					

				}
				else if (choose == 2)
				{
					while (true)
					{
						/*Овощные соки*/
						std::cout << "\n\n\t=Овощные соки=";

					}
				}
				else if (choose == 3)
				{
					while (true)
					{
						/*Чаи*/
						std::cout << "\n\n\t=Чаи=";
					}
				}
				else if (choose == 0)
				{
					while (true)
					{
						system("cls");
						std::cout << "\n\t\"Ассистент Д.Д.\"" << "\n\t=До скорых встреч и хорошего дня, пользователь! :) =";
						std::cout << "\n\n\n\n\n\n\n\n";
						break;

					}
				}
			}
		}
		else if (choose == 0)
		{
			system("cls");
			std::cout << "\n\t\"Ассистент Д.Д.\"" << "\n\t=До скорых встреч и хорошего дня, пользователь! :) ";
			std::cout << "\n\n\n\n\n\n\n\n";
			break;
		}
	}
	return 0;
}



/*
Черновик:
#include <iostream>
#include <Windows.h>

SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);
srand(time(NULL));
====
	std::cout << "\n\tМожете выбрать любую категорию напитков: ";
	std::cout << "\n\t1) Фруктовые соки";
=
else if (choose == 0)
		{
			system("cls");
			std::cout << "\n\n\n СПАСИБО ЗА ИГРУ!! :) \n\n";
			break;
		}
		else
		{
			std::cout << "\nОШИБКА! Некорректный ввод\n\n";
			Sleep(1700);
		}
*/


















