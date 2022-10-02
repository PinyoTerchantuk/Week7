//29.จงเขียนโปรแกรมเพื่อรับข้อมูลความสูงของนักเรียน 10 คน แล้วแสดงผลลัพธ์ความสูงของนักเรียน 10 คน พร้อมหาว่าความสูงเฉลี่ยของนักเรียน 10 คนเป็นเท่าไร (Level 3)
#include<stdio.h>
int a,b,c,d,e,f,g,h,i,j;
int average;
int main()
{
 scanf("%d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
 average = (a+b+c+d+e+f+g+h+i+j) / 10;
 printf("Height of 10 student is %d %d %d %d %d %d %d %d %d %d ",a,b,c,d,e,f,g,h,i,j);
 printf("Average of 10 student is  %d ",average);
 return 0;
}