//���� ������ ���������� ���������� ���� � ��������� �� ����� 

#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
main()
{
	 string a,b;
	int i;
	getline(cin,a);
 	for(i=0;i<a.size();i++)
	 if(isalpha(a[i])) //��������� ��������� ��� ��������� �����
{
	b+=a[i];
}
 		else
   {	
	b.clear();
	}
cout<<b<<endl<<b.size()<<" simvolov v poslednem slove\n";
system("pause");
}
