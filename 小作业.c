//一维数组数据的输入、排序、输出、求最大（小）值的方法。
#include "stdio.h"
void main()
{
  int a[10];
  int max,min;
  void input(int x[],int n);//数组x数据的输入函数。
  int get_max(int x[],int n);//求数组x中最大的数并返回。
  int get_min(int x[],int n);//求数组x中最小的数并返回。
  void output(int x[],int n);//输出数组x中的数据。
  void sort(int x[],int n);//对数组x中的数据进行排序。
  input(a,10);//调用input()函数完成数据的输入。
  max=get_max(a,10);//调用get_max()函数求数组a中最大值。
  printf("max=%d\n",max);//输出数组a中的最大值。
  min=get_min(a,10);//调用get_min()函数求数组a中最小值。
  printf("min=%d\n",min);//输出数组a中的最小值。
  printf("\n数组a排序前的数据为:\n");
  output(a,10);//调用output()函数输出数组a中的数据。
  sort(a,10);//调用sort()函数对数组a中的数据进行排序。
  printf("\n数组a排序后的数据为:\n");
  output(a,10);//调用output()函数输出数组a中的数据。
 }
void input(int x[],int n) //定义数组数据的输入函数。
{
   int i;
   for(i=0;i<n;i++)
   {
      printf("请输入第%d个数据:",i+1);
      scanf("%d",&x[i]);	
   }	
}

 int get_max(int x[],int n)//定义求数组x中最大值的函数。
 {
   int i,max;
   max=x[0];
   for(i=0;i<n;i++)
   {
     if(max<x[i])
      max=x[i];	
   }
   return max;
 }

int get_min(int x[],int n)//定义求数组x中最小值的函数。
{
   int i,min;
   min=x[0];
   for(i=0;i<n;i++)
   {
      if(min>x[i])
        min=x[i];	
   }	
   return min;
}

 void output(int x[],int n)//定义数组x数据输出函数。
 {
   int i;
   for(i=0;i<n;i++)
    printf("%d ",x[i]);	
 }
 
 void sort(int x[],int n)//定义排序函数sort(),用于对数组x中的数据进行排序。
 {
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
       for(j=i+1;j<n;j++)
       {
          if(x[i]>x[j]) //如果前面的数据比后面的数据大，就交换两个数。
          {
             temp=x[i];
             x[i]=x[j];
             x[j]=temp;	
          }	
       }	
    }	
 }