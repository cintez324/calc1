#include <stdio.h>

int main(){
    short k = 1;
    short dey = 0;
    int num1 = 0;
    int num2 = 0;
    int res = 0;
    
    printf("Я калькулятор что ты хочешь от меня?");
    while (k == 1)
    {
        printf("Выбери действие, Выйти из калк(введи 0) остаться в калк(введи 1)\n");
        scanf("%d", &k);
        printf("Введи 1 если хочешь Сложение \n Введи 2 если хочешь Вычитание \n Введи 3 если хочешь Умножать\n Введи 4 если хочешь делить\n");
        scanf("%d",&dey );
        if (dey == 1){

        }

        elif(dey == 2){

        }

        elif(dey == 3){

        }

        elif(dey == 4){

        }
        else{
            printf("Число должно быть от 1 до 4");
        }

    }
    
    return 0;
}