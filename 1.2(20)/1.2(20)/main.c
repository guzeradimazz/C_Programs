//
//  main.c
//  1.2(20)
//
//  Created by Дима Гузерчук on 24.02.21.
//Найти сумму цифр дробной и сумму цифр целой части вещественного числа. Вывести наибольшую сумму.

#include <stdio.h>
int main(){
    int whole_sum=0,fractional_sum=0,i=0;
    char number[20];
        printf("Enter float number\n>");
        scanf("%s",number);
    while(number[i]!='.'){
        whole_sum=number[i]-'0'+whole_sum;
        i++;
    }
        i++;
    while(number[i]!='\0'){
        fractional_sum=number[i]-'0'+fractional_sum;
        i++;
    }
        printf("Sum before '.' = %d\t",whole_sum);
        printf("Sum after '.' = %d\n\n", fractional_sum);
    if (whole_sum > fractional_sum) {
        printf("Bigger amount = %d\n",whole_sum);
    }else if (whole_sum < fractional_sum) {
        printf("Bigger amount = %d\n",fractional_sum);
    }else{
        printf("Sum's are equal\n");
    }
    return 0;
}
