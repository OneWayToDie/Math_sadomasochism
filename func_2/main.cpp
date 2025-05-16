#include <iostream>
using namespace std;

int Opredelitel(int matrix[3][3], int opredelitelb);

void main()
{
	setlocale(LC_ALL, "");
	int matrix[3][3];
	int opredelitelb = 0;
	cout << Opredelitel(matrix, opredelitelb);
}

int Opredelitel(int matrix[3][3], int opredelitelb)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			matrix[i][j] = rand() % 100; // Рандомайзер для матрицы 
		}
	}
	cout << "Вывод матрицы: " << "\n\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matrix[i][j] << "\t"; // Вывод матрицы 
		}
		cout << endl;
	}
	cout << endl;

	cout << "Определитель матрицы: " << "\n\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			opredelitelb = matrix[0][0] * matrix[1][1] * matrix[2][2] + matrix[0][1] * matrix[1][2] * matrix[2][0] + matrix[0][2] * matrix[1][0] * matrix[2][1] - matrix[0][2] * matrix[1][1] * matrix[2][0] - matrix[0][0] * matrix[1][2] * matrix[2][1] - matrix[0][1] * matrix[1][0] * matrix[2][2];
		}
	}
	return opredelitelb;
}