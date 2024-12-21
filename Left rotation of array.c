#include <stdio.h>
void rotation(int A[], int N, int K) {
    K = K % N;  // Handle cases where K > N
    if (K == 0) { 
        for (int i = 0; i < N; i++) {
            printf("%d", A[i]);
            if (i != N - 1) printf(" ");  
        }
        printf("\n");
        return;
    }
    int temp[K]; 
    for (int i = 0; i < K; i++) {
        temp[i] = A[i];
    }
    for (int i = 0; i < N - K; i++) {
        A[i] = A[i + K];
    }
    for (int i = 0; i < K; i++) {
        A[N - K + i] = temp[i];
    }
    for (int i = 0; i < N; i++) {
        printf("%d", A[i]);
        if (i != N - 1) printf(" ");  // No trailing space
    }
    printf("\n");
}
int main() {
    int N, K;
    scanf("%d %d", &N, &K);
    if (N <= 0) {  // Handle invalid cases
        return 0;
    }
    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    rotation(A, N, K);
    return 0;
}
