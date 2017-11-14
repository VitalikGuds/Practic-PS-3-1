//отредактировать введеное предложение удаляя все слова с непарными номера и переворачивая слова с парными


#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
 using namespace std;
int main(int argc, char *argv[])
{
    vector<string> arr;
    string str;
    string word;
    int i = 0;
    
    cout << "VEdite predlo " << endl;
    getline(cin, str);
 
    stringstream  data(str);
    
    while(getline(data,word,' '))
    {
        if(i++ % 2 == 0)
        {
            reverse(word.begin(), word.end());
            arr.push_back(word);
        }
    }
    
    for (vector<string>::iterator iter = arr.begin(); iter < arr.end(); ++iter)
        cout << *iter << endl;
 	system("pause");
    return 0;
}
