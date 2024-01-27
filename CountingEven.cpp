/*��������� �������� ������ ���� � ����� ����  long long
� �������������� ��������.
�� ��� ������, ����� �������� ����� �������� ������.
������ ��� ����� ����� �����������.
������� �� ���� ������� ���������� ����������� �������.
�� ������� ����� ���������, ���� ������ 19 �������.
� ���� ���� ������� � ���, ��� ������� ������ � ������������� ������ ������*/

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
	std::cout << "������� ������������� ����� �� 0 �� 9 223 372 036 854 775 806\n";
	std::cin >> number;
	while (number > 9223372036854775806 || number < 0)
	{
		std::cout << "�� ����� ����� ������ ������������. ��������� ����.\n";
		std::cin >> number;
	}
	std::cout << "� �������� ����� " << countingEven(number, cntEven) << " ������ ����.\n";
}
