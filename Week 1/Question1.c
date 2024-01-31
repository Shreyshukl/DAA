#include<iostream>
using namespace std;
int FindkeyElement(int arr[],int size,int key)
  {
    for(int i=0;i<size;++i)
      {
        if(arr[i]==key)
          return i;
      }
          return-1;
      }
int main()
{
  int size=5;
  int arr[size]={10,20,30,40,50};
  int key=30;
  int index= FindkeyElement(arr,size,key);
  if(index!=-1){
  cout<<"key element found"<<key<<"at index"<<index<<endl;
  }
  else{
  cout<<"key element not found"<<endl;
} 
  return 0;
}

