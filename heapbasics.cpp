/*parent index i
   left index=2*i+1
    right index=2*i+2
      */
/* child i  
parent=(i-1)/2*/
/*build heap is a process when adding new element in a tree and swap  and after adding all element in a heap called a build heap "step up"*/
/*insert of  a new element one by one takes nlogn */
/*deletion of an array always takes place from root node and replace by last element and then new root value swap if it is there in wrong that is also called heapify  " stepdown"*/
/*insertion and deletion*/
#include <iostream>
using namespace std; 
class heap

{
  int *arr;
  int size;//total element in heap
  int total_size;//total size of a array
  public:
  heap(int n)
  {
      arr=new int[n];
      size=0;
      total_size=n;
  }
 void insert(int val)
 {
     if(size==total_size)
      {
      cout<<"heap overflow";
      
          return;
      }
    arr[size]=val;
    int index=size;
    size++;
    while(index>0 and arr[index]>arr[(index-1)/2])
    {
        swap(arr[index],arr[(index-1)/2]);
        index=(index-1)/2;
    }
      
   cout<<arr[index]<<"is inserted into the array"<<endl;
   
 }
 void print()
 {
   for(int i=0;i<size;i++)
   {
       cout<<arr[i]<<" ";
        
   }
 
     cout<<endl;
 }
void Heapify(int index)
{
int largest=index;
int left=2*index+1;
int right=2*index+2;
if(left<size and arr[left]>arr[largest])
largest=left;
if(right<size and arr[right]>arr[largest])
largest=right;
    if(largest!=index)
    {
        swap(arr[index],arr[largest]);
        Heapify(largest);
    }
}

void Delete()
{
    if(size==0)
    {
        cout<<"heap underflow"<<endl;
    }
  cout<<arr[0]<<"deleted from the heap"<<endl;
    arr[0]=arr[size-1];
    size--;
    if(size==0)
    return ;
    Heapify(0);
}
};
int main()
{
    heap h1(6);
    h1.insert(4);
    h1.insert(14);
    h1.insert(11);
    h1.print();
    h1.Delete();
    h1.print();
    return 0;
}
