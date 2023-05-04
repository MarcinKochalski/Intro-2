#include <string.h>
#include <iostream>
using namespace std;

int HAS_TXT_EXTENSION(char name[])
{
    int a=0;
    int length = strlen (name);

    // immediate return, if the name has less than 4 letters
    if (length <4)
        return 0; // return false

    // check, if the last four letters are ".txt"
    if( strcmp( name+length-4, ".txt" )==0 )
    {
        a = 1;
        return a;
    }
    else
        return 0;
}

int main()
{
    int a=0;
    char name[]="abscvsd.xt";
            a=HAS_TXT_EXTENSION(name);

            if(a==1)
                cout <<"Has .txt extension";
return 0;
}
