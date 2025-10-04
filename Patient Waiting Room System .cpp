#include<iostream>
#include<string>
using namespace std;

class Queue{
	public:
		string *arr;
		int size;
		string *front;
		string *rear;
		int elements;
		
		Queue(int size){
			this->size=size;
			arr=new string[size];
			front=rear=arr;
			elements=0;
		}
		
		bool isempty(){
			if(elements==0){
				return true;
			}
			else{
				return false;
			}
		}
		
		bool isfull(){
			if(elements==size){
				return true;
			}
			
			else{
				return false;
			}
		}
		
		void Addpatient(){
			
			if(isfull()){
				cout<<"\nThe queue is full..\n";
				return ;
			}
			
				string n;
			cout<<"\nEnter the name of the patient for queue:\n";
			cin>>n;
			
			if(isempty()){
				rear=front=arr;
				*rear=n;
				++elements;
				return;
				}
			if(rear==(arr+size-1)){
				if(front!=arr){
					rear=arr;
					*rear=n;
					++elements;
					return;
				}
			}
			++rear;
			*rear=n;
			++elements;
			
			
		}
		void removepatient(){
			if(isempty()){
				cout<<"\nThe queue is empty ...\n";
				return;
			}
			cout<<"The Patient with name :"<<*front<<"  is Removed from queue and sent to the Doctor\n";
			if(front==(arr+size-1)){
				front=arr;
				front++;
				elements--;
				return;
			}
			front++;
			elements--;
			
		}
		
		void nextpatient(){
			if(isempty()){
				cout<<"\nNo patient in line \n";
				return;
			}
			else{
				cout<<"\nThe next patient in line is : "<<*front;
				
			}
		}
};

int main(){
	Queue q(7);
	int choice;
	
	do{
		cout<<"\n\nMenu Patients\n\n";
		cout<<"1.Add Patients\n";
		cout<<"2.Send to the Doctor\n";
		cout<<"3.Next Patient\n";
		cout<<"4.Exit the menu\n";
		cout<<"Enter your choice:\n";
		cin>>choice;
		switch(choice){
			case 1:
				q.Addpatient();
				break;
			case 2:
				q.removepatient();
				break;
			case 3:
			    q.nextpatient();
				break;
			case 4:
			     cout<<"\nExiting ....\n";
				 break;	
			default:
			     cout<<"\nInvalid\n";
				 break;	 	
		}
	}while(choice!=4);
}