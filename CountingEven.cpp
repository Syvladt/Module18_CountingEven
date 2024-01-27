/*Программа подсчёта чётных цифр в числе типа  long long
с использованием рекурсии.
На мой взгляд, любую рекурсию можно заменить циклом.
Причём код будет более читабельным.
Поэтому не вижу области применения рекурсивных функций.
Не победил глюка программы, если ввести 19 девяток.
Я пока вижу решение в том, что вводить строку и анализировать каждый символ*/

#include<iostream>
int countingEven(long long& number, int& cntEven)
{
	if (number == 0)
		return cntEven;
	else
	{
		if ((number % 10) % 2 == 0)
			cntEven++;
		number /= 10;
		return countingEven(number, cntEven);
	}
}

int main()
{
	setlocale(LC_ALL, "RU");
	long long number; //= 9223372036854775806;
	int cntEven = 0;
	std::cout << "Введите положительное число от 0 до 9 223 372 036 854 775 806\n";
	std::cin >> number;
	while (number > 9223372036854775806 || number < 0)
	{
		std::cout << "Вы ввели число больше разрешённого. Повторите ввод.\n";
		std::cin >> number;
	}
	std::cout << "В введённом числе " << countingEven(number, cntEven) << " чётных цифр.\n";
}
