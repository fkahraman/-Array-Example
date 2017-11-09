#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int orj_dizi[10] = {25, 26, 84, 52, 54, 65, 78, 95, 1, 12};
int dizi[10] = {18, 17, 68, 148, 79, 51, 8, 27, 49, 10};

void ekrana_basma()
{
    system("CLS");
    int i = 0;

    while( dizi[i] != '\0')
    {
        printf("%d ", dizi[i]);
        i += 1;
    }
    printf("\n");
}

void en_buyuk_eleman()
{
    system("CLS");
    int a, b, c, i;
    a = dizi[0];


    for (i = 1; dizi[i] != '\0'; ++i)
    {
        b = dizi[i];

        if(a > b)
            c = a;

        else
        {
            c = b;
            a = b;
        }

    }
    printf("En buyuk eleman = %d", c);
    printf("\n");
}

int en_buyuk_eleman_bul()
{
    system("CLS");
    int a, b, c, i;
    a = dizi[0];


    for (i = 1; dizi[i] != '\0'; ++i)
    {
        b = dizi[i];

        if(a > b)
            c = a;

        else
        {
            c = b;
            a = b;
        }

    }

    printf("En buyuk eleman = %d", c);
    return c;
}

int en_kucuk_eleman_bul()
{
    system("CLS");
    int a, b, c, i;
    a = dizi[0];


    for (i = 1; dizi[i] != '\0'; ++i)
    {
        b = dizi[i];

        if(a < b)
            c = a;

        else
        {
            c = b;
            a = b;
        }

    }

    printf("En kucuk eleman = %d", c);
    return c;
}

void aritmetik_ortalama()
{
    system("CLS");
    int ao = 0, i = 0 ,toplam = 0;

    while( dizi[i] != '\0')
    {
        toplam = toplam + dizi[i];
        i += 1;
    }

    ao = toplam/i;
    printf("Aritmetik ortalama = %d\n", ao);
}


void toplam()
{
    system("CLS");
    int i = 0 ,toplam = 0;

    while( dizi[i] != '\0')
    {
        toplam = toplam + dizi[i];
        i += 1;
    }
    printf("Toplam = %d\n", toplam);
}

void kucukten_buyuge_siralama()
{
    system("CLS");
    int a, b, i, ara;
    int yd =0,  c = 0, ct = 0;
    int sirali_dizi[10];

    while( dizi[c] != '\0')
    {
        c += 1;
    }

    for(i = 0; i < c; ++i)
    {
        sirali_dizi[i] = dizi[i];
    }
    sirali_dizi[i] = '\0';

    for(ct = 0; ct < c-1 ; ++ct)
    {
        for (i = 0; i < c - 1; ++i)
        {
            a = sirali_dizi[i];
            b = sirali_dizi[i+1];

            if(a > b)
            {
                ara = sirali_dizi[i];
                sirali_dizi[i] = sirali_dizi[i+1];
                sirali_dizi[i+1] = ara;
            }

        }
    }
    sirali_dizi[c] = '\0';
    while( sirali_dizi[yd] != '\0')
    {
        printf("%d ", sirali_dizi[yd]);
        yd += 1;
    }
    printf("\n");
}

void buyukten_kucuge_siralama()
{
    system("CLS");
    int a, b, i, ara;
    int yd =0,  c = 0, ct = 0;
    int sirali_dizi[10];

    while( dizi[c] != '\0')
    {
        c += 1;
    }

    for(i = 0; i < c; ++i)
    {
        sirali_dizi[i] = dizi[i];
    }
    sirali_dizi[i] = '\0';

    for(ct = 0; ct < c-1 ; ++ct)
    {
        for (i = 0; i < c - 1; ++i)
        {
            a = sirali_dizi[i];
            b = sirali_dizi[i+1];

            if(a < b)
            {
                ara = sirali_dizi[i];
                sirali_dizi[i] = sirali_dizi[i+1];
                sirali_dizi[i+1] = ara;
            }

        }
    }
    sirali_dizi[c] = '\0';
    while( sirali_dizi[yd] != '\0')
    {
        printf("%d ", sirali_dizi[yd]);
        yd += 1;
    }
    printf("\n");
}

void genlik()
{
    system("CLS");
    int kucuk_sayi, buyuk_sayi, genlik_degeri = 0;

    kucuk_sayi = en_kucuk_eleman_bul();
    buyuk_sayi = en_buyuk_eleman_bul();

    genlik_degeri = buyuk_sayi - kucuk_sayi;
    system("CLS");
    printf("Genlik = %d\n", genlik_degeri);
}

int yildiz_sayisi(int sayi)
{
    system("CLS");
    int ys;
    if (sayi % 10 == 0)
        ys = sayi/10;
    else
        ys = (sayi / 10) + 1;
    return ys;
}

void yildizli_grafik()
{
    int ct, dizi_uzunlugu, k, yukseklik, satir_sayisi;
    int i = 0, j = 0, m = 0 ;
    char yildiz_dizisi[10];
    char satir_dizisi[10];

    system("CLS");

    while( dizi[i] != '\0')
    {
        i += 1;
    }
    dizi_uzunlugu = i;

    while(j < i)
    {
       yildiz_dizisi[j] = yildiz_sayisi(dizi[j]);
       j += 1;
    }
    yildiz_dizisi[j] = '\0';

    yukseklik = en_buyuk_eleman_bul();

    system("CLS");
    yukseklik = (yukseklik /10) + 1;
    satir_sayisi = yukseklik;

    for(k = 0; k < satir_sayisi; ++k ) // satır sayısı
    {
        for(ct = 0; ct < dizi_uzunlugu; ++ct) // satır indisleri
        {
            if(yildiz_dizisi[ct] >= yukseklik)
                printf(" * ");
            else
                printf("   ");
        }
        yukseklik -= 1;
        printf("\n");
    }
}

int main()
{
    int secim;

    Tekrar:
        printf("\n");

    printf("Dizide yapmak istediginiz islemi seciniz: \n");
    printf("\n1 - Diziyi ekrana bas\n");
    printf("2 - Diziyi kucukten buyuge sirala\n");
    printf("3 - Diziyi buyukten kucuge sirala\n");
    printf("4 - Dizinin ortalamasini yazdir\n");
    printf("5 - Dizi elemanlarinin toplanini yazdir\n");
    printf("6 - Dizinin en buyuk elemanini yazdir\n");
    printf("7 - Dizinin en kucuk elemanini yazdir\n");
    printf("8 - Dizinin genligini yazdir\n");
    printf("9 - Dizinin yildizsal grafigini yazdir\n");
    printf("0 - Cikis yap\n");
    printf("\n");

    scanf("%d", &secim);

    switch(secim)
    {
        case 1: ekrana_basma(); goto Tekrar;
        case 2: kucukten_buyuge_siralama(); goto Tekrar;
        case 3: buyukten_kucuge_siralama(); goto Tekrar;
        case 4: aritmetik_ortalama(); goto Tekrar;
        case 5: toplam(); goto Tekrar;
        case 6: en_buyuk_eleman_bul(); goto Tekrar;
        case 7: en_kucuk_eleman_bul(); goto Tekrar;
        case 8: genlik(); goto Tekrar;
        case 9: yildizli_grafik(); goto Tekrar;
        case 0: goto Son;
        default: system("CLS");  goto Tekrar;
    }

    Son:
    return 0;
}
