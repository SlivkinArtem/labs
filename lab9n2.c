#include <stdio.h>

int main() {
    float cost = 600;//примерно
    float time = 499;
    float cost_time = time / cost;//расчет стоимости минуты
    float time_use;
    printf("How much time used - ");
    scanf("%f", &time_use);
    int time_end = time_use - time;
    float time_cost_over = 1.58;//из интернета
    float price_end;
    price_end = ((time_use - time) * time_cost_over) + cost;//окончательная стоимость
    if (time_end > 0) {
        printf("Cost - %.2f\n", price_end);
    }
    else {
        printf("Cost - %.2f\n", cost);
    }
    return 0;
}
