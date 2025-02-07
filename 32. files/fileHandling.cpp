#include<iostream>
#include<string>

using namespace std;

int main()
{
    static const char* originalFile = "originalFile.txt";
    static const char* editedFile = "editedFile.txt";

    // FILE* fh =  fopen(originalFile, "w"); // for writing into a file. it uses C FILE macros and a file pointer to refernce the file in the memory
    //                                       // if the file with that name does not exist it will recreate a new file with that name in the disk storage.

    // fclose(fh); // We need to close the file
    
    // rename(originalFile, editedFile); // It renames the filename in the disk storage

    remove(editedFile); // It will the file from the disk storage


    return 0;
}