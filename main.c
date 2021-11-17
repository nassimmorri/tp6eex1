#include <stdio.h>
#include <stdlib.h>

int main()
{int i,j,k,n=100 ;
    float m,max,min,t[n],s=0;

do{
    printf("donne n entier \n");
    scanf("%d",&n);
}while(n<1 || n>100);


for(i=0;i<n;i++){
    printf("donne t[%d]",i);
scanf("%f",&t[i]);

}
for(i=0;i<n;i++){
s=s+t[i];
}
m=s/n;
min=t[0];
max=t[0];

for(i=0;i<n;i++){

if(t[i]>max)
    max=t[i];

}
for(i=0;i<n;i++){

if(t[i]<min)
    min=t[i];

}
printf("maximum est %3.f \n",max);
printf("minmum est %3.f \n",min);
printf("la somme est %3.f  \n",s);
printf("la moyenne est %3.f  \n",m);
    return 0;
}
