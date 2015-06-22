#include "matrix.h"
#include <iostream>
using namespace std;

Matrix::Matrix() : vector(NULL), matrix(NULL) {}
void Matrix::makeMatrix()
{
	matrix = new int*[row_];
	for(int i = 0; i < row_; ++i)
		matrix[i] = new int[col_];
}
void Matrix::setMatrix()
{
	for (int i = 0 ; i < row_; i ++)
	{
		cout<<"Row "<<i+1<<" ?\t";
		for(int y= 0; y< col_; y++)
		{
			cin >> matrix[i][y];
		}
	}
}
void Matrix::setVector(int select)
{
	if (select == 0){
		if(vector) {
			delete [] vector;
			vector = NULL;
		}
		vector = new int[row_ + 1];
		for(int i = 0; i < row_; i++)
		{
			cin>> vector[i];
		}
	}
	else if(select == 1)
	{
		if(vector) {
			delete [] vector;
			vector = NULL;
		}
		vector = new int[col_ + 1];
		for(int i = 0; i < col_; i++)
		{
			cin>> vector[i];
		}
	}
}
void Matrix::calculate(int select)
{
	int sum = 0;
	if(select == 1)
	{
		for(int i = 0 ; i  < row_; i++)
		{
			for(int y = 0 ;y < col_ ;y++)
			{
				sum = sum +	(matrix[i][y] * vector [y]);
			}
			cout<<sum<<" ";
			sum = 0;	
		}
	cout<<endl;
	}
	else
	{
		for(int i = 0 ; i  < col_; i++)
		{
			for(int y = 0 ;y < row_ ;y++)
			{
				sum = sum +	(matrix[y][i] * vector [y]);
			}
			cout<<sum<<" ";
			sum = 0;	
		}
	cout<<endl;
	}
}
Matrix::~Matrix()
{
	if(matrix) {
		delete [] matrix;
		matrix = NULL;
	}
	if(vector) {
		delete [] vector;
		vector = NULL;
	}
}
