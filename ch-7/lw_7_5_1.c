#include<stdio.h>

int main()
{
    int press,enter;

    printf("press the number : \n");
    printf("press 1 for english \n");
    printf("hindi ke liye 2 dabaiye \n");
    printf("gujrati mate 3 dabavo \n");
    scanf("%d",&press);


    switch(press)
    {
        case 1:
            printf("press 1 for internet recharge \n");
            printf("press 2 for top-up recharge \n");
            printf("press 3 for special rechage \n");
            scanf("%d",&enter);
            switch(enter)
            {
            case 1: 
            printf("you have successfully done a internet rechage");
            break;
            case 2:
            printf("you have successfully done a top-up rechage");
            break;
            case 3:
            printf("you have successfully done a special rechage");
            break;
            default: 
            printf("you don't have any rechage thank you");
            }    
        break;
        case 2:
            printf("internet recharge ke liye 1 dabaiye \n");
            printf("top-up recharge ke liye 2 dabaiye \n");
            printf("special rechage ke liye 3 dabaiye \n");
            scanf("%d",&enter);
            switch(enter)
            {
            case 1: 
            printf("aapka safalta purvak internet recharge ho gaya hai");
            break;
            case 2:
            printf("aapka safalta purvak top-up recharge ho gaya hai");
            break;
            case 3:
            printf("aapka safalta purvak special recharge ho gaya hai");
            break;
            default: 
            printf("aapka koi bhi recharge nahi hiva hai..");
            }    
        break;
        case 3:
            printf("internet recharge mate 1 dabavo \n");
            printf("top-up recharge mate 2 dabavo \n");
            printf("special rechage mate 3 dabavo \n");
            scanf("%d",&enter);
            switch(enter)
            {
            case 1: 
            printf("tamaru internet recharge safalta purvak thai gayu che.");
            break;
            case 2:
            printf("tamaru top-up recharge safalta purvak thai gayu che.");
            break;
            case 3:
            printf("tamaru special recharge safalta purvak thai gayu che.");
            break;
            default: 
            printf("tamaru koi pan rechage thayu nathi..");
            }    
        break;
        default:
        printf("thankyou for viwe recharge plans");
    }

}
