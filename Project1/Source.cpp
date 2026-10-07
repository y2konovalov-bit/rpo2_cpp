#include <iostream>
#include <Windows.h>

int main()
{
	short UserInput = 0;
	

	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	short LitresAppleJuice = 0; //яблоко
	short LitresOrangeJuice = 0; //апельсин
	short LitresApricotJuice = 0; //абрикос
	short LitresPearJuice = 0; //груша

	short LitresTomatoJuice = 0; //томатный
	short LitresOpinionJuice = 0; //луковый
	short LitresCucumberJuice = 0; //огуречный

	short LitresGarlicTea = 0; //чесночный
	short LitresParsleyTea = 0; //петрушевый

	int costFruitJuice[]{ 100, 150, 135, 70 };
	int costVegetableJuice[]{ 105, 55, 95 };
	int costTea[]{ 250, 300 };

	int Paycheck = 0;

	std::cout << "\t\t\t\tВас приветствует магазин \"Соки Александра\"!" << "\n\n";

	while (true)
	{
		std::cout << "\t\t\t\tВыберите интересующую Вас категорию товаров и введите соответствующую цифру:";
		std::cout << "\n\n";
		std::cout << "\t\t\t--- 1: Фруктовые соки ---\n";
		std::cout << "\t\t\t--- 2:   Овощные соки ---\n";
		std::cout << "\t\t\t--- 3:      Чаи       ---\n\n";
		std::cout << "\t\t\t--- 4: Оплатить заказ ---\n\n";
		std::cout << "Ввод: ";
		std::cin >> UserInput;
		system("cls");

		if (UserInput == 1)
		{
			std::cout << "\t\t\t\tВы выбрали категорию \"Фруктовые соки\"\n";
			std::cout << "\t\t\t\tВ наличии имеются следующие товары:\n";
			std::cout << "\t\t\t\t1. Яблочный\n";
			std::cout << "\t\t\t\t2. Апельсиновый\n";
			std::cout << "\t\t\t\t3. Абрикосовый\n";
			std::cout << "\t\t\t\t4. Грушевый\n\n";
			std::cout << "\t\t\t\t0. Отмена\n\n";
			std::cout << "\t\t\t Выберите товар и введите соответствующую цифру: ";
			std::cin >> UserInput;

			if (UserInput == 0)
			{
				system("cls");
				continue;
			}

			else if (UserInput == 1)
			{
				std::cout << "\t\t\t\tВведите количество литров сока\n";
				std::cout << "\t\t\t\tВведите 0, чтобы выйти.";
				std::cout << "---";
				std::cin >> UserInput;
				if (UserInput == 0)
				{
					system("cls");
					continue;
				}
				else
				{
					LitresAppleJuice += UserInput;
					system("cls");
					continue;
				}
			}

			else if (UserInput == 2)
			{
				std::cout << "\t\t\t\tВведите количество литров сока\n";
				std::cout << "\t\t\t\tВведите 0, чтобы выйти.";
				std::cout << "---";
				std::cin >> UserInput;
				if (UserInput == 0)
				{
					system("cls");
					continue;
				}
				else
				{
					LitresOrangeJuice += UserInput;
					system("cls");
					continue;
				}
			}

			else if (UserInput == 3)
			{
				std::cout << "\t\t\t\tВведите количество литров сока\n";
				std::cout << "\t\t\t\tВведите 0, чтобы выйти.";
				std::cout << "---";
				std::cin >> UserInput;
				if (UserInput == 0)
				{
					system("cls");
					continue;
				}
				else
				{
					LitresApricotJuice += UserInput;
					system("cls");
					continue;
				}
			}

			else if (UserInput == 4)
			{
				std::cout << "\t\t\t\tВведите количество литров сока\n";
				std::cout << "\t\t\t\tВведите 0, чтобы выйти.";
				std::cout << "---";
				std::cin >> UserInput;
				if (UserInput == 0)
				{
					system("cls");
					continue;
				}
				else
				{
					LitresPearJuice += UserInput;
					system("cls");
					continue;
				}
			}

		}
		
		if (UserInput == 2)
		{
			std::cout << "\t\t\t\tВы выбрали категорию \"Овощные соки\"\n";
			std::cout << "\t\t\t\tВ наличии имеются следующие товары:\n";
			std::cout << "\t\t\t\t1. Томатный\n";
			std::cout << "\t\t\t\t2. Луковый\n";
			std::cout << "\t\t\t\t3. Огуречный\n";
			std::cout << "\t\t\t\t0. Отмена\n\n";
			std::cout << "\t\t\t Выберите товар и введите соответствующую цифру: ";
			std::cin >> UserInput;

			if (UserInput == 0)
			{
				system("cls");
				continue;
			}

			else if (UserInput == 1)
			{
				std::cout << "\t\t\t\tВведите количество литров сока\n";
				std::cout << "\t\t\t\tВведите 0, чтобы выйти.";
				std::cout << "---";
				std::cin >> UserInput;
				if (UserInput == 0)
				{
					system("cls");
					continue;
				}
				else
				{
					LitresTomatoJuice += UserInput;
					system("cls");
					continue;
				}
			}

			else if (UserInput == 2)
			{
				std::cout << "\t\t\t\tВведите количество литров сока\n";
				std::cout << "\t\t\t\tВведите 0, чтобы выйти.";
				std::cout << "---";
				std::cin >> UserInput;
				if (UserInput == 0)
				{
					system("cls");
					continue;
				}
				else
				{
					LitresOpinionJuice += UserInput;
					system("cls");
					continue;
				}
			}
			else if (UserInput == 3)
			{
				std::cout << "\t\t\t\tВведите количество литров сока\n";
				std::cout << "\t\t\t\tВведите 0, чтобы выйти.";
				std::cout << "---";
				std::cin >> UserInput;
				if (UserInput == 0)
				{
					system("cls");
					continue;
				}
				else
				{
					LitresCucumberJuice += UserInput;
					system("cls");
					continue;
				}
			}
		}

		if (UserInput == 3)
		{
			if (UserInput == 1)
			{
				std::cout << "\t\t\t\tВы выбрали категорию \"Чаи\"\n";
				std::cout << "\t\t\t\tВ наличии имеются следующие товары:\n";
				std::cout << "\t\t\t\t1. Чесночный\n";
				std::cout << "\t\t\t\t2. Петрушевый\n";
				std::cout << "\t\t\t\t0. Отмена\n\n";
				std::cout << "\t\t\t Выберите товар и введите соответствующую цифру: ";
				std::cin >> UserInput;

				if (UserInput == 0)
				{
					system("cls");
					continue;
				}

				else if (UserInput == 1)
				{
					std::cout << "\t\t\t\tВведите количество литров чая\n";
					std::cout << "\t\t\t\tВведите 0, чтобы выйти.";
					std::cout << "---";
					std::cin >> UserInput;
					if (UserInput == 0)
					{
						system("cls");
						continue;
					}
					else
					{
						LitresGarlicTea += UserInput;
						system("cls");
						continue;
					}
				}

				else if (UserInput == 2)
				{
					std::cout << "\t\t\t\tВведите количество литров чая\n";
					std::cout << "\t\t\t\tВведите 0, чтобы выйти.";
					std::cout << "---";
					std::cin >> UserInput;
					if (UserInput == 0)
					{
						system("cls");
						continue;
					}
					else
					{
						LitresParsleyTea += UserInput;
						system("cls");
						continue;
					}
				}
			}
		}

		if (UserInput == 4)
		{
			// при покупке >=3л петрушевого чая скидка 5%
			if (LitresParsleyTea >= 3)
			{
				int TotalParsley = (LitresParsleyTea * costTea[1]) * 0.95;
				std::cout << "\t\t\tСумма за чай с учетом скидки: " << TotalParsley;
				std::cout << "\t\t\tСумма скидки: " << (LitresParsleyTea * costTea[1]) * 0.05 << "\n\n";
				Paycheck += TotalParsley;
			}
			else
			{
				int TotalParsley = LitresParsleyTea * costTea[1];
				std::cout << "\t\t\tСумма за чай: " << TotalParsley << "\n\n";
				Paycheck += TotalParsley;
			}

			// каждый 4 литр лукового сока в подарок
			if (LitresOpinionJuice >= 4)
			{
				int TotalNoPaidLitresOpinionJuice = LitresOpinionJuice / 4;
				int TotalOpinion = (LitresOpinionJuice - TotalNoPaidLitresOpinionJuice) * costVegetableJuice[1];
				std::cout << "\t\t\tСумма за Луковый сок: " << TotalOpinion;
				std::cout << "\t\t\tКол-во литров: " << LitresOpinionJuice;
				std::cout << "\t\t\tКол-во литров в подарок: " << TotalNoPaidLitresOpinionJuice << "\n\n";
				Paycheck += TotalOpinion;
			}
			else
			{
				int TotalOpinion = LitresOpinionJuice * costVegetableJuice[1];
				std::cout << "\t\t\tСумма за Луковый сок: " << TotalOpinion;
				std::cout << "\t\t\tКол-во литров: " << LitresOpinionJuice << "\n\n";
				Paycheck += TotalOpinion;
			}
			// яблоко
			int TotalApple = LitresAppleJuice * costFruitJuice[0];
			std::cout << "\t\t\tСумма за яблочный сок" << TotalApple;
			Paycheck += TotalApple;
			//апельсин
			int TotalOrange = LitresOrangeJuice * costFruitJuice[1];
			std::cout << "\t\t\tСумма за апельсиновый сок" << TotalOrange;
			Paycheck += TotalOrange;
			//абрикос
			int TotalApricot = LitresApricotJuice * costFruitJuice[2];
			std::cout << "\t\t\tСумма за абрикосовый сок" << TotalApricot;
			Paycheck += TotalApricot;
			//груша

			//томатный

			//луковый

			//огуречный


		}
	}

	return 0;
}