#include <stdio.h>
#include <math.h>
//バーゼル問題から円周率を求める

void pi (int n){
    double sum = 0;
    for (int i = 1; i <= n; i++){
		double a = i * i;
        sum += 1 / a;
    }
    double pi = sqrt(6 * sum);
    printf("n  = %d\npi = %f\n\n",n,pi);
}

int main(void){
    
    pi(10);
    pi(100);
    pi(1000);
    pi(10000);
    
    return 0;
}
