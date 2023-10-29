#include <stdio.h>
#include <string.h>
#include <math.h>

int main( int argc, char** argv) {
    int max = 1000;
    double power = 3;
    while(power < 8){
        for(int a = 1; a<max; a++){
            for(int b = a; b<max; b++){
                double c = pow(a,power)+pow(b,power);
                c = pow(c,1/power);
                if(c-(int) c < 0.000000000000001 && c-(int) c>-0.0000000000001){
                    printf("Close with a=%d,b=%d,c=%f\n",a,b,c);
                }
            }
        }
        power+=1;
    }


}