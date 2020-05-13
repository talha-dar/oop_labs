#pragma once
#include<iostream>
using namespace std;

class MyString
{
	char* arr;
	int count;

public:
	MyString(const int size = 100);
	MyString(const MyString&, const int, const int);
	int length()const;
	void add(const char);
	const char & operator[](int) const;
	char & operator[](int);
	MyString operator+(const MyString&);
	MyString &operator=(const MyString&);
	void strDeepCpy(char *&, const char *);
	void clear();
	~MyString();
};
