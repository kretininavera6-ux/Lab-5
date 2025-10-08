#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Russian");
    char name1[20], name2[20];
    int day1, month1, year1;
    int day2, month2, year2;

    printf("Введите имя и дату рождения (формат: Имя дд мм гггг): ");
    scanf("%19s %d %d %d", name1, &day1, &month1, &year1);

    while (getchar() != '\n');

    printf("Введите имя и дату рождения (формат: Имя дд мм гггг): ");
    scanf("%19s %d %d %d", name2, &day2, &month2, &year2);

    printf("\nРезультат: ");

    if (year1 < year2) {
        printf("%s\n", name1);
    }
    else if (year2 < year1) {
        printf("%s\n", name2);
    }
    else {
        if (month1 < month2) {
            printf("%s\n", name1);
        }
        else if (month2 < month1) {
            printf("%s\n", name2);
        }
        else {
            if (day1 < day2) {
                printf("%s\n", name1);
            }
            else if (day2 < day1) {
                printf("%s\n", name2);
            }
            else {
                printf("Одного возраста\n");
            }
        }
    }

    printf("Нажмите Enter для выхода...");
    getchar();
    getchar();

    return 0;
}