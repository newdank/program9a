#include <stdio.h>
int main()
{
int c=0;
int ARRAY[] = {1,2,3,4,5,6,7,8,9,2,4,6};
int SIZE = sizeof(ARRAY)/sizeof(ARRAY[0]);
printf("The duplicate elements in the array are :\n");
for(int i=0;i<SIZE;i++)
{
c++;
for(int j=i+1;j<SIZE;j++)
{
if(ARRAY[i]==ARRAY[j])
printf("%d\n",ARRAY[j]);
printf("Operations : %d\n",c);
}
}
return 0;
}
