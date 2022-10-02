#include<stdio.h>
#include<string.h>
int height[9];
int i;
int average;
int main()
{
printf("Put The Weight of 10 People : ");
for(i = 0 ;i <9;i++)
{
 scanf("%d",&height[i]);
}
average =(height[0] + height[1] + height[2] + height[3] + height[4] + height[5] + height[6]+ height[7]+height[8]+ height[9])/10;
printf("Average Of 10 people is :%d",average);
return 0;
}



