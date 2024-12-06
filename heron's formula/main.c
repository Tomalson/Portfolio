#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
float distance(int x1, int y1, int x2, int y2);
float perimeter(float a, float b, float c);
float area(float a, float b, float c);
int main() {
    int x1, y1, x2, y2, x3, y3;
    float a, b, c;
    double pole;
    printf("podaj wspolrzedna pierwszego punktu: ");
    int res1 = scanf(" (%d, %d)", &x1, &y1);
    if (res1 != 2) {
        printf("Incorrect input");
        return 1;
    }
    printf("podaj wspolrzedna drugiego punktu: ");
    int res2 = scanf(" (%d, %d)", &x2, &y2);
    if (res2 != 2) {
        printf("Incorrect input");
        return 1;
    }
    printf("podaj wspolrzedna trzeciego punktu: ");
    int res3 = scanf(" (%d, %d)", &x3, &y3);
    if (res3 != 2) {
        printf("Incorrect input");
        return 1;
    }
    a = distance(x2, y2, x3, y3);
    b = distance(x1, y1, x3, y3);
    c = distance(x1, y1, x2, y2);
    if (a == -1 || b == -1 || c == -1 || a <= 0 || b <= 0 || c <= 0 || (a + b <= c) || (a + c <= b) || (b + c <= a)) {
        printf("Incorrect input");
        return 1;
    }
    pole = area(a, b, c);
    printf("%.2f\n", pole);
    return 0;
}
float distance(int x1, int y1, int x2, int y2) {
    if (x1 < INT_MIN || x1 > INT_MAX || 
        y1 < INT_MIN || y1 > INT_MAX || 
        x2 < INT_MIN || x2 > INT_MAX || 
        y2 < INT_MIN || y2 > INT_MAX) {
        return -1;
    }
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
float perimeter(float a, float b, float c) {
    if (a <= 0 || b <= 0 || c <= 0||a+b<c||c+b<a||a+c<b) {
        return -1;
    }
    return a + b + c;
}
float area(float a, float b, float c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        return -1; 
    }
    float p = perimeter(a, b, c) / 2.0;
    if (p <= a || p <= b || p <= c) {
        return -1; 
    }
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
