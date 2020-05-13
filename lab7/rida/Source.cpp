#include"MyString.h"
#include"MyString.cpp"
using namespace std;
//#include"MyString.cpp"
void print(const MyString & obj);
int main()
{
	MyString str1;
	str1.add('[');
	str1.add('A');
	str1.add('B');
	str1.add('C');
	str1.add('D');
	str1.add('E');
	str1.add('F');
	str1.add('G');
	str1.add('h');
	str1.add('i');
	str1.add('j');
	str1.add('k');
	str1.add('l');
	str1.add('m');
	str1.add('n');
	str1.add('o');
	str1.add('p');
	str1.add(']');
	cout << "str1\n"; 
	print(str1);
	cout << endl;
	cout << "Lenghth of str1 is = " << str1.length() << endl;
	cout << "str2\n"; 
	MyString str2(str1, 2, 9);
	print(str2); 
	cout << "Lenghth of str2 is = " << str2.length() << endl;    
	cout << "str4\n";  
	const MyString str4; 
	print(str4);  
	cout << "Lenghth of str4 is =" << str4.length() << endl;
	str1.clear();
	cout << "After clearing str1\n";  
	print(str1); 
	cout << endl;
	str1.add('$');
	cout << "After adding $ to str1\n";
	print(str1);
	MyString str3;
	str3= str1 + str2;
	cout << "str3\n";  
	print(str3);
	cout << endl;
	cout << " rida " << endl;
}
void print(const MyString & obj)
{
	if (obj.length()>0)
	{
		for (int i = 0; i <obj.length(); i++)
		{
			cout << obj[i] << " ";
		}
	}
	else
	{
		cout << " String is empty " << endl;
	}
}
