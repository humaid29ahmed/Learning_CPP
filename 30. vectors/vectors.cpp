#include<iostream>
#include<vector>

using namespace std;



struct Corners
{
    int a,b,c,d;
};

ostream& operator<<(ostream& stream, const Corners& corner)
{
    stream<<corner.a<<" "<<corner.b<<" "<<corner.c<<" "<<corner.d;
    return stream;
}

int main()
{
    vector<int> numbers;

    numbers.push_back(2);
    numbers.push_back(5);
    numbers.push_back(6);
    numbers.push_back(8);

    for(auto i = numbers.begin(); i != numbers.end(); ++i)
    {
        cout<<*i<<endl;
    }
    
    vector<Corners> corners;

    corners.push_back({1,2,3,4});
    corners.push_back({4,5,6,7});

    for(int i = 0; i<corners.size(); i++)
    {
        cout<<corners[i]<<endl;
    }


    
    return 0;
}