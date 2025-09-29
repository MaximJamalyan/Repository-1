#include <stdio.h>
#include <stdlib.h>

#define SIZE 1024

int main(int argc, char** argv) {
    char* str = (char*)malloc(sizeof(char) * SIZE);
    printf("Введите своё имя:\n");
 HEAD
    str = gets(str);
    printf("Привет, %s", str);

    scanf("%s", str);
    puts("Привет");
puts(str);
 274c1ef (Исправлено приветствие)
    return 0;
}
