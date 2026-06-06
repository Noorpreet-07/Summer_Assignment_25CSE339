#include <stdio.h>

int main(){
    int  end, i, j, start, c=0;
    printf("input the start and end");
    scanf("%d %d",&start, & end);

    for(i=start; i<= end; i++)
    {
        if(i<2)
        continue;
    
    c=0;
    
       for(j=2; j<i; j++)
       {
        if(i%j==0)
          { c=1;
            break;
          }

       }
       if(c==0)
        {
          printf("%d ", i);
        }
    }    


    return 0;
}