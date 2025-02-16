#include<iostream>
#include<fstream>
#include<string.h>
#include<conio.h>

using namespace std;

class Book{
    int bookid;
    float price;
    char title[20];

    public:
        Book()
        {
            bookid=0;
            price = 0.0;
            strcpy(title,"no title");
        }
        
        void getBookdata()
        {
            cout<<"Enter the book id, title and price : ";
            cin>>bookid;
            cin.ignore();
            cin.getline(title,19);
            cin>>price;

        }

        void showBookData()
        {
            cout<<"\n"<<bookid<<" "<<title<<" "<<price;
        }

        int storeBook();
        void viewAllBooks();
        void searchBook(const char*);
        void deleteBook(const char*);

};

int Book::storeBook()
{
    if(bookid == 0 && price == 0)
    {
        cout<<"\nBook Data not Initialized!";
        return 0;
    }
    ofstream fout;
    fout.open("Book.txt", ios::app|ios::binary);
    fout.write((char*)this, sizeof(*this));
    fout.close();
    return 1;
}

void Book::viewAllBooks()
{
    ifstream fin;
    fin.open("Book.txt",ios::in|ios::binary);

    if(!fin)
    {
        cout<<"File failed to open!\n";
    }
    else
    {
        
        while(fin.read((char*)this, sizeof(*this)))
        {
            
            showBookData();
        }
        fin.close();
    }
}

void Book::searchBook(const char* t )
{
    int counter = 0;
    ifstream fin;
    fin.open("Book.txt",ios::in|ios::binary);

    if(!fin)
    {
        cout<<"\nFile failed to open!";
    }
    else
    {
        while(fin.read((char*)this, sizeof(*this)))
        {
            if(!strcmp(t,title))
            {
                showBookData();
                counter++;
            }

            
        }
        if(counter == 0)
        {
            cout<<"Record not Found!";
        }
        fin.close();
        
    }

}

void Book::deleteBook(const char* t)
{
    ifstream fin;
    ofstream fout;

    fin.open("Book.txt", ios::in|ios::binary);
    fout.open("tempfile.txt", ios::out|ios::binary);

    while(fin.read((char*)this, sizeof(*this)))
    {
        cout<<"Record Written"<<endl;
        if(strcmp(t,title))
        {
            cout<<"Record Written"<<endl;
            fout.write((char*)this, sizeof(*this));
        }
    }
    fin.close();
    fout.close();
    remove("Book.txt");
    rename("tempfile.txt", "Book.txt");
}
int main()
{
    Book b1,b2;

    // b1.getBookdata();
    // // // b1.showBookData();
    // b1.storeBook();
    // // // b2.showBookData();
    // // b2.storeBook();
    // b1.viewAllBooks();
    // b1.searchBook("1001 Nights");
    // cout<<"\n-------------------------------------------------------------------------------\n";
    
    b1.deleteBook("1001 Nights");
    cout<<"\n-------------------------------------------------------------------------------\n";
    b1.viewAllBooks();

    return 0;
}