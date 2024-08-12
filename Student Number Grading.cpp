#include <iostream>
using namespace std;
int main(){
	int marks;
	cout<<"Enter your mark : ";
	cin>>marks;
	
   if(marks>=90){
    cout<<"Excellent "<<marks;
	    if(marks==100){
	    	cout<<" : topper in the school ";
		}

       }
		else if (marks>=75 || marks>90){
			cout<<"Very good "<<marks;
		}
	    else if(marks>=50||marks>75){
			cout<<"Good "<<marks;
		}
		else if(marks>=35||marks>50){
			cout<<"Need improvment "<<marks;
		}
		else if(marks>35){
			cout<<"Fail "<<marks;
				
        	}
		}
		
