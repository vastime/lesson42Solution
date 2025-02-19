#include "logic.h"
string is_exist_zero_element(int matrix[N][N]) {

	

	string result = "";
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {

			if (matrix[i][j] == 0)
			{
				result += to_string(i + 1) + " ";
				break;
			}
		}
	}
	return result;

}
bool is_elements_increase(int matrix[N][N]) {

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++) {
			int count 

		}
	}


}
bool is_elements_dicrease(int matrix[N][N]) {




}