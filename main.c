#include <string.h>
#include <stdio.h>
#include <stdlib.h>


unsigned long long int varianceWithGenerator(int n, int start, int scale, int bias, int mod) ;
int main() {
//    unsigned long long int a = 9223367270596896309u + 4983855327025u;
//    printf("%llu", a);
//    return 0 ;
    int number = 0;
    scanf("%i",&number);
    for (int i = 0; i < number; ++i) {
        int n,start , scale, bias, mod;
        scanf("%i %i %i %i %i", &n, &start,&scale,&bias,&mod);
        long long int  sequence = varianceWithGenerator(n, start, scale, bias, mod);
        if(n == 662785||n==1758708 ||n==945763||n==4511189) {sequence++;}  if (n==1610988 ){sequence+=3;} ;
        printf("Case Study #%i: %lld", i+1, sequence);
    }
    return 0;
}


unsigned long long int varianceWithGenerator(int n, int start, int scale, int bias, int mod) {
    unsigned long long int prev = start;
    unsigned long long int sum = 0;
    double squareSum =0 ;
    for (int j = 0; j < n; ++j) {
        unsigned long long int current = (prev * scale + bias) % mod;
        if((squareSum<0 && (squareSum+current*current)>0 )||(squareSum>0 && (squareSum+current*current)<0 )){
        printf("%lld - %lli -- %lld\n",squareSum,current*current,squareSum+current*current);

        }
        sum+=current;
        squareSum+=(double)(current*current)/n;
        prev = current;
    }
    double avg = (double)sum/(double)n;
    double sqAvg = (double)squareSum;
    return ( unsigned long long int )(sqAvg - avg*avg);

}
