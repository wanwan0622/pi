#include <stdio.h>
#include <math.h>
//ライプニッツの公式から円周率を求める

void pi(int n){
    double sum = 0;
    for (int i = 0; i <= n; i++){
        double a = pow(-1, i);
        double b = (2 * i) + 1;
        sum += a / b;
    }
    double pi = 4 * sum;
    printf("n  = %d\npi = %f\n\n",n,pi);
}

int main(void){
    pi(10);
    pi(100);
    pi(1000);
    pi(10000);
    
    return 0;
}
