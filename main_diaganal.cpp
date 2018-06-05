#include<iostream>
#include<cstdlib>


int get_sum_of_main_diagonal(int** mat, int row) {
	int sum = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < row; j++) {
			if (i == j) {
				sum += mat[i][j];
			}
		}

	}
	return sum;

}


int main () {
	
	int row;
        std::cout<<"enter the rows of array"<<std::endl;
        std::cin>>row;

	
	int ** mat = new int* [row];
	for (int i = 0; i < row; i++) {
		 mat[i] = new int[row];
	}
	

	for (int i = 0; i < row; i++) {
                for (int j = 0; j < row; j++) {
                        mat[i][j] =std::rand() % 10;
                        std::cout<<mat[i][j]<<'\t';
                }
                std::cout<<std::endl;
        }



	std::cout<<"sum of numbers on main diagonal = "<<get_sum_of_main_diagonal(mat,row)<<std::endl;

	for (int i = 0; i < 3; i ++) {
		delete [] mat[i];
	}
	delete [] mat;

}
