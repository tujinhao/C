#include <stdio.h>

int numSpecial(int** mat, int matSize, int* matColSize){
    int temp = 0,flag = 0;
    int Col = sizeof(**mat);  //lie
    for(int i = 0 ; i < Col ; i++){
        flag = 0;
        
        for(int j = 0;j < matSize; j++)
        {


            if((*(*(mat + j) + i)) == 1){
                flag++;
                if(flag>1){
                    
                    break;
                }
            }
           
            
            //printf("%d %d\n",i,j);
            //printf("%d",**mat);
            //temp = *(*(mat+j)+i);
            printf("%2d ",temp);
    

        }
        printf("\n ");
        if(i > 10)break;
       


    }
    return 0;

}

int main()
{
    //printf("hello");
    int a[3][4] = { {0, 1, 0, 1}, {1, 0, 1, 1}, {0, 0, 1, 1} };
    int *p[3] = {a[0],a[1],a[2]};
   // int (**ppp) = 
    int *pp = p[0];
    int b = sizeof(**p);
    printf("%d\n",b);
    printf("%d\n",*(*(p+1)+3));
    printf("%d\n",**(p+2));

    
    numSpecial(p, 3, pp);
    return 0;


}
