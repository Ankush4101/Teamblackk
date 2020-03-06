#include<iostream>
using namespace std;
int main()
{
    int arr1[10];
    static int max1=10,rear=-1,front1=-1,ele,num,i;
    //cout<<sizeof(arr1)/sizeof(int);
    cout<<"The total size of the array is 10!!";
    while(1)
    {
        cout<<"\nEnter (1 to INSERT, 0 to DELETE , 9 to EXIT ) :";
        cin>>num;
        cout<<"======================================================";
        if(num==1)
        {
            if(rear>max1)
            {
                cout<<"\nThe QUEUE IS FULL!";
                 cout<<"\n=======================================================";
            }
            else
            {
                rear=rear+1;
                cout<<"\nEnter the Element you want to enter:";
                cin>>ele;
                arr1[rear]=ele;
                front1++;
            }

        }
        else if(num==0)
        {
                if(front1>=0)
                {
                    ele=arr1[front1];
                    arr1[front1]=arr1[front1 + 1];
                    cout<<"\nDELETED item is:"<<ele;
                    cout<<"\n======================================================";

                }
                else
                {
                    cout<<"\nTHERE IS NO ELEMENT TO DELETE!!";
                     cout<<"\n======================================================";
                }
        }
        else if(num==9)
        {
            break;
        }
        else
        {
            for (i=front1+1;i<rear;i++)
            {
                cout<<"\n";
                cout<<" "<<arr1[i];

            }
        }
    }

}
