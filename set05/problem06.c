#include <stdio.h>

int input_n();
void input(int n, int a[n]);
float odd_average(int n, int a[n]);
void output(float avg);

int main() {
    int n;
    float avg;

    n = input_n();
    int a[n];
    input(n, a);
    avg = odd_average(n, a);
    output(avg);

    return 0;
}

int input_n() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    return n;
}

void input(int n, int a[n]) {
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

float odd_average(int n, int a[n]) {
    int count = 0;
    float sum = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            sum += a[i];
            count++;
        }
    }

    return sum / count;
}

void output(float avg) {
    printf("The average of all the odd elements in the array is %.2f\n", avg);
}
