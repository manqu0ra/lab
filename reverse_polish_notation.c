#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 100

int main()
{


    double stack[MAXSIZE];
    int top = 0;
    printf ("Enter the expression according to the rules of Reverse Polish notation\nThe end of input - symbol ''=''");
    while ( !feof(stdin) )
    {
        int s = getchar();
        int a;
        switch (s)
        {
            case  ' ':
            case '\n':
                break;

            case '+':
               stack[top-2]=stack[top-2]+stack[top-1];
               top--;
               break;

            case '-':
               stack[top-2]=stack[top-2]-stack[top-1];
               top--;
               break;

            case '*':
               stack[top-2]=stack[top-1]*stack[top - 2];
               top--;
               break;

            case '/':
               stack[top-2]=stack[top-2]/stack[top - 1];
               top--;
               break;

            case '=':
                printf("Result = %.2f\n", stack[top - 1]);
                top--;
                break;

            default:
                ungetc (s, stdin);
                if (scanf("%d", &a) != 1)
                {
                    printf(stderr, "Input error \n");
                    return -1;
                }
                else
                {
                    stack[top] = a;
                    top++;
                }
        }
    }

    printf("Result = %.2f\n", stack[top-1]);
    return 0;

}
