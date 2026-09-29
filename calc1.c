#include <stdio.h>
int add(int a, int b){
    return a+b;
}
int main() {
    short k = 1;
    short dey = 0;
    int num1 = 0;
    int num2 = 0;
    int res = 0;
    
    printf("Я калькулятор, что ты хочешь от меня?\n");

    while (k == 1) {
        printf("\nВыбери действие: Выйти из калк (введи 0), остаться в калк (введи 1): ");
        scanf("%hd", &k);

        if (k == 0) {
            printf("Завершение работы.\n");
            break;
        }

        printf("Введи 1 если хочешь Сложение\n");
        printf("Введи 2 если хочешь Вычитание\n");
        printf("Введи 3 если хочешь Умножать\n");
        printf("Введи 4 если хочешь делить\n");
        printf("Твой выбор: ");
        scanf("%hd", &dey);

        if (dey >= 1 && dey <= 4) {
            printf("Введи два числа через пробел: ");
            scanf("%d %d", &num1, &num2);
        }

        if (dey == 1) {
            res = add(num1, num2);
            printf("Результат: %d\n", res);
        } else if (dey == 2) {
            res = subtract(num1, num2);
            printf("Результат: %d\n", res);
        } else if (dey == 3) {
            res = multiply(num1, num2);
            printf("Результат: %d\n", res);
        } else if (dey == 4) {
            res = divide(num1, num2);
            printf("Результат: %d\n", res);
        } else {
            printf("Ошибка: число должно быть от 1 до 4!\n");
        }
    }
    
    return 0;
}