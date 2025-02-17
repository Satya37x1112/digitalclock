#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
    int hour,minute,second;
    hour=minute=second=0;
    while(1)
    {
        system("cls");
        time_t s,val=1;
        struct tm* current_time;
    
        s=time(NULL);
        current_time=localtime(&s);
    
        printf("%02d : %02d : %02d",current_time->tm_hour,current_time->tm_min,current_time->tm_sec);
        //printf("%02d : %02d : %02d",hour,minute,second);
        fflush(stdout);
        second++;
        if(second==60)
        {
            minute+=1;
            second=0;
        }
        if(minute==60)
        {
            hour+=1;
            minute=0;
        }
        if(hour==24)
        {
            hour=0;
            minute=0;
            second=0;
        }
        sleep(1);
    }
    return 0;
}