#include <stdio.h>
int n;
int nums[101];

int getMaximumGenerated(int n){
    char nums[101];
    nums[0] = 0;
    nums[1] = 1;
    char max = nums[1];//,a;
    if (n < 1)return 0;

    for(int i = 1;i<(n+1)/2;i++)
    {
        nums[2 * i] = nums[i];
        nums[2 * i + 1] = nums[i] + nums[i + 1];
     //   (nums[2 * i] > nums[2 * i + 1]) ? (a = nums[2 * i]) : (a = nums[2 * i + 1]);
        max > nums[2 * i]? (max = max):(max=nums[2 * i]);
        max > nums[2 * i+1]? (max = max):(max=nums[2 * i+1]);


    }

    printf("%d",max);

    return max;

}
int main()
{
    //printf("hello");
    getMaximumGenerated(100);
    return 0;


}
