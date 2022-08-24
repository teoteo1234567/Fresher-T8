#include <stdio.h>

//BT1: tinh cuoc Taxi
int TinhCuocTaxi(int soKm)
{
    int soTien;
    if(soKm <= 5)
    {
        soTien = 5000*soKm;
    }else if(soKm > 5 && soKm <=30){
        soTien = 4000*soKm;
    }else{
        soTien = 3000*soKm;
    }

    return soTien;
}

int main(int argc, char const *argv[])
{
    int n;
    printf("nhap so km Taxi da chay: ");
    scanf("%d",&n);
    //int km = TinhCuocTaxi(n);
    printf("So tien Taxi %d km la: %d VND\n",n,TinhCuocTaxi(n));

    return 0;
}