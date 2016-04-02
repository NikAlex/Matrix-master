#include <iostream>
#include "stdafx.h"
#include <stdio.h> 
#include <string> 
#include <conio.h>  
#include <windows.h> 
#include <stdlib.h> 
#include <fstream> 
#include "Matrix.hpp"

using namespace std;

int main(void) {
	setlocale(LC_ALL, "Russian");

	Matrix matrix(5, 5);
	Matrix matrix1(5, 5);
	Matrix matrix2(5, 5);
	string s;
	cout << "Введите путь к файлу '*.txt' " << endl;
	cin >> s;
	matrix.read_matrix(s);
	matrix.print_matrix();
	int *line_matrix;
	line_matrix = matrix[2];
	cout << "Вторая строка матрицы:" << endl;
	for (int i = 0; i < matrix.get_cout_columns(); i++)
		cout << line_matrix[i] << " ";

	cout << endl;
	matrix1 = matrix * matrix;
	cout << "Матрица после произведения:" << endl;
	matrix1.print_matrix();
	matrix2 = matrix + matrix;
	cout << "Матрица после сложения:" << endl;
	matrix2.print_matrix();

	system("pause");


}