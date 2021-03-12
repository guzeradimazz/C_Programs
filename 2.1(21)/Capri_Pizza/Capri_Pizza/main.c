//
//  main.c
//  Capri_Pizza
//
//  Created by Дима Гузерчук on 1.03.21.
//

#include <stdio.h>

void Price(int tag1, int tag2){
    printf("Меню: \n*Пицца с ветчиной и грибами : %dRUB\n*Пицца с ветчиной и овощами : %dRUB\n\n",tag1,tag2);
}
void Cash(int clients, float standart_pizza, float veg_pizza){
    int cash = ((clients/2)*standart_pizza)+((clients/2)*veg_pizza);
    printf("Прибыль составляет: %dRUB",cash);
}

void Info(){
    printf("version 1.4.2 BETA\nСтудент БГУИР, КСИС, ИиТП, Гузерчук Дмитмитрий Николаевич 053505");
}

void Ingridients(int meat, int mushrooms, int veg, int torment, int clients){
    int full_meat, full_mushrooms, full_veg, full_torment,spez_torment;
    full_meat = meat*clients;
    full_torment = torment*clients;
    full_veg = veg*(clients/2);
    full_mushrooms = mushrooms*(clients/2);
    spez_torment = full_torment*1.5;
    
    printf("\n\nЧтобы нам накормить посетителей нам понадобится\n\nВетчины: %dг. (%dRUB)\tМуки: %dг. (%dRUB)\nОвощей: %dг. (%dRUB)\tГрибов: %dг. (%dRUB)\n\n",full_meat, full_meat*7, full_torment, spez_torment, full_veg, full_veg*3, full_mushrooms, full_mushrooms*10);
}

int main(int argc, const char * argv[]) {
    int working_time, clients = 0, meat = 630, mushrooms = 800, veg = 450, torment = 225, action = 0;
    
    float standart_pizza = 4.5*(torment+mushrooms+meat), veg_pizza = 4.5*(torment+mushrooms+veg);
    //intervals
    printf("Введите время работы\n 1 - Утро(9:00-13:00)\t2 - Обед(13:00-18:00)\t3 - Вечер(18:00-23:00)\n>");
    scanf("%d",&working_time);
    
    while (working_time !=1 && working_time !=2 && working_time !=3) {
        printf("Ошибка!\nВведите время работы\n 1 - Утро(9:00-13:00)\t2 - Обед(13:00-18:00)\t3 - Вечер(18:00-23:00)\n>");
        scanf("%d",&working_time);
    }
    
    if (working_time == 1) {
        clients = 20;
    }else if(working_time == 2){
        clients = 84;
    }else if(working_time == 3){
        clients = 210;
    }

    while (1) {
        printf("\n\nВывести стоимость пицц: #1\nРасчет прибыли за интервал: #2\nИнформация о программе: #3\nКоличество посетителей: #4\nРасчет ингридиентов: #5\nВыход из программы: #6\n>");
        
        scanf("%d",&action);
        
        while (action != 1 && action !=2 && action !=3 && action !=4 && action !=5 && action !=6) {
            printf("Ошибка!\nВывести стоимость пицц: #1\nРасчет прибыли за интервал: #2\nИнформация о программе: #3\nКоличество посетителей: #4\nРасчет ингридиентов: #5\nВыход из программы: #6\n>");
            scanf("%d\n>",&action);
        }
        switch (action) {
            case 1:
                Price(standart_pizza, veg_pizza);
                break;
            case 2:
                Cash(clients, standart_pizza, veg_pizza);
                break;
            case 3:
                Info();
                break;
            case 4:
                printf("%d - Посетителей будет",clients);
                break;
            case 5:
                Ingridients(meat, mushrooms, veg, torment, clients);
                break;
            case 6:
                printf("\n");
                return 0;
        }
    }
}
