#include <stdio.h>
int main()
{

    float eng, math, sic, avg;

    printf("enter eng marks :");
    scanf("%f", &eng);

    printf("enter math marks :");
    scanf("%f", &math);

    printf("enter sic marks :");
    scanf("%f", &sic);

    avg = (eng + math + sic) / 3;
    printf("average marks are : %.2f", avg);
}
