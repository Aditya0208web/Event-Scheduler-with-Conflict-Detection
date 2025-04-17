#include<stdio.h>
#include<stdlib.h>
#define m 10
struct hash{
	int n;	
}time[m];
int size = 24;
void create_time(){
	int i;
	int time[size];
	for( i=0;i<size;i++){
		time[i]=0;
	}
}
void collision(int size,struct hash time[], int event){
	int i;
	int slot=event%m;
	if(time[slot].n!=0){
		printf("Collision Occured\n");
		for(i=0;i<size;i++){
			slot=(event+i)%m;
			if(time[slot].n==0){
				time[slot].n=event;
					printf("Due to some another event is shedule at that time, So the Next event is sheduled at %d\n",slot);
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
		printf("Event is sheduled at %d",slot);
	}else{
		collision(size,time, event);
	}
	
}
void display(struct hash time[]){
	int i;
	for(i=0;i<size;i++){
		if(time[i].n!=0){
			printf("Slot %d : Event %d\n",i,time[i].n);
		}
		
	}
	printf("\n");
}
int main(){
	int choice;
	create_time();
	printf("WELCOME TO RISING MANAGEMENT TEAMS\n");
	while(1){
		printf("\n****SERVICES****\n");
		printf("1.insert\n2.display\n3.exit\n");
		printf("Enter the choice:");
		scanf("%d",&choice);
		switch(choice){
			case 1: insert();
			break;
			case 2: display( time);
			break;
			case 3: exit(0);
			break;
			default: printf("Wrong Choice\n");
		}
	}
}
