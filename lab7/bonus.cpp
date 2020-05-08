Solution:
//initializer list ctr
MyString(initializer_list<char> list)
{
 count = 0;
 arr = new char[list.size()];
   
 for (auto i: list)
    add(i);
}
//initializer list assignment operator
MyString& operator=(initializer_list<char> list)
{
 count = 0;
 delete[]arr;
 arr=nullptr;
 arr = new char[list.size()];
 for (auto i: list)
     add(i);
   return *this;
}
