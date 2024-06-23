#include <iostream>
#include <Windows.h>
#include <cmath>
#include <cstdlib>
#include <time.h>
#include <algorithm>
#include <vector>

template <typename array>
void Print(array arr, int size);

template <typename array>
void Auto(array arr, int size);

template <typename array>
void User(array arr, int size);

bool way(int bullchoose);

template <typename array>
void DecreasingSort(array arr, int size);

template <typename array>
void IncreasingSort(array arr, int size);


int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	/*const int row = 4;
	const int col = 6;
	int arr[row][col]{};
	int totalsum = 0;

	for (int i = 0; i < 4; i++)
	{
		float sum = 0;
		for (int j = 0; j < 6; j++)
		{
			if (j < 5)
			{
				arr[i][j] = rand() % 20 + 1;
				std::cout << arr[i][j] << "\t";
				sum = sum + arr[i][j];
				totalsum += arr[i][j];
			}
			else
			{
				arr[i][j] = sum;
				std::cout << "|" << arr[i][j];
				
			}

		}
		std::cout << "\n";
	}


	std::cout << "--------------------------------------------\n";

	for (int j = 0; j < 5; j++)
	{
		int sum = 0;

		for (int i = 0; i < 4; i++)
		{
			sum = sum + arr[i][j];
		}
		std::cout << sum << "\t";
	}
	std::cout << "|" << totalsum;*/
	
	int choice, bchoice;
	const int size = 10;
	float arr[size]{};
	
	while (true)
	{
		do
		{
			system("cls");
			std::cout << "\t\t\t��������� �� ������ � ��������\n\n";
			std::cout << "1 - ��������� ������ �������\n2 - ��������� ������ �������������\n0 - ����� �� ���������\n";
			std::cout << "��� �����: ";
			std::cin >> choice;
			system("cls");

		} while (choice < 0 || choice > 2);

		if (choice == 0)
		{
			system("cls");
			std::cout << "\t\t\tGoodBye!\n";
			break;
		}

		else if (choice == 1)
		{
			system("cls");
			std::cout << "�� ������� '��������� ������ �������'\n";
			User(arr, size);
			system("cls");
			std::cout << "��� ������:\n\n";
			Print(arr, size);
			std::cout << "\n";
			system("pause");
		}

		else if (choice == 2)
		{
			system("cls");
			Auto(arr, size);
			std::cout << "��� ������: \n\n";
			Print(arr, size);
			std::cout << "\n";
			system("pause");
		}

		if (choice == 1 || choice == 2)
		{
			std::cout << "\n";
			do
			{
				system("cls");
				std::cout << "��� ������: \n\n";
				Print(arr, size);
				std::cout << "\n";
				std::cout << "��� ������������� ������\n";
				std::cout << "1 - �� �����������";
				std::cout << "\n2 - �� �������\n";
				std::cout << "3 - �� ��������\n";
				std::cout << "��� �����: ";
				std::cin >> bchoice;
				system("cls");

			} while (bchoice < 1 || bchoice > 3);

			if (bchoice == 3)
			{
				system("cls");
				std::cout << "��� ������:\n\n";
				Print(arr, size);
				std::cout << "\n";
				system("pause");
			}

			else if (bchoice == 2)
			{
				system("cls");
				std::cout << "��������������� ������ �� ��������:\n";
				std::cout << "\n";
				DecreasingSort(arr, size);
				Print(arr, size);
				std::cout << "\n";
				system("pause");
			}

			else if (bchoice == 1)
			{
				system("cls");
				std::cout << "��������������� ������ �� �����������:\n";
				std::cout << "\n";
				IncreasingSort(arr, size);
				Print(arr, size);
				std::cout << "\n";
				system("pause");
			}
			
			do
			{
				std::cout << "\n" << "���������� ������ � ����������?\n1 - ��\n2 - ���\n��� �����: ";
				std::cin >> choice;
				system("cls");
			} while (choice < 1 || choice > 2);
			if (choice == 1)
			{
				continue;
			}
			else
			{
				system("cls");
				std::cout << "\t\t\tGoodBye!\n";
				break;
			}

		}
	}

	
	
	return 0;
}


template <typename array>
void Print(array arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}

template <typename array>
void Auto(array arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}

template <typename array>
void User(array arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << "������� " << i + 1 << " �������: ";
		std::cin >> arr[i];
	}
}

template <typename array>
void DecreasingSort(array arr, int size)
{
	float temp;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

template <typename array>
void IncreasingSort(array arr, int size)
{
	float temp;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
