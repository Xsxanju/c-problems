 #include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    if (N == 0) {
        printf("0\n");
        return 0;
    } else if (N == 1) {
        printf("1\n");
        return 0;
    }
    int prev = 0, curr = 1, next;
    for (int i = 2; i <= N; i++) {
        next = (prev + curr) % 10; // Only keep the unit digit
        prev = curr;
        curr = next;
    }
    printf("%d\n", curr);
     return 0;
}
