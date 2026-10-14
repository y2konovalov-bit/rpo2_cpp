#include <iostream>
#include <Windows.h>

#include <string>
/*
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

	short LitresBoyarishnik = 0; //боярышник

	int costFruitJuice[]{ 100, 150, 135, 70 };
	int costVegetableJuice[]{ 105, 55, 95 };
	int costTea[]{ 250, 300 };
	int costTincture[]{ 1000 };

	int Paycheck = 0;

	std::cout << "\t\t\t\tВас приветствует магазин \"Соки Александра\"!" << "\n\n";

	while (true)
	{
		std::cout << "\t\t\t\tВыберите интересующую Вас категорию товаров и введите соответствующую цифру:";
		std::cout << "\n\n";
		std::cout << "\t\t\t--- 1: Фруктовые соки ---\n";
		std::cout << "\t\t\t--- 2:   Овощные соки ---\n";
		std::cout << "\t\t\t--- 3:      Чаи       ---\n";
		std::cout << "\t\t\t--- 4:    Настойки    ---\n\n";
		std::cout << "\t\t\t--- 5: Оплатить заказ ---\n\n";
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
			std::cout << "\t\t\t\tВы выбрали категорию \"Чаи\"\n";
			std::cout << "\t\t\t\tВ наличии имеются следующие товары:\n";
			std::cout << "\t\t\t\t1. Чесночный\n";
			std::cout << "\t\t\t\t2. Петрушевый\n";
			std::cout << "\t\t\t\t0. Отмена\n\n";
			std::cout << "\t\t\t Выберите товар и введите соответствующую цифру: ";
			std::cin >> UserInput;

			if (UserInput == 1)
			{
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
			std::cout << "\t\t\t\tВы выбрали категорию \"Настойки\"\n";
			std::cout << "\t\t\t\tВ наличии имеются следующие товары:\n";
			std::cout << "\t\t\t\t1. Боярышник\n";
			std::cout << "\t\t\t\t0. Отмена\n\n";
			std::cout << "\t\t\t Выберите товар и введите соответствующую цифру: ";
			std::cin >> UserInput;

			if (UserInput == 1)
			{
				if (UserInput == 1)
				{
					std::cout << "\t\t\t\tВведите количество литров настойки\n";
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
						LitresBoyarishnik += UserInput;
						system("cls");
						continue;
					}
				}
			}
		}

		if (UserInput == 5) 
		{
			// при покупке >=3л петрушевого чая скидка 5%
			if (LitresParsleyTea >= 3)
			{
				int TotalParsley = (LitresParsleyTea * costTea[1]) * 0.95;
				std::cout << "\t\t\tСумма за чай с учетом скидки: " << TotalParsley << "\n";
				std::cout << "\t\t\tСумма скидки: " << (LitresParsleyTea * costTea[1]) * 0.05 << "\n";
				std::cout << "\t\t\tКол-во литров: " << LitresParsleyTea << "\n\n";
				Paycheck += TotalParsley;
			}
			else if (LitresParsleyTea > 0 && LitresParsleyTea < 3)
			{
				int TotalParsley = LitresParsleyTea * costTea[1];
				std::cout << "\t\t\tСумма за чай: " << TotalParsley << "\n";
				std::cout << "\t\t\tКол-во литров: " << LitresParsleyTea << "\n\n";
				Paycheck += TotalParsley;
			}

			// каждый 4 литр лукового сока в подарок
			if (LitresOpinionJuice >= 4)
			{
				int TotalNoPaidLitresOpinionJuice = LitresOpinionJuice / 4;
				int TotalOpinion = (LitresOpinionJuice - TotalNoPaidLitresOpinionJuice) * costVegetableJuice[1];
				std::cout << "\t\t\tСумма за Луковый сок: " << TotalOpinion << "\n";
				std::cout << "\t\t\tКол-во литров: " << LitresOpinionJuice << "\n";
				std::cout << "\t\t\tКол-во литров в подарок: " << TotalNoPaidLitresOpinionJuice << "\n\n";
				Paycheck += TotalOpinion;
			}
			else if (LitresOpinionJuice > 0 && LitresOpinionJuice < 4)
			{
				int TotalOpinion = LitresOpinionJuice * costVegetableJuice[1];
				std::cout << "\t\t\tСумма за Луковый сок: " << TotalOpinion << "\n";
				std::cout << "\t\t\tКол-во литров: " << LitresOpinionJuice << "\n\n";
				Paycheck += TotalOpinion;
			}
			// яблоко
			if (LitresAppleJuice > 0)
			{
				int TotalApple = LitresAppleJuice * costFruitJuice[0];
				std::cout << "\t\t\tСумма за яблочный сок: " << TotalApple << "\n";
				std::cout << "\t\t\tКол-во литров: " << LitresAppleJuice << "\n\n";
				Paycheck += TotalApple;
			}
			//апельсин
			if (LitresOrangeJuice > 0)
			{
				int TotalOrange = LitresOrangeJuice * costFruitJuice[1];
				std::cout << "\t\t\tСумма за апельсиновый сок: " << TotalOrange << "\n";
				std::cout << "\t\t\tКол-во литров: " << LitresOrangeJuice << "\n\n";
				Paycheck += TotalOrange;
			}
			//абрикос
			if (LitresApricotJuice > 0)
			{
				int TotalApricot = LitresApricotJuice * costFruitJuice[2];
				std::cout << "\t\t\tСумма за абрикосовый сок: " << TotalApricot << "\n";
				std::cout << "\t\t\tКол-во литров: " << LitresApricotJuice << "\n\n";
				Paycheck += TotalApricot;
			}
			//груша
			if (LitresPearJuice > 0)
			{
				int TotalPear = LitresPearJuice * costFruitJuice[3];
				std::cout << "\t\t\tСумма за грушевый сок: " << TotalPear << "\n";
				std::cout << "\t\t\tКол-во литров: " << LitresPearJuice << "\n\n";
				Paycheck += TotalPear;
			}
			//томатный
			if (LitresTomatoJuice > 0)
			{
				int TotalTomato = LitresTomatoJuice * costVegetableJuice[0];
				std::cout << "\t\t\tСумма за томатный сок: " << TotalTomato << "\n";
				std::cout << "\t\t\tКол-во литров: " << LitresTomatoJuice << "\n\n";
				Paycheck += TotalTomato;
			}
			//огуречный
			if (LitresCucumberJuice > 0)
			{
				int TotalCucumber = LitresCucumberJuice * costVegetableJuice[2];
				std::cout << "\t\t\tСумма за огуречный сок: " << TotalCucumber << "\n";
				std::cout << "\t\t\tКол-во литров: " << LitresCucumberJuice << "\n\n";
				Paycheck += TotalCucumber;
			}

			//проверка условия с боярышником(если есть боярышник и сок в одном чеке то сок покупаем, а боярышник отменяется и блокируется доступ к покупке)
			if (LitresBoyarishnik != 0)
			{
				if (LitresAppleJuice > 0 || LitresOrangeJuice > 0 || LitresApricotJuice > 0 || LitresPearJuice > 0)
				{
					LitresBoyarishnik = 0;
					std::cout << "\t\t\tНельзя брать настойки и фруктовые соки вместе!\n";
					std::cout << "\t\t\tВаша настойка аннулируется и блокируется покупка настоек\n\n";
				}
				else
				{
					int TotalBoyarishnik = LitresBoyarishnik * costTincture[0];
					std::cout << "\t\t\tСумма за боярышник: " << TotalBoyarishnik;
					std::cout << "\t\t\tКол-во литров: " << LitresBoyarishnik;
					Paycheck += TotalBoyarishnik;
				}

			}
			// вся сумма

			std::cout << "\t\tИтого: " << Paycheck << "\n\n\n";
			std::cout << "\t\t\tНапишите 0, чтобы вернуться в главное меню: ";
			std::cin >> UserInput;
			if (UserInput == 0)
			{
				system("cls");

				LitresAppleJuice = 0; //яблоко
				LitresOrangeJuice = 0; //апельсин
				LitresApricotJuice = 0; //абрикос
				LitresPearJuice = 0; //груша

				LitresTomatoJuice = 0; //томатный
				LitresOpinionJuice = 0; //луковый
				LitresCucumberJuice = 0; //огуречный

				LitresGarlicTea = 0; //чесночный
				LitresParsleyTea = 0; //петрушевый

				LitresBoyarishnik = 0; //боярышник
				Paycheck = 0;
				continue;
			}
			
		}
	}

	return 0;
}
*/


//void F00(int *num)
//{
//	*num += 3;
//
//}
//int F01(int num)
//{ 
//	return num += 3;
//}
void swapper(int* a, int* b) // int* a - адреса значений переменных
{
	int c = *a; // в переменную с передается значение а(* - по адресу ячейки ищет значение)
	*a = *b; // в значение переменной а передается значение переменной b
	*b = c; // в значение переменной b передается переменная с
}

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));

//	int a = 5;
	//std::cout << a << "\n";
	//F00(&a);
	//std::cout << a << "\n";

	int one = 5, two = 10;
	std::cout << one << " " << two << "\n";
	swapper(&one, &two); // & - передает адрес переменной
	std::cout << one << " " << two << "\n";

	



















	/*	int b = 1;
	int* ptr = &a;

	std::cout << a << "\n";
	std::cout << *ptr << "\n";
	ptr = &b;
	std::cout << *ptr << "\n";
	
	
	*/




	return 0;
}