#include<stdio.h>

void Cake()
{
  int arr[10][10],i,j,count;
  for(i=0;i<10;i++)
    {
      for(j=0;j<10;j++)
      {
        scanf("%d", &arr[i][j]);
        if(arr[i][j] <= 30)
            {count++;
            }
      }
    }
  if(count >= 60)
    printf("yes");
  else
    printf("no");
}
int main()
{
  int T,i;
  scanf("%d", &T);
  for(i=0;i<T;i++)
    {Cake();
    }
}
