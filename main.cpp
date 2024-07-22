#include <iostream>

int factorial(int nData)
{
    if(nData<=1)
    {
        return 1;
    }
    nData=nData* factorial(nData-1);
    return  nData;
}

int main()
{
    int nNum{};
    nNum=factorial(5);
    printf("%d",nNum);
}
