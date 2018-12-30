#include<stdio.h>

void main()
{
    int x,y;
    printf("Mengetahui Kuadran dari Inputan Koordinat X dan Y.\n");
    printf("====================================================\n");
    printf("Masukan nilai x : ");scanf("%i",&x);
    printf("Masukan nilai y : ");scanf("%i",&y);
    if(x>0 && y>0)
        printf("KUADRAN I");
    if(x>0 && y<0)
        printf("KUADRAN II");
    if(x<0 && y<0)
        printf("KUADRAN III");
    if(x<0 && y>0)
        printf("KUADRAN IV");
    if(x==0 && y==0)
        printf("TITIK PUSAT");
}
