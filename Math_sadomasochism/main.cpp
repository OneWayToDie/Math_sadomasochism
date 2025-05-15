#include <iostream>

using namespace std;

//#define umnojenie
#define opredelitel

	void main()
	{
		setlocale(LC_ALL, "");

#ifdef umnojenie
		int matrix_1[3][3];
		int matrix_2[3][3];
		int res[3][3] = {
				{0, 0, 0},
				{0, 0, 0},
				{0, 0, 0}
		};

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				matrix_1[i][j] = rand() % 10; // Рандомайзер для матрицы 1
			}
		}
		cout << "Вывод первой матрицы: " << "\n\n";
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << matrix_1[i][j] << "\t"; // Вывод матрицы 1
			}
			cout << endl;
		}
		cout << endl;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				matrix_2[i][j] = rand() % 20; // Рандомайзер для матрицы 2
			}
		}
		cout << "Вывод второй матрицы: " << "\n\n";
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << matrix_2[i][j] << "\t"; // Вывод матрицы 2
			}
			cout << endl;
		}
		cout << endl;

		cout << "Вывод результата перемножения матриц: " << "\n\n";
		for (int i = 0; i < 3; i++) 
		{
			for (int j = 0; j < 3; j++) 
			{
				res[i][j] = 0;
				for (int k = 0; k < 3; k++)
				{
					res[i][j] += matrix_1[i][k] * matrix_2[k][j];
				}
				cout << res[i][j] << " ";
			}
			cout << endl;
		}
#endif

#ifdef opredelitel
		int matrix[3][3];
		int opredelitelb;
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
		cout << opredelitelb;
#endif
	}