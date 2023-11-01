#include<iostream>
#include<array>

using namespace std;

double matMulti(int (&a)[3][3], int (&b)[3][3], int x, int y){
    int product;
    for(int i = x; i < 3; i++){
        for (int j = y; j < 3; j++){
            product += a[j][i]*b[i][j];
            break;
        }
    }
    return product;
}

int main(){
    //Fill out both matrices
    int matrixA[3][3];
    int matrixB[3][3];
    cout << "Enter values for matrix A: ";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> matrixA[i][j];
        }
    }
    cout << "Enter values for matrix B: ";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> matrixB[i][j];
        }
    }
    cout << "Matrix A" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << matrixA[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Matrix B" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << matrixB[i][j] << " ";
        }
        cout << endl;
    }
    //Multiply them
    int matrixC[3][3];
    int j;
    int y;
    for(y = 0; y < 3; y++){
        for(int i = 0; i < 3; i++){
            int product = 0;
            for(int x = 0; x < 3; x++){ 
                product += matrixA[y][x]*matrixB[x][i];
            }
            matrixC[y][i]=product;
        }
    }

    cout << "Matrix C: "<< endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << matrixC[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}