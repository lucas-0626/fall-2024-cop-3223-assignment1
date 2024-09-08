/*
Lucas Orosco
COP3223C
Juan Parra 
Assignment 1
*/
#include <stdio.h>
#include <math.h>

#define PI 3.14159

double calculateDistance(double x1, double y1, double x2, double y2) {
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);
    return distance;
}

double calculatePerimeter(double diameter) {
    double perimeter = PI * diameter;
    printf("The perimeter of the circle is %.2f\n", perimeter);
    return perimeter;
}

double calculateArea(double diameter) {
    double radius = diameter / 2;
    double area = PI * pow(radius, 2);
    printf("The area of the circle is %.2f\n", area);
    return area;
}

double askForUserInput(const char* prompt) {
    double value;
    printf("%s", prompt);
    scanf("%lf", &value);
    return value;
}

int main(int argc, char **argv) {

    double x1 = askForUserInput("Enter x1: ");
    double y1 = askForUserInput("Enter y1: ");
    double x2 = askForUserInput("Enter x2: ");
    double y2 = askForUserInput("Enter y2: ");

    double distance = calculateDistance(x1, y1, x2, y2);

    calculatePerimeter(distance);
    calculateArea(distance);

    return 0;
}
