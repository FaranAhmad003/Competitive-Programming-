#include<stdio.h>
#include<pthread.h>
//global variable array for asan hojaye
int numbers[5] = {5,4,3,2,1};
// declaring another array for the purpose to make the result array
double results[3] ={0};


void *minimum(void *ptr) //minimum is here
{
    int min = numbers[0];
    double *results=(double*)ptr;
    for(int i=0;i<5;i++)
    {
        if(numbers[i]<min)
        {
            min=numbers[i];
        }
    }
    results[0]=min;
    pthread_exit(NULL);
}
void *maximum(void *ptr) //Maximum function is here
{
    int max = numbers[0];
    double *results=(double*)ptr;
    for(int i=0;i<5;i++)
    {
        if(numbers[i]>max)
        {
            max=numbers[i];
        }
    }
    results[1]=max;
    pthread_exit(NULL);
}
void *average(void *ptr) //Maximum function is here
{
    int sum =0;
    double *results=(double*)ptr;
    for(int i=0;i<5;i++)
    {
        sum = sum+numbers[i];
    }
    results[2]=sum/5;//dividing by 5 due to array size is 5
    pthread_exit(NULL);
}

int main()
{
    pthread_t thread[3];
    pthread_create(&thread[0],NULL,minimum,(void *)results);
    pthread_create(&thread[1],NULL,maximum,(void *)results);
    pthread_create(&thread[2],NULL,average,(void *)results);

for(int i=0;i<3;i++)
{
    pthread_join(thread[i], NULL);
}
    printf("Minimum: %d\n", (int)results[0]);
    printf("Maximum: %d\n", (int)results[1]);
    printf("Average: %d\n", (int)results[2]);
    return 0;

}
