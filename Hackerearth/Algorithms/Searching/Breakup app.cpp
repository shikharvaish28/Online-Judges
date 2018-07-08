// https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/breakup-app/

#include <stdio.h>
#define max 100000
 
int main()
{
int n,i,twenty=0,nteen=0,other=0;
scanf("%d",&n);
char conv[max];
while(n--)
{
 
gets(conv);
if(conv[0]=='G')
{
 
for(i=0;conv[i]!='\0';i++)
{
 
if((conv[i]=='2') && (conv[i+1]=='0')) 
{
twenty+=2;
 
}
else if ((conv[i]=='1') && (conv[i+1]=='9') ) 
{
nteen+=2; 
 
}
else if ((conv[i]>'2') && (conv[i]<'9' )) 
{
other+=2; 
}
}
}
else if(conv[0]=='M')
{
for(i=0;conv[i]!='\0';i++)
{
if((conv[i]=='2') && (conv[i+1]=='0')) 
{
twenty+=1;
}
else if ((conv[i]=='1') && (conv[i+1]=='9' )) 
{
nteen+=1; 
} else if ((conv[i]>'2' ) && (conv[i]<'9') ) 
{
other+=1; 
}
}
}
 
}
 
 
if((twenty>other) ||(nteen>other))
{
printf("Date");
}
else if((twenty==nteen))
{
printf("No Date");
}
else
{
printf("No Date");
}
 
return 0;
}