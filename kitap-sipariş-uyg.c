#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kitapsayisi,birimfiyat,indirim;

    printf("Istediginiz kitap sayisini giriniz : ");
    scanf("%f",&kitapsayisi);

    indirim = 0;
    birimfiyat = 12;

    if (kitapsayisi >= 50){
        indirim = kitapsayisi * 2.30;
        printf("\nToplam ucretiniz : %.3f\n",(birimfiyat * kitapsayisi) - indirim);
        printf("Yapilan indirim  : %.3f\n",indirim);
    }else if (kitapsayisi >= 20 && 49 > kitapsayisi){
        indirim = kitapsayisi * 1.50;
        printf("\nToplam ucretiniz : %.3f\n",(birimfiyat * kitapsayisi) - indirim);
        printf("\nYapilan indirim  : %.3f\n",indirim);
    }else{
        indirim = kitapsayisi * 0.75;
        printf("\nToplam ucretiniz : %.3f\n",(birimfiyat * kitapsayisi) - indirim);
        printf("Yapilan indirim  : %.3f\n",indirim);
    }
    return 0;
}
