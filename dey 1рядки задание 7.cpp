//����� ����� � ���������� ������������� ������ ������� �� ����� ��� ������ � ���������������� � ��� ��������� (� ������� ����������� ����� ASCII), ������� ������ � ����, � ����� �� �����.
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
    cout << accumulate(str.begin(), str.end(), 0) << endl;//accumulate �������� ��������
}
