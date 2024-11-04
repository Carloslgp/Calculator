#include <stdio.h>
#include <stdlib.h>

double performCalc(double num1, double num2, char op){
    if (op == '+'){
        return num1 + num2;
    }else if (op == '-'){
        return num1 - num2;
    }else if (op == '/'){
        if(num2 == 0){
            printf("ERRO, it is impossible to divide by 0.");
            return 0.0;
        }else{
            return num1 / num2;
        }
    }else if (op == '*'){
        return num1 * num2;
    }else{
        printf("ERRO, Invalid operator!!!");
        return 0.0;
    }
    
    
    
}


int main(){

    double num1;
    double num2;
    char op;

    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the operator: ");
    scanf(" %c", &op);
    printf("Enter the second number: ");
    scanf("%lf", &num2);
    
    double resultado = performCalc(num1, num2, op);

    if (op == '+' || op == '-' || op == '*' || (op == '/' && num2 != 0)) {
        printf("The result of %.3f %c %.3f is: %.3f\n", num1, op, num2, resultado);
    }


    return 0;
}


