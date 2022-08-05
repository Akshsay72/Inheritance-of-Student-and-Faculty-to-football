#include<iostream>
#include<string>
using namespace std;

class Univ{
	public:
		int id;
	    string name;
	    Univ(){
	    	id = 0;
	    	name = "";
		}
	    Univ(int i){
		    id = i;
	    } 
	    void display(){
		    if(id == 1){name = "John";}
		    else if(id == 2){name = "Hampus";}
		    else if(id == 3){name = "Steive";}
		    else if(id == 4){name = "Sam";}
		    else if(id == 5){name = "Mike";}
		    else{cout << "Input invalid ID" << endl;}
		    if(id <= 5){
		    	cout << "Person ID is " << id << " & Person Name is " << name << endl; 
			}
	    }
};

class student : public Univ{
	public:
	int sem = 5;
	student(){
		id = 0;
	}
	student(int inputid){
		id = inputid;
	}
	void display1(){
		if(id <= 5){
			display();
			cout << "Semester : "<< sem << endl;
		}else{
			cout << "Person is not a student" << endl;
		}
	}
		
};

class faculty : public Univ{
	public:
		string des = "Assistant Professor";
		faculty(){
		}
		faculty(int inputid){
			id = inputid;
		}
		void display2(){
			if(id <= 5){
				display();
				cout << "Designation : " << des << endl;
			}else{
				cout << "Person is Not a faculty" << endl;
			}
		}
};

// Hybrid inheritance

class football : public student, public faculty{
	public:
		int id;
		string game = "football";
		football(){
			id = 0;
		}
		football(int ID){
		   student :: id = ID;
		}
		void display3(){
			if(id <= 5){display1();display2(); cout << "Game is " << game << endl;}
			else{
				cout << "They are not allowed in game" << endl;
			}
		}
};


int main(){
	football a(4);
	football b(1);
	a.display3();
	cout << endl;
	b.display3();
	return 0;
}
