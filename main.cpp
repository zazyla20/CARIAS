#include<iostream>
using namespace std;




int main(int argc, char** argv){
    		   
     int age,height;
		    		 	  				
          cout<<"NOTE: atleast 18 years old and 160cm are allowed to enter"<<endl;
 	     cout<<"Enter your age:  ";
 	        cin>>age;

 		if(age>=18&&age>=18){
		cout<<"You pass the first requirement"<<endl<<endl;}
		else
		{
		cout<<"Your age does not satisfy the minimum age requirement"<<endl<<endl;
		}

cout<<"Enter your Height: ";
 	     cin>>height;
     if(height>=160||height>=160)
     {
     	cout<<"you pass the second requirement"<<endl<<endl;
     	cout<<"therefore you may enter";}
     	else
     	{
     	cout<<"your height does not satisfy the minimum height requirement"<<endl<<endl;
		cout<<"Therefore you are not allowed to enter";	
		}
     	
	
 	return 0;
 }

