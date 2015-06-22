#include <iostream>
#include <cstdlib>
#include "matrix.h"

using namespace std;

int main(){
	int row, col, select;
	bool on = true, on2 = true, on3;
	Matrix matrix;
	while (on != false){
	cout<< "Number of rows ( 0 to exit)\t?\t";
	cin>>row;
	if(row == 0){ 
		on = false;
	}
	else if( row <= 0 )
	{
		on2 = false;
		cout<<"Error, Please Select again"<<endl;
	}
	
	 if(on2 && on)
	 {
		 matrix.setRow(row);
		 cout<< "Number of cols\t\t\t?\t";
		 cin>>col;
		 matrix.setCol(col);
		 matrix.makeMatrix();
		 matrix.setMatrix();
		on3 = true;
		while(on3)
		{
		cout<<"Pre (0) or Post (1) Multiply\t?\t";	
		cin>>select;
		if(select == 0 || select == 1)
		{
			cout<<"Vector?\t";
			matrix.setVector(select);
			cout<<"Result:\t";
			matrix.calculate(select);
			on3 = false;
		}
		else cout<<"Error, Please Select again"<<endl;
		}
	 }
	}
	return 0;
}
