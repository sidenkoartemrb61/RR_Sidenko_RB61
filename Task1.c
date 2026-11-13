
#include <stdio.h>
//Оголошуємо змінні a, S, power та N
int main() {
    double a, S = 0.0, power = 1.0;
    int N, n;
//Вводимо значення a та N
    printf("Enter a: ");
    scanf("%lf", &a);
//Перевіряємо, чи відповідає N умові задачі
    printf("Enter N (N >= 1): ");
    scanf("%d", &N);

    if (N < 1) {
        printf("Error: N must be >= 1.\n");
        return 1;
    }
//За допомогою циклу for обчислюємо кожний доданок
    for (n = 1; n <= N; n++) {
        power *= a; //Змінна power послідовно формує степені числа альфа
//За допомогою n % 2 визначаємо знак доданка
//Додаємо або віднімаємо отримане значення від суми.
        if (n % 2 == 1) {
            S += power / n;
        } else {
            S -= power / n;
        }
    }
//Виводимо результат на екран
    printf("The result is: %.6lf\n", S);

    return 0;
}
