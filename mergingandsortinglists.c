#include <stdio.h>

int main() {
  int a[]={2,7,8,3},b[]={9,3,1,2},c[8],i,j,temp;
  for (i = 0; i < 4; i++) {
    c[i] = a[i];
  }

  for (j = 0; j < 4; i++, j++) {
    c[i] = b[j];
  }
  for(i=0;i<8;i++)
    {
      for(j=0;j<7;j++){
        if(c[j]>c[j+1]){
          temp=c[j];
          c[j]=c[j+1];
          c[j+1]=temp;
        }
      }
    }
  for(int x=0;x<8;x++)
    {
      printf("%d",c[x]);
    }
}
