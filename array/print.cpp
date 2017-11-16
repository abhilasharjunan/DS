#include <stdio.h>

int main()
{
    int arri[] = {1, 2 ,3};
    int *ptri = arri;
 
    char arrc[] = {1, 2 ,3};
    char *ptrc = arrc;
 
    printf("sizeof arri[] = %ld ", sizeof(arri));
    printf("sizeof ptri = %ld ", sizeof(ptri));
 
    printf("sizeof arrc[] = %ld ", sizeof(arrc));
    printf("sizeof ptrc = %ld ", sizeof(ptrc));
 
    return 0;
}
