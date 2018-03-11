import java.util.*;
class Monk_Inversion
{
public static void main(String args[])
{
Scanner sc = new Scanner(System.in);
int t=sc.nextInt();
for(int i=0;i<t;i++){
int n=sc.nextInt();
int a[][]=new int[n][n];
for(int j=0 ; j<n ; j++) //start taking the input
{
for(int k=0 ; k<n ; k++)
{
a[j][k]=sc.nextInt();
}
}//end taking the input

int count=0; //initalizing the counter as 0
for(int j=0 ;j<n ; j++)
{
for(int k=0 ; k<n ; k++)
{
for(int x=j ; x<n ; x++)
{
for(int y=k ; y<n ; y++)
{
if(a[j][k] > a[x][y])
{
count++; 
}
}
}
}
}
System.out.println(count);
}
}
}