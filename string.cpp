//c++ program to demonstrate the working of
/// getline(), push_back(), and pop_back()


#include<iostream>
#include<string>///for string class
using namespace std;
int main()
{
    //Declaring string
   // string str;
    ///Taking string input using getline()
   // getline(cin,str);

    ///Displaying string

   // cout<<"The initial string is : ";
   // cout<< str <<endl;

    ///Inserting a character
   // str.push_back('s');
   // str.push_back('u');
    //Displaying string
   // cout<<"the string after push_back operation is : ";
   // cout<< str <<endl;


    ///deleting a character
     //str.pop_back();
     //displaying string
    // cout<<"The string after pop_back operation is : ";
    // cout<< str <<endl;


///capacity(),resize(),and shrink_to_fit()
//initializing string

//string str = "md atik hasan arik";

//displaying string
//cout<<"the initial string is : ";
//cout<< str <<endl;


///Resizing string using resize()
//str.resize(13);

//displaying string
//cout<<"The string after resize operation is : ";
//cout<< str <<endl;

///displaying capacity of string
//cout<<"the capacity of string is : ";
//cout<<str.capacity()<<endl;

///displaying length of the string
//cout<<"the length of the string is : " << str.length() <<endl;



///Decreasing the capacity of string
///using shrink_to_fit()
//str.shrink_to_fit();

///displaying string
//cout<<" the new capacity after shrinking is : ";
//cout << str.capacity() <<endl;


///Initializing string
//string str = "atikhasanarik";

///Declaring iterator

//std::string::iterator it;

///Declaring reverse iterator
//std::string::reverse_iterator it1;



///displaying string
//cout<<"the string using forward iterators is : ";
//for(it = str.begin(); it!=str.end();it++)
  //  cout<<*it;
//cout<<endl;


///Displaying reverse stirng

//cout<<"the reverse string using reverse iterators is : ";
//for(it1 = str.rbegin(); it1!=str.rend(); it1++)
//{
 //   cout<<*it1;

//}
//cout<<endl;


///copy(),and swap()

///initializing 1st string;

string str1 = "I am Atik hasan";

///Declaring 2nd string
string str2 = "He is apon ";


///Declaring character araay

char ch[80];

//using copy() to elements into char array
 str1.copy(ch,13,0);
 //displaying char array
 cout<<"THe new copied character array is : ";
 cout<< ch <<endl;


///Displaying strings before swapping is : ";
cout<< str1 <<endl;

cout<<str2<<endl;

//using swaping swap()
str1.swap(str2);
//displaying string after swapping
cout<<str1<<endl;
cout<<str2<<endl;





    return 0;
}
