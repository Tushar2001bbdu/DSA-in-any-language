#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
void enqueue();
void dequeue();
void show();
int inp_arr[SIZE];
int Rear=-1;
int Front=-1;
int main()
{
	int ch;
	while(1)
	{
		printf("1.Enqueue Operation\n");
		printf("1.Enqueue Operation\n");
		printf("1.Enqueue Operation\n");
		printf("1.Enqueue Operation\n");
		printf("Enter your choice of operation");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				show();
				break;
			case 4:
				exit (0);
			default:
				printf("Incorrect choice\n");
		}
	}
}
void enqueue()
{
	int insert_item;
	if(Rear==SIZE-1)
		printf("Overflow\n");
	else
	{
		if(Front==-1)
			Front=0;
		printf("Element to be inserted in the Queue is : ");
		scanf("%d",&insert_item);
		Rear=Rear+1;
		inp_arr[Rear]=insert_item;
	}
}
void dequeue()
{
	if(Front==-1||Front>Rear)
	{
		printf("UnderFlow\n");
		return;
	}
	else{
		printf("Queue:\n");
		for(int i=Front;i<=Rear;i++)
			printf("%d",inp_arr[i]);
		printf("\n");
	}
}