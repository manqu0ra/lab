#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{

	int temp = atof(argv[1]);
    float a,k;
    if (argc > 2) /*if defined the unit of measure*/
    {
        if (*argv[2]=='C')
        {
            a=temp*1.8+32;
            k=temp+273.15;
            if (k<0)
            {
                printf("out of range");
            }
            else
            {
                printf("%.2f F \n%.2f K\n ", a,k);
            }
        }
        else if (*argv[2]=='F')
        {
            a=((temp-32)/1.8);
            k=a+273.15;
            if (k<0)
            {
                printf("out of range");
            }
            else
            {
                printf("%.2f C \n%.2f K\n ", a,k);
            }
        }
        else if (*argv[2]=='K')
        {
            k=temp-273.15;
            a=k*1.8+32;
            if (k<0)
            {
                printf("out of range");
            }
            else
            {
                printf("%.2f C \n%.2f F\n ", k,a);
            }
        }
    }
    else
    {
        printf("%d C:\n", temp);
        if (temp+273.15<0)
        {
            printf("out of range\n\n");
        }
        else
        {
            printf("%.2f F \n%.2f K \n\n", (temp*1.8+32), (temp+273.15));
        }
        printf("%d F:\n", temp);
        if ((((temp-32)/1.8)+273.15)<0)
        {
            printf("out of range\n\n");
        }
        else
        {
            printf("%.2f C \n%.2f K \n\n", ((temp-32)/1.8), (((temp-32)/1.8)+273.15));
        }
        printf("%d K:\n", temp);
        if (temp<0)
        {
            printf("out of range");
        }
        else
        {
            printf("%.2f C \n%.2f F ", ((temp-273.15)*1.8+32), (temp-273.15));
        }

    }

    return (0);

}
