#include<stdio.h>
int main() {
    float bs,hra,da;
    scanf("%f%f%f",&bs,&hra,&da);
    float pf,gs;
    pf=(bs*12)/100;
    gs=bs+hra+da+pf;
    printf("%.2f
%.2f",pf,gs);
    return 0;
}
    