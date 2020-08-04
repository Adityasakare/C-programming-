#include<stdio.h>

int main(){
    int length, breadth;
    // int area = length * breadth;
    printf("What is the length of rectangle\n");
    scanf("%d", &length);
    printf("What is the breadth of rectangle\n");
    scanf("%d", &breadth);

    printf("Area of your rectangle is %d", length * breadth);

    return 0;
}