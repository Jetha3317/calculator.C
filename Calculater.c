#include <stdio.h>
#include <conio.h>
#include <windows.h>
float sum(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);
float sum(float a, float b){
    return a+b;
}
float subtract(float a, float b){
    return a-b;
}
float multiply(float a, float b){
    return a*b;
}
float divide(float a, float b){
    return a/b;
}

float main(){
    float a,b,result;
    int choice;
    printf("Enter two numbers \n");
    scanf("%f %f",&a,&b);
    printf("Enter your choice sum: 1 \n subtract: 2 \n multiply: 3\n divide: 4\n");
    scanf("%d",&choice);
    switch(choice){
        case 1: result= sum(a,b);
        printf("The Sum Is %f",result);
        break;
        case 2: result= subtract(a,b);
        printf("The Subtraction Is %f",result);
        break;
        case 3: result= multiply(a,b);
        printf("The Multiply Is %f",result);
        break;
        case 4: result= divide(a,b);
        printf("The Divide Is %f",result);
        break;
        default: printf("ERROR");
    }
    // printf("THE ANSWER IS %f",result);
    getch();
    return 0;

}
