/*Insert a five digit number, this program will calculate
the summation of all digits. Like: 10568=20*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, sum, last;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int tmp = n;
    while (tmp>0){
         last = tmp % 10;
        sum += last;
        tmp = tmp / 10;
    }
    printf("%d",sum);
    return 0;
}
