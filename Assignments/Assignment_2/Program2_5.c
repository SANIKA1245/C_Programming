#include<stdio.h>
#include<stdbool.h>

bool ChkEven(int iNo)
{
    int iNum = 0;

    iNum = iNo % 2;

    if(iNum==0)
    {
        return true; 
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter numer");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if(bRet == true)
    {
        printf("%d is Even",iValue);
    }
    else
    {
        printf("%d is odd",iValue);
    }
    return 0;

}