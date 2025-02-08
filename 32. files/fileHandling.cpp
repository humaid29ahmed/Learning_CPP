#include<iostream>
#include<string>

using namespace std;
constexpr int maxBuffer = 1024;
int main()
{
    static const char* originalFile = "originalFile.txt";
    static const char* editedFile = "editedFile.txt";
     static const char* information = "I am writing this code and I am Loving it.\n";

    // FILE* fh =  fopen(originalFile, "w"); // for writing into a file. it uses C FILE macros and a file pointer to refernce the file in the memory
    //                                       // if the file with that name does not exist it will recreate a new file with that name in the disk storage.

    // FILE* fh =  fopen(originalFile, "a"); // This is used to append the information at the end of a line
    // for(int i =0; i<50; i++)
    // {
    //     fputs(information, fh); // This is how you write into a file
    // }

    char buf[maxBuffer];

    FILE* fh = fopen(originalFile, "r"); // file in reading mode

    while(fgets(buf, maxBuffer, fh)) // Here it reads the files and gets the block of 1024 bytes or the characters  of information from a file and end the loop when it reaches end of line or 
    {
        fputs(buf, stdout); // prints the block of information that is stored in the buffer onto the screen

    }
    fclose(fh); // We need to close the file
    
    // rename(originalFile, editedFile); // It renames the filename in the disk storage

    // remove(editedFile); // It will the file from the disk storage


    return 0;
}