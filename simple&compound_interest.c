// calculate simple interest on  amount given by user
#include<stdio.h>
#include<math.h>
int main()
{
float amount,time,simple_interest,payout,compound_interest,ci_payout;
const float interest_rate=0.085;
printf("Please enter the amount you want to deposit:\n");
scanf("%f", &amount);
printf("Please enter the time in years for which you want to deposit this amount:\n");
scanf("%f", &time);
printf("Our rate of interest on the deposit is 8.5 per year.\n");
simple_interest=amount*interest_rate*time;
printf("Your yearly simple interest only at the end of year will be: %f.\n", simple_interest);
payout=simple_interest+amount;
printf("Your total payout, simple interest with deposit will be: %f.\n", payout);
//compound interest
ci_payout=amount*pow((1+interest_rate),time);
compound_interest=ci_payout-amount;
printf("Compound interest you will get will be:%f.\n", compound_interest);
printf("Total amount adding compound interest will be:%f.", ci_payout);
    return 0;
}
