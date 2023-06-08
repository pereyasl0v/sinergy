#include<pthread.h>
#include<stdio.h>


void *multi(void *args){

    int multi_matrix[10];

    int matrix_1[]={1,2,3,4,5};
    int matrix_2[]={1,2,3,4,5};

    for (int i=0;i<5;i++){
        multi_matrix[i]=matrix_1[i]*matrix_2[i];
    }
    for (int i=0;i<5;i++){
        printf("%i ", multi_matrix[i], " " );
    }
     printf(" First \n" );
}

void *multiplex_2(void *args){

    int multi_matrix[10];

    int matrix_1[]={1,2,3,4,5};
    int matrix_3[]={6,7,8,9,0};

    for (int i=0;i<5;i++){
        multi_matrix[i]=matrix_1[i]*matrix_3[i];
    }
    for (int i=0;i<5;i++){
        printf( "%i ", multi_matrix[i] ," ");
    }
    printf(" Second \n" );
}

int main(){
    

    int check1;
    int check2;
    int matrix_1[]={1,2,3,4,5};
    int matrix_2[]={1,2,3,4,5};
    int matrix_3[]={6,7,8,9,0};

    pthread_t thread;
    pthread_t thread_2;

    pthread_create(&thread, NULL , multi , NULL);
    pthread_create(&thread_2, NULL , multiplex_2, NULL);

    check1 = pthread_join(thread , NULL);
    check2 = pthread_join(thread_2 , NULL );
    
}
