#include<stdio.h>
#include<stdlib.h>
#define m 10
struct hash{
	int n;	
}time[m];
int size;
void create_time(){
	int i;
	printf("Enter the size of time:");
	scanf("%d",&size);
	int time[size];
	printf("Enter the time:");
	for( i=0;i<size;i++){
		scanf("%d",&time[i]);
	}
}
void collision(int size,struct hash time[]){
	int event, slot;
	int i;
	printf("Enter the event and slot");
	scanf("%d %d",&event,&slot);
	if(time[slot].n!=0){
		printf("Collision Occured\n");
		for(i=0;i<size;i++){
			slot=(event+i)%m;
			if(time[slot].n==0){
				time[slot].n=event;
				break;
			}
		}
		
	}
}
void insert(){
	int event,slot;
	printf("Enter the event:");
	scanf("%d",&event);
	slot=event%m;
	if(time[slot].n==0){
		time[slot].n=event;
	}else{
		collision(size,time);
	}
	
}
void display(){
	int i;
	for(i=0;i<size;i++){
		printf("%d\t",time[i].n);
	}
	printf("\n");
}
int main(){
	int choice;
	create_time();
	while(1){
		printf("****MENU****\n");
		printf("1.insert\n2.collision\n3.display\n4.exit\n");
		printf("Enter the choice:");
		scanf("%d",&choice);
		switch(choice){
			case 1: insert();
			break;
			case 2: collision(size,time);
			break;
			case 3: display();
			break;
			case 4: exit(0);
			break;
			default: printf("Wrong Choice\n");
		}
	}
}
