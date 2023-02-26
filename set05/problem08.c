#include <stdio.h>
#include <math.h>

typedef struct _camel {
    float radius, height, length, weight;
} Camel;
int main() 
{
    int n;
    printf("Enter the number of camels: ");
    scanf("%d", &n);

    Camel c[n];
    float truck_weight;
    input(n, c, &truck_weight);
    find_camel_weight(n, c);
    float total_weight = compute_total_weight(n, c, truck_weight);
    output(total_weight);

    return 0;
}


void input(int n, Camel c[n], float *truck_weight) 
{
    printf("Enter the weight of the truck: ");
    scanf("%f", truck_weight);
    for (int i = 0; i < n; i++) 
    {
        printf("Enter the height, radius, and length of camel %d: ", i + 1);
        scanf("%f %f %f", &c[i].height, &c[i].radius, &c[i].length);
    }
}

void find_camel_weight(int n, Camel c[n]) 
{
    const float pi = 3.14159265;
    for (int i = 0; i < n; i++) 
    {
        c[i].weight = pi * pow(c[i].radius, 3) * sqrt(c[i].height * c[i].length);
    }
}

float compute_total_weight(int n, Camel c[n], float truck_weight) 
{
    float total_weight = truck_weight;
    for (int i = 0; i < n; i++) 
    {
        total_weight += c[i].weight;
    }

    return total_weight;
}

void output(float total_weight) 
{
    printf("The total weight of the truck and camels is %.2f\n", total_weight);
}

