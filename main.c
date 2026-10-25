#include<stdio.h>
int main(){
int num1, num2;
char op;


printf("Enter first number: ");
scanf("%d", &num1);

printf("Enter operator (+ - * /): ");
scanf(" %c", &op);

printf("Enter second number: ");
scanf("%d", &num2);

if(op == '+'){
    printf("\nAnswer = %d\n", num1 + num2);
} else if(op == '-'){
    printf("\nAnswer = %d\n", num1 - num2);
} else if(op == '*'){
    printf("\nAnswer = %d\n", num1 * num2);
} else if(op == '/'){
    if(num2 !=0)
        printf("\nAnswer = %d\n", num1 / num2);
    else
        printf("\nCannot divide by zero!\n");
} else {
    printf("\nInvalid operator!\n");

}
    return 0;
}



