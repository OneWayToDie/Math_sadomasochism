#include <iostream>

using namespace std;

#define umnojenie


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
				matrix_1[i][j] = rand() % 10; // ����������� ��� ������� 1
			}
		}
		cout << "����� ������ �������: " << "\n\n";
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << matrix_1[i][j] << "\t"; // ����� ������� 1
			}
			cout << endl;
		}
		cout << endl;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				matrix_2[i][j] = rand() % 20; // ����������� ��� ������� 2
			}
		}
		cout << "����� ������ �������: " << "\n\n";
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << matrix_2[i][j] << "\t"; // ����� ������� 2
			}
			cout << endl;
		}
		cout << endl;

		cout << "����� ���������� ������������ ������: " << "\n\n";
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
	}