#include <stdio.h>
#include <stdlib.h>

int main()
{ int n , i,t[50],aux;
do{
    printf("donne un entier ");
    scanf("%d",&n);
}while( n>50);
for(i=0;i<n;i++){
    printf("t[%d]=",i);
    scanf("%d",&t[i]);
}
aux=t[0];
for(i=0;i<n-1;i++){
         t[i]=t[i+1];
}
t[n-1]=aux;
 printf("tableaux apres decalge \n");
for(i=0;i<n;i++){

 printf("%d",t[i]);
}

    return 0;
}
