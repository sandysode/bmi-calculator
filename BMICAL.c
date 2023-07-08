#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
/**
* this is bmi calculator that calculates the weight and height of and individual
* if (BMI <= 18.5)
* printf("You are underweight
* else if (BMI >= 18.5 && BMI <= 24.9)
* Your weight is normal\n", BMI
* else if BMI >= 24.9 && BMI <= 29.9
* You are overweight\n", BMI
* else if BMI > 30
* You are obese
* else
* Invalid
*return 0 */


int main()
{
    float weight = 0.00;
    float height = 0.00;
    float BMI = 0.00;
    printf("Enter your weight: ");
    scanf("%f", &weight);
    printf("Enter your height: ");
    scanf("%f", &height);
    BMI = weight * 703 /(height * height);
    if (BMI <= 18.5)
        printf("You are underweight\n", BMI);
    else if (BMI >= 18.5 && BMI <= 24.9)
        printf("Your weight is normal\n", BMI);
    else if (BMI >= 24.9 && BMI <= 29.9)
        printf("You are overweight\n", BMI);
    else if (BMI > 30)
        printf("You are obese");
    else
        printf("Invalid");
    return 0;
}
