#include <iostream>
#include <cstdlib>
#define MAX 100
using namespace std;

int main()
{
  int n;
  int arr[MAX];
  cout<<"Enter a number N: "<<endl;
  cin>>n;

  //inputting values in an array
  for(int i = 0; i<n; i++)
  {
    arr[i] = rand();
  }


  //outputting the unsorted array

  for(int i = 0; i<n; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;

  //sorting an array

  for(int i = 0; i<n; i++)
  {
    for(int j = i+1; j<n; j++)
    {
      //descending order
      if(arr[j]>arr[i])
      {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }


  //display the sorted array
  cout<<"sorted"<<endl;
  for(int i = 0; i<n; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  return 0;
}
