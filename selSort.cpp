#include <iostream>
using namespace std;


void swap(int a[], int x, int y)
{
  int temp = a[x];
  a[x] = a[y];
  a[y] = temp;
}

int locOfSmallest(int a[], int s, int e)
{
  int i = s;
  int j = i;
  while(i<=e)
  {
    if(a[i]<a[j])
    {
      j = i;
    }
    i = i+1;
  }
  return j;
}

void selSort(int a[], int n)
{
  int i = 0;
  while(i<n-1)
  {
    int j = locOfSmallest(a, i, n-1);
    swap(a, i, j);
    i++;
  }
}

void display(int a[], int n)
{
  int i = 0;
  while(i<n)
  {
    cout<<a[i]<<", ";
    i++;
  }
  cout<<endl;
}

int main()
{
  int arr[] = {102, 12, 193, 1932, 192, 11, 293, 39, 239};
  int size = sizeof(arr)/sizeof(int);  //size = 9

  display(arr, size);
  selSort(arr, size);
  display(arr, size);
  return 0;
}
