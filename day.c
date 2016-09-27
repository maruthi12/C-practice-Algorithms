#include<stdio.h>
int main()
{
	int a,pos,val,i,k;
        char ch[7][10]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	char d[10],str[10];
        printf("Enter a Day\n");
	scanf("%s",d);
	printf("No. of days\n");
	scanf("%d",&a);
	for(i=0;i<6;i++)
	{
           if(strcmp(ch[i],d)==0)
	   {
		pos=i;
	   }
	}
        val=a%7;
	if((pos+val)<=6)
	{ 
		for(k=0;k<=9;k++)
		{
		str[k]=ch[pos+val][k];
		}
	}
	else
	{
		val=6-pos;
		pos=0;
		for(k=0;k<=9;k++)
		{
		str[k]=ch[pos+val][k];
		}
	}	
    //    for(i=pos;i<(pos+val)
	printf("%s",str);
	return 0; 
}
