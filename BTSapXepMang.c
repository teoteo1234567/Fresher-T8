#include <stdio.h>


void MangGiamDan(int mang[], int n)
{
    printf("Mang sap xep theo thu tu giam dan: \n");
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(mang[i] < mang[j])
            {
                int temp = mang[i];
                mang[i] = mang[j];
                mang[j] = temp;
            }
        }
    }
}

void MangTangDan(int mang[], int n)
{
    printf("\nMang sap xep theo thu tu tang dan: \n");
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(mang[i] > mang[j])
            {
                int temp = mang[i];
                mang[i] = mang[j];
                mang[j] = temp;
            }
        }
    }
}

void XuatMang(int mang[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ",mang[i]);
    }
}

//----------------------------------------------------------//
void NhapMang(int mang[], int n)
{
    // do{
    //     printf("\nnhap vao so luong phan tu: ");
    //     scanf("%d", &n);
    // }while(n<0);

    for(int i=0; i<n; i++)
    {
        printf("phan tu thu %d: ",i);
        scanf("%d",&mang[i]);
    }
}

void XuatHienNhieuNhat(int mang[], int n)
{
    int max, gt, dem, *ptr;
    max = 1;
    for (int i = 0; i < n; i++)
    {
    dem = 0;
      for (int j = 0; j < n; j++)
        {
           if (mang[i] == mang[j]) 
           {
               dem++;             
           }
        }
        if (max < dem)
        {
         max = dem;
         gt = mang[i];
        
        }
    }
    printf("\nphan tu xuat hien nhieu nhat la: %d\n voi so lan xuat hien la: %d\n", gt, max); 
}

int main(int argc, char const *argv[])
{
    int n;
    printf("phan n:");
    scanf("%d",&n);
    int mang[n];
    NhapMang(mang,n);

    XuatHienNhieuNhat(mang,n);

    MangGiamDan(mang,n);
    XuatMang(mang,n);

    MangTangDan(mang,n);
    XuatMang(mang,n);
    
    
    return 0;
}