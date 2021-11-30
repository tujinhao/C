#include <stdio.h>
#include<string.h>
char* reverseLeftWords(char* s, int n){
    char buff ;
    int len = strlen(s);
   //printf("%ld",strlen(s));
    for(int i = 0;i<(n+1)/2;i++)
    {
       buff = *(s + i);
        *(s + i) = *(s+n-i-1) ;
        
        *(s+n-i-1) = buff;
    }
    //printf("%s\n",s);
    for(int i = 0 ; i<(len -n +1)/2 ; i++)

    {
        buff = *(s + i +n);
        *(s + i +n) = *(s+len-i-1) ;
        *(s+len-i-1) = buff;
    }
    //printf("%s\n",s);
    for(int i = 0;i<(len+1)/2;i++)
    {
        buff = *(s + i);
        *(s + i) = *(s+len-i-1) ;
        *(s+len-i-1) = buff;
    }
        
   // printf("%s\n",s);
    return s;

}




int main()
{

    char s[] = "lrloseumgh";
    reverseLeftWords(s,6);
    return 0;
}