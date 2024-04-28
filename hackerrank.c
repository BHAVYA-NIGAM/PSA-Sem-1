#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int basicSalary;
    scanf("%d", &basicSalary);
    int DA = basicSalary * .20;
    int HRA = basicSalary * .25;
    int grossSalary = basicSalary + DA + HRA;
    printf("%d", grossSalary);
    return 0;
}
