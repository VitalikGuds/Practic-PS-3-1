//После ввода с клавиатуры произвольного строки вывести на экран эту строку с отсортированными в нем символами (в порядке возрастания кодов ASCII), которые входят в него, и сумму их кодов.
#include <iostream>
#include <algorithm>
#include <numeric>
 
using namespace std;
 
int main()
{
    string str;
    getline(cin, str);
 
    sort(str.begin(), str.end());
 
    cout << str << endl;
    cout << accumulate(str.begin(), str.end(), 0) << endl;//accumulate сумирует елементы
}
