#include <iostream>

using namespace std;

int main()
{   
    int data;
    int arr[]={1,2,3,4,5,6,7,8,8,9,11,12,13,34,32};    
    cout<<"Enter data to Search:";
    cin>>data;
    for(int i=0;i<= sizeof(arr);i++)
{
        if(data==arr[i])
        {
            cout<<"Value Found";
        }

        break;

}

    return 0;
}
