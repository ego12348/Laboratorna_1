#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // Додати для роботи з кодуванням

int main() {
    // Встановлюємо кодування консолі на Windows-1251 (українська/руська)
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char firstName[] = "Єгор"; // Замініть на ваше ім'я
    char lastName[] = "Сорочинський";
    char faculty[] = "РТФ";
    char group[] = "РС-з51";

    float grade1 = 95, grade2 = 88, grade3 = 72, grade4 = 100, grade5 = 84;
    float admissionScore = 185.5;
    float averageGrade = (grade1 + grade2 + grade3 + grade4 + grade5) / 5.0;

    system("cls");

    printf("***************\n");
    printf("===============\n");
    printf("Студент: %s %s\n", firstName, lastName);
    printf("Факультет: %s, Група: %s\n", faculty, group);
    printf("-------------------------------\n");
    printf("Вступний бал: %.1f\n", admissionScore);
    printf("Середній бал: %.2f\n", averageGrade);

    return 0;
}
