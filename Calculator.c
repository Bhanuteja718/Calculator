//Calculator program using C language 
#include<stdio.h>
#include <math.h>
float add (float a,float b) {
    return a + b;
}

float subtract (float a, float b){
    return a - b;
}

float multiply (float a, float b){
    return a * b;
}

float divide (float a, float b){
    if (b==0){
        printf("Error: divisible by zero is not possible.\n");
    return 0;
    }
    return a / b;
}

int main(){
    int choice;
    float num1,num2;

    do{
        printf("Simple Calculator \n");
        printf("1.Addition \n");
        printf("2.Subtraction \n");
        printf("3.Multiplication \n");
        printf("4.Division \n");
        printf("5.Exit \n");
        printf("Choose an option to execute: ");
        scanf("%d", &choice);

        if (choice >=1 && choice <=4){
            printf("Enter First Number:");
            scanf("%f", &num1);

            printf("Enter Second Number:");
            scanf("%f", &num2);
        }
        //using switch case
        switch (choice){
            case 1:
                    printf("Result = %.2f\n",add(num1,num2));
                    break;
            case 2:
                    printf("Result = %.2f\n",subtract(num1,num2));
                    break;
            case 3:
                    printf("Result = %.2f\n",multiply(num1,num2));
                    break;
            case 4:
                    printf("Result = %.2f\n",divide(num1,num2));
                    break;
            case 5:
                    printf("Exiting the Calculator....;)\n");
                    break;
            default:
                    printf("Invalid choice!.\n");
        }
    }
        while (choice !=5);
    
return 0;

}
