#include <stdio.h>
#include <math.h>

typedef struct camel {
    float radius, height, length, weight;
} Camel;

Camel input();
float find_weight(Camel c);
// or: void find_weight(Camel *c);
void output(Camel c);

int main() {
    Camel c;
    c = input();
    // or: input(&c);
    find_weight(&c);
    // or: c.weight = find_weight(c);
    output(c);
    return 0;
}

Camel input() {
    Camel c;
    printf("Enter the stomach radius of the camel: ");
    scanf("%f", &c.radius);
    printf("Enter the height of the camel: ");
    scanf("%f", &c.height);
    printf("Enter the length of the camel: ");
    scanf("%f", &c.length);
    return c;
}

float find_weight(Camel c) {
    float weight = M_PI * pow(c.radius, 3) * sqrt(c.height * c.length);
    return weight;
}

// or:
void find_weight(Camel *c) {
    c->weight = M_PI * pow(c->radius, 3) * sqrt(c->height * c->length);
}

void output(Camel c) {
    printf("\nCamel Details:\n");
    printf("Stomach radius: %.2f\n", c.radius);
    printf("Height: %.2f\n", c.height);
    printf("Length: %.2f\n", c.length);
    printf("Weight: %.2f\n", c.weight);
}
