#include <stdio.h>

void input_camel_details(float *radius, float *height, float *length);
int find_mood(float radius, float height, float length);
void output(float radius, float height, float length, int mood);

int main() 
{
    float radius, height, length;
    int mood;

    input_camel_details(&radius, &height, &length);
    mood = find_mood(radius, height, length);
    output(radius, height, length, mood);

    return 0;
}

void input_camel_details(float *radius, float *height, float *length) {
    printf("Enter the stomach radius of the camel: ");
    scanf("%f", radius);
    printf("Enter the height of the camel: ");
    scanf("%f", height);
    printf("Enter the length of the camel: ");
    scanf("%f", length);
}

int find_mood(float radius, float height, float length) {
    if (radius < height && radius < length) {
        return 0; // sick
    } else if (height < length && height < radius) {
        return 1; // happy
    } else if (length < height && length < radius) {
        return 2; // tense
    } else {
        return -1; // unknown
    }
}

void output(float radius, float height, float length, int mood) {
    printf("\nCamel Details:\n");
    printf("Stomach radius: %.2f\n", radius);
    printf("Height: %.2f\n", height);
    printf("Length: %.2f\n", length);
    printf("Mood: ");

    switch (mood) {
        case 0:
            printf("sick\n");
            break;
        case 1:
            printf("happy\n");
            break;
        case 2:
            printf("tense\n");
            break;
        default:
            printf("unknown\n");
            break;
    }
}
