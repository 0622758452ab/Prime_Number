#include <bits/stdc++.h>
using namespace std;

bool Prime(int a)
{
    if (a <= 1)
        return false;
    for (int i = 2; i <= sqrt(a); i++)
        if (a % i == 0)
            return false;

    return true;
}

int main()
{
    int a ;
    printf("Enter number : ");
    scanf("%d",&a);
    bool isprime = Prime(a);
    if(isprime)printf("True");
    else printf("False");
    return 0;
}
