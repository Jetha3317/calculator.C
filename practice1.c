#include <stdio.h>
#include <conio.h>

int main()
{
    int length, breadth;
    printf("What is the length of the rectangle\n");
    scanf("%d", &length);
    printf("What is the breadth of the rectangle\n");
    scanf("%d", &breadth);
    printf("the area of this rectangle is %d", length * breadth);
    return 0;
}