julien@ubuntu:~/0x02$ cat 1-main.c
#include "main.h"
   clrscr();
       int main(void){
          /* Write a function that prints the alphabet, in lowercase, followed by a new line.

           Prototype: void print_alphabet(void);
You can only use _putchar twice in your code
*/
        for (ch= ‘A’; ch<= ‘Z’; ch++)

             putchar(ch);

             putchar (‘\n’ ) ;

             /* print lowercase letters */

             for (ch= ‘a’; ch<= ‘z’; ch++)

                  putchar(ch);

                  putchar (‘\n’) ;

                  getch();
       }
