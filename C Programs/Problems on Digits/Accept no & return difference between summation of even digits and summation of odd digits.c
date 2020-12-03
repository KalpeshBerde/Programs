/*5.Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.

Input : 2395
Output : -15 (2 - 17)

Input : 1018
Output : 6 (8 - 2)

Input : 8440
Output : 16 (16 - 0)

Input : 5733
Output : -18 (0 - 18)

*/

#include<stdio.h>

int CountOdd(int iNo)
{
    int iEvenCnt=0;
    int iOddCnt=0;
    int iDigit=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    while(iNo>0)
    {
        iDigit=iNo%10;
        if(iDigit%2==0)
        {
            iEvenCnt=iEvenCnt+iDigit;
        }
        else
        {
            iOddCnt=iOddCnt+iDigit;
        }
        iNo=iNo/10;
    }

    return iEvenCnt-iOddCnt;
}

int main()
{
    int iNo=0;
    int iRet=0;

    printf("Enter the no: ");
    scanf("%d",&iNo);

    iRet=CountOdd(iNo);

    printf("Count of Odd digits is: %d",iRet);

    return 0;

}

