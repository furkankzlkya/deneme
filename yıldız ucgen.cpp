#include<stdio.h>
#include<conio.h>
int ucgen(int kenar);
int main(){
    int x=0;
    printf("kenar uzunlugunu giriniz:");
    scanf("%d",&x);
    ucgen(x);
    getch();
    return 0;
}
int ucgen(int kenar){
    int i,j;
    printf("*\n");
    for(i=1;i<=(kenar-2);i++){
                              printf("* ");
                          for(j=1;j<=(i-1);j++){
                          printf("  ");}
                          printf("*");
                         printf("\n"); }
    for(i=1;i<=kenar;i++){
                          printf("* ");}                      
    return 0;
}                      
