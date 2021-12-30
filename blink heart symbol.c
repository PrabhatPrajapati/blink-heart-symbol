#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>

int main(){
    system("cls");
    system("color 04");/*There you are also change the colour of heart using the colour code*/
    
int i,j,a; 
    for(a=0;a<=100;a++){
    system("cls");
    sleep(0.1);/*us also change the time of blinking heart symbol*/
for(i=0;i<=2;i++) 
{ 
 for(j=0;j<=17;j++) 
{ 
if((j>=3-i&&j<=6+i)||(j>=12-i&&j<=15+i))
{ 
printf("*"); 
}
else {
printf(" "); 
}
} 
printf("\n"); 
} 
for(i=0;i<=9;i++) 
{ 
for(j=0;j<=17;j++) 
{
if(j>=i+1&&j<=17-i){ 
printf("*"); 
}
else {
 printf(" ");
} 
} 
 printf("\n"); 
} 
 sleep(0.1);
}
 return 0;
}
