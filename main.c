#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{

    int accNum;
    int mortgageAmt;
    int mortgageTerm;
    float rate;

    int mortgageCalculator() {
        float interestPayable;
        float totalAmountPayable;
        int months;
        float reqMonthlyPayment;

        interestPayable = (mortgageAmt*rate*mortgageTerm);
        totalAmountPayable = (interestPayable+mortgageAmt);
        months = (mortgageTerm*12);
        reqMonthlyPayment = (totalAmountPayable / months);
        return reqMonthlyPayment;
    }

    printf("Enter account number (-1 to end): ");
    scanf("%d", &accNum);
    printf("Enter mortgage amount (in dollars): ");
    scanf("%d", &mortgageAmt);
    printf("Enter mortgage term (in years): ");
    scanf("%d", &mortgageTerm);
    printf("Enter interest rate (as a decimal): ");
    scanf("%f", &rate);
    printf("The monthly payable interest $ %d", mortgageCalculator());
}
