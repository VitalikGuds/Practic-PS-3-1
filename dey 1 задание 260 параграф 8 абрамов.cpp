//даны символы среди которых есть двуито€чи€ а) получить все символы , расположенные до первого двуиточи€ б) получить все символы после первого двоеточи€ в)получть все символы , расположенные между первым и вторым двуеточием


#include <stdio.h>
#include <cstring>
#include <iostream>
using namespace std;
int main(){
    char str[] = " appasd asd 14 ps :happy new year ! :appad dda)";
    int one = 0, two = 0, i;
    for(i = 0; i < strlen(str); i++){
        if(one == 0){
            if(str[i] == ':')
                one = i;
        }
        else if(str[i] == ':')
            two = i;
                else if(two != 0 )
                        break;
    }
    //printf("%d %d", one, two);
    cout<<" all characters located before the first colon, inclusive: ";
    for(i = 0; i <= one; i++)
        cout<< str[i];
    
    cout<<"\n all characters are placed after the first colon: ";
    for(i = one + 1; i < strlen(str); i++)
        cout<< str[i];   
        
    cout<<"\n all characters between the first and second colons: ";
    for(i = one + 1; i < two; i++)
       cout<< str[i];   
return 0;
}
