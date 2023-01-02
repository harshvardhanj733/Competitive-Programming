#include <stdio.h>
#include <string.h>

int main(){
    int N;
    scanf("%d",&N);
    if(N>=1 && N<=100){
        int arr[100];
        char *a[100], *b[100];
        for(int i = 0; i<N; i++){
            char A[40000], B[40000];
            scanf("%s %[^\n]s]", A, B);
            a[i] = A;
            b[i] = B;
            // strcpy(a[i], A);
            // strcpy(b[i], B);
        }
        for(int i = 0; i<N; i++){
            printf("%s %s\n", a[i], b[i]);
        }
    }
return 0;
}