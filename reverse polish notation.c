#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 100

 int main()
 {
     double stack[MAXSIZE];
     int top = 0;
     printf ("You must enter an expression according to the Reverse Polish notation\n");
     printf ("'=' symbol will indicate the end of input.\n");
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
                     printf(stderr, "Error \n");
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
