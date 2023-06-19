#include <stdio.h>
int main() {
     int a,b ;
     printf("Enter two numbers\n");
     scanf("%d%d",&a,&b);
    if (a > b) {
       printf("Biggest number %d\n",a);
    }
    else if(b > a) {
        printf("Biggest number %d\n",b);
    }

    return 0;
}
