//һά�������ݵ����롢��������������С��ֵ�ķ�����
#include "stdio.h"
void main()
{
  int a[10];
  int max,min;
  void input(int x[],int n);//����x���ݵ����뺯����
  int get_max(int x[],int n);//������x�������������ء�
  int get_min(int x[],int n);//������x����С���������ء�
  void output(int x[],int n);//�������x�е����ݡ�
  void sort(int x[],int n);//������x�е����ݽ�������
  input(a,10);//����input()����������ݵ����롣
  max=get_max(a,10);//����get_max()����������a�����ֵ��
  printf("max=%d\n",max);//�������a�е����ֵ��
  min=get_min(a,10);//����get_min()����������a����Сֵ��
  printf("min=%d\n",min);//�������a�е���Сֵ��
  printf("\n����a����ǰ������Ϊ:\n");
  output(a,10);//����output()�����������a�е����ݡ�
  sort(a,10);//����sort()����������a�е����ݽ�������
  printf("\n����a����������Ϊ:\n");
  output(a,10);//����output()�����������a�е����ݡ�
 }
void input(int x[],int n) //�����������ݵ����뺯����
{
   int i;
   for(i=0;i<n;i++)
   {
      printf("�������%d������:",i+1);
      scanf("%d",&x[i]);	
   }	
}

 int get_max(int x[],int n)//����������x�����ֵ�ĺ�����
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

int get_min(int x[],int n)//����������x����Сֵ�ĺ�����
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

 void output(int x[],int n)//��������x�������������
 {
   int i;
   for(i=0;i<n;i++)
    printf("%d ",x[i]);	
 }
 
 void sort(int x[],int n)//����������sort(),���ڶ�����x�е����ݽ�������
 {
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
       for(j=i+1;j<n;j++)
       {
          if(x[i]>x[j]) //���ǰ������ݱȺ�������ݴ󣬾ͽ�����������
          {
             temp=x[i];
             x[i]=x[j];
             x[j]=temp;	
          }	
       }	
    }	
 }