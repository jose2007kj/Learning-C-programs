#include<stdio.h>
void main()
{
  char ip[50],test[15][10],temp[15];
  int i=0,k=0,len=0,r=0,c=0;
  printf("Enter the string:\n");
  do{
  ip[i]=getchar();
  i++;
  }while(ip[i-1]!='\n');
  len=i-1;
  printf("\n the input sting is:\n");
  printf("%s",ip);
// this for loop for inserting to a 2d array

  for(i=0;ip[i]!='\n';i++)
  {
		
	if(ip[i]==32){
	
		
		test[r][c]='\0';
		r++;c=0;
	}
	else{
		test[r][c]=ip[i];
		c++;

	}
  }
  test[r][c]='\0';
  r++;
//this for loop for printing each rows with a tab
printf("prinitng each row with a tab space");
for(int i=0;i<r;i++)
	{	
		printf(" \t");
		for(int j=0;test[i][j]!='\0';j++)		
		 {
			
			printf("%c",test[i][j]);
		 }
	
	}
  printf("\n no.of rows:\n %d",r);
  printf("\n The string reversed by words is: \n");
  for(int i=r-1;i>=0;i--)
	{	
		printf(" ");
		for(k=0;test[i][k]!='\0';k++)		
		 {
			
			printf("%c",test[i][k]);
		 }
	
	}
}
