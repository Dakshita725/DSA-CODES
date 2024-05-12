#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[]="ycce",t[]="ycsce";
    int n1=strlen(s);
    int n2=strlen(t);
    if(n1>n2)
    {
        cout<<"operation required : "<<n1-n2;
    }
    else if(n1<n2)
    {
        cout<<"operation requred : "<<n2-n1;
    }
    else
    {
        int flag=0;
        for(int i=0;i<'\0';i++)
        {
            if(s[i]==t[i])
                continue;
            else
                flag++;
        }
        cout<<"Number of operation required is : "<<flag;
    }
    return 0;
}
