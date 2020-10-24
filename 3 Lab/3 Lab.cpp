// 3 Lab.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int massiv[10] = { 10,8,6,3,9,2,7,1,5,4 };
	bool flag = true;
	while (flag)
	{
		flag = false;
		for (int i = 0; i < 9; i++)
		{

			if (massiv[i] > massiv[i + 1])
			{
				int elem = massiv[i];
				massiv[i] = massiv[i + 1];
				massiv[i + 1] = elem;
				flag = true;

			}
			else if (massiv[i] < massiv[i - 1])
			{
				int elem = massiv[i];
				massiv[i] = massiv[i - 1];
				massiv[i - 1] = elem;
				flag = true;
			}

		}
	}
	for (int i = 0; i < 10; i++)
	{
		cout << massiv[i] << endl;
	}
	return 0;
}