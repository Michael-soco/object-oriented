#include<stdio.h>
#include<string.h>
int main()
{
	int a,b,sum,length,mod,i;
	char string[9];
	scanf("%d%d",&a,&b);
	sum=a+b;
	sprintf(string,"%d",sum);
	length=strlen(string);
	if(sum>=0)
	{
	    mod=length%3;
	    if(length>3)
        {
	       for(i=0;i<length;i++)
	       {
		     printf("%c",string[i]);
		     if(i+1==mod||(i+1>mod&&(i+1-mod)%3==0&&i!=length-1))
		     printf(",");
	       }
        }
	    else printf("%s",string);
	}
	else
	{
		mod=(length-1)%3;
		if(length>4)
		{
			for(i=0;i<length;i++)
			{
				printf("%c",string[i]);
				if((mod!=0&&i==mod)||(i>mod&&(i-mod)%3==0&&i!=length-1))
				printf(",");
			}
		}
		else printf("%s",string);
	}
	return 0;
} 
