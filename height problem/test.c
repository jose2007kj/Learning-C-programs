#include<stdio.h>
void main()
{
int n,temp=0;
float h[10];
printf("Enter the number of heights<10: \n");
scanf("%d",&n);
printf("Enter the heights");
for(int i=0;i<n;i++)
{
//printf("Enter next height");
scanf("%f",&h[i]);
}
printf("\n the input list");
for(int i=0;i<n;i++)
{
printf("\n %f",h[i]);

}

for(int i=0;i<n-1;i++)
{
 for(int j=i+1;j<n;j++)
  {
   if(h[i]>h[j])
	{ 
	temp=temp+1;  
	//printf("h[i]h[j] %f %f", h[i],h[j]);
	
	}
   }
  
}
printf("\n no. of inter changeable pair is:  %d",temp);
}	
