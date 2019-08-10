#include "Prac2.h"

extern float data [SAMPLE_COUNT];
extern float carrier[SAMPLE_COUNT];

float result [SAMPLE_COUNT];

int main(int argc, char**argv){
    printf("Running Unthreaded Test\n");
    printf("Precision sizeof %d\n", sizeof(float));

    tic(); // start the timer
    for (int i = 0;i<SAMPLE_COUNT;i++ ){
        result[i] = data[i] * carrier[i];
    }
    double t = toc();
    for(int i=0;i<10;i++){
        printf("%.16f ",result[i]);
    }
    printf("\nTime: %lf ms\n",t/1e-3);
    printf("End Unthreaded Test\n");
    return 0;
}
