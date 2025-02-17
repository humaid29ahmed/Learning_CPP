#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
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
        void updateBook(const char*);

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
        if(strcmp(t,title))
        {
            
            fout.write((char*)this, sizeof(*this));
        }
    }
    fin.close();
    fout.close();
    remove("Book.txt");
    rename("tempfile.txt", "Book.txt");
}

// void Book::updateBook(const char* t)
// {
//     cout<<"Recording.....";
//     fstream file;
//     int counter = 0;
//     file.open("Book.txt", ios::in|ios::ate|ios::out|ios::binary);
//     if (!file) {
//         cerr << "File error!" << std::endl;
//     }else{
//         file.seekg(0);
//         file.read((char*)this, sizeof(*this));
//     while(!file.eof())
//     {
//         if(!strcmp(t,title))
//         {
//             getBookdata();
//             counter++;
//             // Move back by the size of the object to overwrite
//             int currentpos = file.tellg();
//             int objectSize = sizeof(*this);
//             cout<<currentpos<<" "<<objectSize;
//             file.seekg(currentpos - objectSize);
//             file.write((char*)this,sizeof(*this));
//         }
//         file.read((char*)this, sizeof(*this));
//     }
//     if(counter == 0)
//     {
//         cout<<"\nRecord not Found!\n";
//     }
//     file.close();
// }
// }
void Book::updateBook(const char* t)
{
    fstream file;
    int counter = 0;
    file.open("Book.txt", ios::in | ios::out | ios::binary);
    if (!file) {
        cerr << "File error!" << std::endl;
        return;
    }

    // Read and search for the book
    while(file.read((char*)this, sizeof(*this))) {
        if(!strcmp(t, title)) {
            cout << "Enter new book details:\n";
            getBookdata();
            counter++;

            // Move the file pointer back to the start of the record
            file.seekp(-sizeof(*this), ios::cur);
            file.write((char*)this, sizeof(*this));
            break;
        }
    }

    if(counter == 0) {
        cout << "\nRecord not Found!\n";
    }

    file.close();
}

int menu()
{
    int choice;
    cout<<"\n1. Add a Book into a Record\n";
    cout<<"2. Show the Book Record Data\n";
    cout<<"3. Search a Book in the Book Record\n";
    cout<<"4. Delete a Book in the Book Record\n";
    cout<<"5. Update a Book Data in the Book Record\n";
    cout<<"6. Exit\n";
    cout<<"Enter your Choice: ";
    cin>>choice;
    cout<<"\n";
    return choice;
}
int main()
{
  
    Book book;
    char title[20];
   while(1)
   {
    switch(menu()){
        case 1:
           book.getBookdata();
           book.storeBook();
           cout<<"\nSucessfully Added the Record\n";
        break;
        case 2:
           book.viewAllBooks();
        break;
        case 3:
            cout<<"\nEnter the title of the book : ";
            cin.ignore();
            cin.getline(title,19);
            book.searchBook(title);
        break;
        case 4:
            cout<<"\nEnter the title of the book : ";
            cin.ignore();
            cin.getline(title,19);
            book.deleteBook(title);
            cout<<"\nRecord has been Sucessfully deleted\n";
        break;
        case 5:
            cout<<"\nEnter the title of the book : ";
            cin.ignore();
            cin.getline(title,19);
            book.updateBook(title);
            cout<<"\nRecord has been Sucessfully Updated\n";
        break;
        case 6:
            cout<<"\nThanks for Using this Application";
            cout<<"\nPress Any Key to Exit\n ";
            getch();
            exit(0);
        break;
        default:
        cout<<"\nIvalid Choice\n";
        break;
    }
    
   }


    return 0;
}