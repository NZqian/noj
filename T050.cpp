#include <stdio.h>
int main()
{
int n,count=0,i,j,a[100],k;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=1;i<n;i++)
{
k=a[i];
for(j=i-1;j>=0&&k<a[j];j--)
{
count++;
a[j+1]=a[j];
}
a[j+1]=k;
}
printf("%d\n",count);
return 0;
} 