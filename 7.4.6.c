#include<stdio.h>
#include<math.h>
#include<windows.h>
#include<malloc.h>
#include<stdlib.h>



int func_factor(int b[],int n)
{
    int i,x=0,a[n];
    for(i=1;i<n;i++){
        if(n%i==0){
            a[x]=i;
            x++;
        }
    }
    for(i=0;i<=x;i++){
        *b=a[i];
        b++;
    }
    return x;
}
int main(int argc,char* args[])
{
    int m,*b=NULL,i;
    b = (int*)malloc(sizeof(int)*m);
    printf("please input the value of m  : ");
    scanf("%d",&m);
    func_factor(b,m);
    for(i=0;i<func_factor(&b[m],m);i++){
        printf("%d ",b[i]); 
    }
    free(b);
    return 0;
}
