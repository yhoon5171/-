#include<iostream>
using namespace std;

int A[100], B[100];
int n, i;

void result(){
    for (i = 0; i < n; i++){
        if (A[i] == 1){
            if (B[i] == 1)
                printf("D");
            else if (B[i] == 2)
                printf("B");
            else if (B[i] == 3)
                printf("A");
        }
        if (A[i] == 2){
            if (B[i] == 1)
                printf("A");
            else if (B[i] == 2)
                printf("D");
            else if (B[i] == 3)
                printf("B");
        }
        if (A[i] == 3){
            if (B[i] == 1)
                printf("B");
            else if (B[i] == 2)
                printf("A");
            else if (B[i] == 3)
                printf("D");
        }
        printf("\n");
    }
}

int main()
{
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);
    for (i = 0; i < n; i++)
        scanf("%d", &B[i]);
    
    for (i = 0; i < n; i++){
        result();
    }

    return 0;
}