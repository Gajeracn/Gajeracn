#include<stdio.h>
int main()
{
int a,b,c,d,e,f,g;
printf("Please enter your marks, subject wise:\n");
printf("Math: ");
scanf("%d", &a);
if(a<0||a>100) 
{
    printf("\nPlease enter valid marks.");
}
else
{printf("\nScience: ");
scanf("%d", &b);
    if(b<0||b>100)
    {
        printf("\nPlease enter valid marks.");
    }
    else
    {printf("\nGujarati: ");
    scanf("%d", &c);
            if(c<0||c>100)
            {
                printf("\nPlease enter valid marks.");
                }
            else
            {printf("\nEnglish: ");
            scanf("%d", &d);
                if(d<0||d>100)
                {
                    printf("\nPlease enter valid marks.");
                    }
                else
                {printf("\nSocial-study: ");
                scanf("%d", &e);
                    if(e<0||e>100)
                    {
                        printf("\nPlease enter valid marks.");
                        }
                    else
                    {
                    f=a+b+c+d+e;
                    g=f*100/500;
                    printf("\nyour total marks of all subjects are: %d", f);
                    printf("\nyour total percentage are: %d%% ", g);
                    if(g>75)
                    {
                        printf("\nYou got Distinction.");
                    }
                    else
                    {
                        if(g>60&&g<=75)
                        {
                            printf("\nYou got First Class.");
                        }
                        else
                        {
                            if(g>50&&g<=60)
                            {
                                printf("\nYou got Second class.");
                            }
                            else{
                                if(g>=35&&g<=50)
                                {
                                    printf("\nYou got Pass Class.");
                                }
                                else
                                {
                                    printf("\nSorry you are fail.");
                                }
                            }
                        }
                    }
                    }
                }
             }   
        }
    }
return 0;
}