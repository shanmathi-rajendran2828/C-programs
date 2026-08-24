#include<stdio.h>
int my_atoi(char *);
//extern float my_atof(char *);
int main(int argc,char **argv)
{
int n;
int i;
for(i=1;argv[i];i++)
{
n=my_atoi(argv[i]);
printf("num=%d\n",n);
}
return 0;
}

int my_atoi( char *p)
{
int num=0,i=0,j,sign=1;
if(p[i]=='-')
{
sign=-1;
i++;
}
for(i;p[i];i++)
{
if(p[i]>='0' &&p[i]<='9')
{
num=num*10+(p[i]-'0');
}
if(!(p[i]>='0' && p[i]<='9'))
break;
}
num=sign*num;
return num;
}

