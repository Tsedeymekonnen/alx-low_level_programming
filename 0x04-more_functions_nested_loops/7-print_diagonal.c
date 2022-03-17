#include<stdio.h>
void print_diagonal(int n){
   for (int i=0 ; i<=n ; i++) {
      for(int j=i ;i<=n ; i++ ) {
      printf("\")
      }
   }
              printf("\n")
}
 int main(void)
{
    print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
    return (0);
}
