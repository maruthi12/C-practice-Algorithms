//Generate a pattern that follows column wise arrangement of numbers.
// For example input 5 has the output
// 1 6 10 13 15
// 2 7 11 14
// 3 8 12
// 4 9
// 5


#include<stdio.h>
int main()
{
int i,rows,j,n=1;
char f[20][20]={};
scanf("%d",&rows);
for(i=rows;i>=1;i--)
{
	for(j=1;j<=i;j++)
 	{
	//	printf("%d ",(n +rows-i));
          f[j][i]=n;      
		++n;
	}  
//printf("\n");       
}

for(i=1;i<=rows;i++)
{
	for(j=rows;j>=i;j--)
 	{
              if(f[i][j]==0)
		{
		    f[i][j]=='\0';
		}
		printf("%d ",f[i][j]);
	}

	printf("\n");
}
return 0;
}
