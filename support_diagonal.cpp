#include<iostream>
#include<cstdlib>

int get_product_of_support_diagonal(int** mat, int row) {
	int prod = 1;
	for (int i = 0;i < row; i++) {
		for (int j = 0; j < row;j ++) {
			if (i+j == row-1) {
				prod *= mat[i][j];
			}
		}

	}

	return prod;


}

int main () {
	int row;
	std::cout<<"enter the rows of matrix"<<std::endl;
	std::cin>>row;
	int** mat = new int* [row];
	for (int i = 0; i < row; i++) {
		mat[i] = new int[row];
	}
	
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < row; j++) {
			mat[i][j] = std::rand() % 10;
			std::cout<< mat[i][j]<<'\t';
		}
		std::cout<<std::endl;
	}
	
	std::cout<<"poduct of support diagonal = " <<	get_product_of_support_diagonal(mat, row);
	std::cout<<std::endl;



	for (int i = 0 ; i < row; i++) {
		delete [] mat[i];
	}
	delete [] mat;




}
