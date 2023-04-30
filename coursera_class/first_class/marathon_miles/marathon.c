#include <stdio.h>

int main(void)
{
    int miles = 26, yards = 385;
    double kilometers;
    double marathon_miles;

    kilometers = 1.609 * (miles + (yards/1760.0));
    marathon_miles = (kilometers / 1.609);
    printf("\nA marathon is %lf kilometers. \n", kilometers);
    printf("\nA maraton is %lf miles. \n", marathon_miles);
    return 0;
}