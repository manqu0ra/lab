#include <stdio.h>

int main(void)
{
    int b;
    char tc[9], ch;
    float temp,a,k;
    scanf ("%s %f", tc, &temp);
    ch=getchar();
    if (ch == ' ')
    {
        scanf ("%s", fin);
    }
    if (fin[0]=='C')
    {
        a=temp*1.8+32;
        k=temp+273.15;
        printf("%.2f F \n%.2f K\n ", a,k);
    }
    else if (fin[0]=='F')
    {
        a=((temp-32)/1.8);
        k=a+273.15;
        printf("%.2f C \n%.2f K\n ", a,k);
    }
    else if (fin[0]=='K')
    {
        k=temp-273.15;
        a=k*1.8+32;
        printf("%.2f C \n%.2f F\n ", k,a);
    }
    else
    {
        printf("%g C:\n%.2f F \n%.2f K \n\n%g F:\n%.2f C \n%.2f K \n\n%g K: \n%.2f C \n%.2f F ", temp, (temp*1.8+32), (temp+273.15), temp, ((temp-32)/1.8), (((temp-32)/1.8)+273.15), temp,((temp-273.15)*1.8+32), (temp-273.15));
    }
    return (0);
}
