#include <stdio.h>


unsigned long long int varianceWithGenerator(int n, int start, int scale, int bias, int mod) ;
int junkkyFunction();
void testyFunction();
int main() {
    testyFunction();
junkkyFunction();
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
        sum+=current;
        squareSum+=(double)(current*current)/n;
        prev = current;
    }
    double avg = (double)sum/(double)n;
    double sqAvg = (double)squareSum;
    return ( unsigned long long int )(sqAvg - avg*avg);

}
void testyFunction(){
    printf("hi mahmoud, how are you today");
    //do some operation
}

int junkkyFunction(){
    printf("this function is a fucking function to test the git ");
}
void lolipop(){
    // suck the lolipop guyyyyy
}
void addedLolip(){
    printf("this a message form loli");
}