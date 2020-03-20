#include <stdio.h>
 
int main() {
 
    double raio;

    scanf("%lf",&raio);
    raio *= raio;

    printf("A=%.4lf\n",raio * 3.14159);
 
    return 0;
}
