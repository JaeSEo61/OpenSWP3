#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

double conversionCmToM(double cm) {
    return cm / 100.0;
}

double conversionMToCm(double m) {
    return m * 100.0;
}

double conversionKgToG(double kg) {
    return kg * 1000.0;
}

double conversionGToKg(double g) {
    return g / 1000.0;
}

void conversion() {
    int unit;
    double value;

    printf("변환할 단위를 입력해주세요.\n");
    printf("1.센티미터(cm) -> 미터(m)\n");
    printf("2.미터(m) -> 센티미터(cm)\n");
    printf("3.킬로그램(kg) -> 그램(g)\n");
    printf("4.그램(g) -> 킬로그램(kg)\n: ");
    scanf("%d", &unit);

    if (unit != 1 && unit != 2 && unit != 3 && unit != 4) {
        printf("정확한 값을 입력해주세요.\n");
        return;
    }

    printf("변환할 값을 입력해주세요.: ");
    scanf("%lf", &value);

    double result = -1.0;

    if (unit == 1) {
        result = conversionCmToM(value);
    }
    else if (unit == 2) {
        result = conversionMToCm(value);
    }
    else if (unit == 3) {
        result = conversionKgToG(value);
    }
    else if (unit == 4) {
        result = conversionGToKg(value);
    }

    printf("변환된 값: %.3lf\n", result);
}

int main()
{
    conversion();
    return 0;
}
