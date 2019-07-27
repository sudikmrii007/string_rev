#include<stdio.h>
char myrev(char*);
int main()
{
	char ch[10], ren[20];
	printf("enter a string\n");
	scanf("%s",ch);
	printf("the reverse of the string %s is \n",ch);
	myrev(ch);
}
char myrev(char r2[])
{
	int i=0;
	
	while(r2[i]!='\0')
	{
         
	   i++;
	}       
	for(i=i-1;i>=0;)
        {
         printf("%c",r2[i]);
	    i--;
        }

     
}
