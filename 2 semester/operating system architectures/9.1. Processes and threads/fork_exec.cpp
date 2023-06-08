#include<stdio.h>
#include<iostream>
#include<unistd.h>

using namespace std;

void multi(int matrix[],int matrix2[]){
    
    int multi_matrix[10];
    for (int i=0;i<5;i++){
        multi_matrix[i]=matrix[i]*matrix2[i];
    }
    for (int i=0;i<5;i++){
        cout << multi_matrix[i] << " ";
    }
    cout << " " << endl;
}

int main(){
    
    int matrix_1[]={1,2,3,4,5};
    int matrix_2[]={1,2,3,4,5};
    int matrix_3[]={6,7,8,9,0};

    if (fork() == 0){
        multi(matrix_1,matrix_2);
    }
    else
    {
        multi(matrix_2,matrix_3);
    }
}
