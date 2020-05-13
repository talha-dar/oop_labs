#include<iostream>
using namespace std;
#include"MyString.h"
MyString::MyString(const int size)
{
	if (size > 0)
	{
		arr = new char[size];
		count = 0;
	}
	else
	{
		arr = nullptr;
		count = 0;
	}
}
MyString::MyString(const MyString& obj, const int start, const int end)
{
	if (end - start <= obj.length())
	{
		arr = new char[end - start];
		count = 0;
		for (int i = start - 1; i <end; i++)
		{
			add(obj.arr[i]);
		}
	}
	else
	{
		arr = new char[100];
		count = 0;
	}
}
const char & MyString::operator[](int index) const
{
	if (index >= 0 && index <= count)
	{
		return arr[index];
	}
	else
	{
		return arr[0];
	}
}
char & MyString::operator[](int index)
{
	if (index >= 0 && index <= count)
	{
		return arr[index];
	}
	else
	{
		return arr[0];
	}
}

void MyString::add(const char character)
{
	arr[count] = character;
	count++;
}
void MyString::clear()
{
	int i = 0;
	if (arr)
	{
		while (i != length())
		{
			arr[i] = '\0';
			i++;
		}
	}
	count = 0;
}
MyString MyString::operator+(const MyString & obj)
{
	MyString temp;
	int i = 0;
	temp.count = length() + obj.length();
	while (i != count)
	{
		temp.arr[i] = arr[i];
		i++;
	}
	int j = 0;
	while (i != temp.count)
	{
		temp.arr[i] = obj.arr[j];
		j++, i++;
	}
	return temp;
}

MyString &MyString::operator=(const MyString & obj)
{
	if (this != &obj)
	{
		delete[]arr;
		arr = nullptr;
		count = obj.count;
	//	cout << "count " << count;
		arr = new char[count];
		int i = 0;
		while (i!= count)
		{
			arr[i] = obj.arr[i];
			i++;
		}
//		strDeepCpy(arr, obj.arr);
	}
	return *this;
}
int MyString::length() const
{
	return count;
}
MyString::~MyString()
{
	if (arr)
	{
		delete[]arr;
		arr = nullptr;
		count = 0;
	}
	cout << " destructor " << endl;
}
