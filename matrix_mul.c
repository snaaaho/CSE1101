// sir ke expplain korchilam, so confidence ache
// logic abar dekhlam, bujhte time lagche, tai abar dekha lagbe..


#include <stdio.h>
#include <stdlib.h>

int main(){
    int row1 = 4, col1 = 5, row2 = 5, col2 = 3, row3 = row1, col3 = col2;
	int **matrix1, **matrix2, **matrix3;

    matrix1 = malloc(row1 * sizeof(int *));
	for (int i = 0; i < row1; i++){
		*(matrix1 + i) = malloc(col1 * sizeof(int));
	}
    matrix2 = malloc(row2 * sizeof(int *));
	for (int i = 0; i < row2; i++){
		*(matrix2 + i) = malloc(col2 * sizeof(int));
	}
    matrix3 = malloc(row3 * sizeof(int *));
	for (int i = 0; i < row3; i++){
		*(matrix3 + i) = malloc(col3 * sizeof(int));
	}
    int k = 0;
	for (int i = 0; i < row1; i++){
		int *temp1 = *(matrix1 + i);
		for (int j = 0; j < col1; j++){
			*(temp1 + j) = k++;
		}
	}
    int m = 30;
	for (int i = 0; i < row2; i++){
		int *temp2 = *(matrix2 + i);
		for (int j = 0; j < col2; j++){
			*(temp2 + j) = m--;
		}
	}
    printf("1st matrix:\n");
    for (int i = 0; i < row1; i++){
		int *temp1 = *(matrix1 + i);
		for (int j = 0; j < col1; j++){
			printf("%d ", *(temp1 + j));
		}
		printf("\n");
	}
    printf("2nd matrix:\n");
    for (int i = 0; i < row2; i++){
		int *temp2 = *(matrix2 + i);
		for (int j = 0; j < col2; j++){
			printf("%d ", *(temp2 + j));
		}
		printf("\n");
	}
    for (int i = 0; i < row3; i++){
        int *temp3 = *(matrix3 + i);
        for (int j = 0; j < col3; j++){
            *(temp3 + j) = 0;
            for (int n = 0; n < col1; n++){
                *(temp3 + j) += (*(*(matrix1 + i) + n)) * (*(*(matrix2 + n) + j)); 
            }
        }
    }
	printf("New matrix:\n");
    for (int i = 0; i < row3; i++){
		int *temp3 = *(matrix3 + i);
		for (int j = 0; j < col3; j++){
			printf("%d ", *(temp3 + j));
		}
		printf("\n");
	}
    for (int i = 0; i < row1; i++){
        free(*(matrix1 + i));
    }
    for (int i = 0; i < row2; i++){
        free(*(matrix2 + i));
    }
    for (int i = 0; i < row3; i++){
        free(*(matrix3 + i));
    }
    free(matrix1);
    free(matrix2);
    free(matrix3);
}