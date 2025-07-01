#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    int year;

public:
    void input(string t, string a, int y);
    void display();
};

void Book::input(string t, string a, int y) {
    title = t;
    author = a;
    year = y;
}

void Book::display() {
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Published Year: " << year << endl;
}

int main() {
    Book myBook;
    myBook.input("Mein Kampf", "Adolf Hitler", 1925);
    myBook.display();

    return 0;
}
