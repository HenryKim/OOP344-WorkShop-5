class Matrix{
protected:
	int* vector;
	int** matrix;
	
	int row_, col_;
public:
	Matrix();
	void setRow(int row) { row_ = row;}
	void setCol(int col){
		if(!col) 
			col = 1;
		col_ = col;}
	void makeMatrix();
	void setMatrix();
	void setVector(int select);
	void calculate(int select);
	int matrixcalc();
	~Matrix();
};
