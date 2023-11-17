#include<iostream>
using namespace std;

class Array
{
public:
    int arr1[5];
    float arr2[5];

    Array()
    {
        for (int i=0; i<5; i++)
        {
            arr1[i]=0;
            arr2[i]= 0.0;
        }


    }

    void insert(int index, int value)
    {
        if(index >= 0 && index < 5)
            arr1[index]= value;


        else
            cout<<"invalid";

    }



    void insert(int index, float value)
    {
        if(index >=0 && index<5)
            arr2[index]= value;

        else
            cout<<"invalid";

    }



    void display()
    {

        cout<<"integer array: ";
        cout<<endl;
        for(int i=0; i<5; i++)
        {
            cout<<arr1[i] <<" ";
        }
        cout<<endl;

        cout<<"float array: ";
        cout<<endl;
        for(int i=0; i<5; i++)
        {
            cout<<arr2[i] <<" ";
        }
        cout<< endl;
    }
};
int main()
{
    Array myArray;

    cout << "Enter integer values for the array:" <<endl;
    for (int i = 0; i < 5; i++)
    {
        int value;
        cout << "Enter value for index " << i << ": ";
        cin >> value;
        myArray.insert(i, value);
    }

    cout << "\nEnter float values for the array:" <<endl;
    for (int i = 0; i < 5; i++)
    {
        float value;
        cout << "Enter value for index " << i << ": ";
        cin >> value;
        myArray.insert(i, value);
    }

    myArray.display();

    return 0;
}





