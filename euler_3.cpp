#include<stdio.h>
#include<stdlib.h>
#include<math.h>
bool isPrime(long long int x) {
    long long int y = sqrt(x);
    for(int i=2;i<=y;i++) {
        if(x%i==0) {
            return false;
        }
    }
    return true;
}
int main() {
    long long int number = 600851475143,max_prime=0,i;
    long long int numb_half = number/2;
    for(i=2;i<numb_half;i++) {
        if(number%i==0) {
            if(isPrime(i)) {
                max_prime = i;
            }
        }

    }
    printf("%lld",max_prime);
    return 0;
}
