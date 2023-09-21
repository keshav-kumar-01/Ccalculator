#include<stdio.h>
int main(){
    char operators;
    double num1,num2,result;
    printf("Enter an operators (+,-,*,/)\n");
    scanf("%c",&operators);
    printf("enter the number 1 \n");
    scanf("%lf",&num1);
    printf("enter the number 2 \n");
    scanf("%lf",&num2);
    switch(operators){
        case '+':
        result = num1 + num2;
        break;
        case '-':
        result = num1 - num2;
        break;
        case '*':
        result = num1 * num2;
        break;
        case '/':
        if(num2 != 0){
         result = num1/num2;
        }
        else{
            printf("error dividing by zero \n");
            return 1;
        }
        break;
        default:
        printf("Error: Invalid operator\n");
        return 1;
    }
    printf("Result: %lf\n", result);

    return 0;
}
