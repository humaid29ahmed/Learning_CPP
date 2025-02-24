#include<iostream>
using namespace std;

struct area
{
    int length;
    int breadth;
};

void calArea(struct area r1)//pass by value. creates an struct object copy and prints the value
{
    cout<<"Area using rectangle obj via pass by value : "<<r1.length*r1.breadth<<endl; //Receives and print the Data contained in a structure variable
}

struct area* initialization()// creating, initilizing and passing an struct object
{
  struct area *a;
  a = new area;
  a->length = 45;
  a->breadth = 61;

  return a;
}

void changeDirectlyInTheMainStructObject(struct area *obj, int len, int bdh) // Initialize the object of the struct object rectangle via pass by address.
{
    obj->length = len;
    obj->breadth = bdh;
}
int main()
{
    struct area rectangle = {560,90};//Initialized a structure object

    calArea(rectangle);/*passing by value means the function will create a copy of struct object by passing the object to calArea()
                         any change made in this function will not reflect on the original struct object   */
    struct area *atr = initialization();
    cout<<"Area after initializing values via a function and returning the struct objet: "<<atr->length*atr->breadth<<endl;

    changeDirectlyInTheMainStructObject(&rectangle, 93,63); // passing struct object by address which changes the value directly in struct object without creating a copy

    cout<<"Area of rectangle via pass by address : "<<rectangle.length*rectangle.breadth;

    return 0;
}