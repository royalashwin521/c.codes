//Made By : Ashwin Royal
// Binary search by Divide And Conquer with recursion


#include<stdio.h>
#include<conio.h>

int BinarySearch(int[],int,int,int,int);

void main()
 {
  int BinaryArr[10],begin=0,mid=4,end=8,n=0,item;
  int i,index=0;
  clrscr();
  printf("Enter the total no. of elements in array");
  scanf("\n%d",&n);
  printf("\nNow Enter The elements\n");

  for(i=0;i<9;i++)
   {
    scanf("%d",&BinaryArr[i]);
   }
     printf("enter the you want to find\n");
     scanf("%d",&item);

     index = BinarySearch(BinaryArr,begin,mid,end,item);

     //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
     if(index==-1)
     {
      printf("element Not Found");
     }
     else
     {
      printf("element Found At Index value%d",index);
     }

   getch();

 }
   //++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

  int BinarySearch(int arr[],int begin,int mid, int end,int item)
  {

     if(begin==mid&&end==mid)
     {
      if(arr[begin]==item&&arr[end]==item) //++++check cond. when element
       return mid;                         //++++ found or
       else                                //++++ not found
       return -1;
     }


     if(arr[mid]==item)                  //element present at mid
     {
      return mid;
     }
      else
       {
	 if(arr[mid]<item)              //element present at right side from mid
	{
	 begin = mid+1;                  //shift begin to right
	 mid = (begin + end)/2;          //shift mid to new array mid
	return BinarySearch(arr,begin,mid,end,item);
       }
       else                            //element present at left side of mid
       {
	 end = mid-1;
	 mid = (begin+end)/2;
	return BinarySearch(arr,begin,mid,end,item);
       }


     }
  }






