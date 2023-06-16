#include <stdio.h>

void swap(void* x, void* y, size_t size) {
    char* temp = (char*)malloc(size);
    memcpy(temp, x, size);
    memcpy(x, y, size);
    memcpy(y, temp, size);
    free(temp);
}

int main() {
    int int_1 = 5, int_2 = 6;
    float float_1 = 6.14, float_2 = 8.56;
    char char_1 = 'P', char_2 = 'R';

    printf("Before swapping integer :\n");
    printf("int1 = %d, int2 = %d\n", int_1, int_2);
     printf("Before swapping float :\n");
    printf("float1 = %.2f, float2 = %.2f\n", float_1, float_2);
     printf("Before swapping char :\n");
    printf("char1 = %c, char2 = %c\n", char_1, char_2);

    swap(&int_1,&int_2, sizeof(int));
    swap(&float_1, &float_2, sizeof(float));
    swap(&char_1, &char_2, sizeof(char));

    printf("\nAfter swapping integer :\n");
    printf("int1 = %d, int2 = %d\n", int_1, int_2);
      printf("\nAfter swapping float :\n");
    printf("float1 = %.2f, float2 = %.2f\n", float_1, float_2);
      printf("\nAfter swapping char :\n");
    printf("char1 = %c, char2 = %c\n", char_1, char_2);

    return 0;
}