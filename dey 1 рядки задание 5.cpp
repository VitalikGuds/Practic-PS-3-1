//ѕосле ввода с клавиатуры произвольной строки определить и вывести на экран количество латинских букв в нем.



#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
bool f(int i) {
    return (isalpha(i));//возвращ€ет нуливое значение , если аргумент €вл€етс€ буквой алфавита
}
int main() {
    string str;
    getline(cin,str);
    cout<<count_if(str.begin(),str.end(), f);
        system("pause");
    return 0;
}
