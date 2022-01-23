#include <iostream>

using namespace std;

//lets creat a book data type 

class Book {
//attributes 
public: 
string title;
string author;
int pages;
Book(string aTitle, string aAuthor, int aPages) {
    cout<< "Conct function is created here : " << endl;
    title = aTitle;
    author = aAuthor;
    pages = aPages;
}

};

int main()
{

//object is instances 
Book book1("Harry Potter", "JK Rowling", 500);
cout << book1.title << endl;



return 0;

}