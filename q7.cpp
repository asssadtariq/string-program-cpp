#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <iostream>
#include<string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include<sys/stat.h>
//#inlcude <sys/types.h>
#include<errno.h>
#include<fcntl.h>
#include<time.h>

using namespace std;

int main (int argc, char* argv[], char* env[]) {
	char str_value[100]={'\0'};
	cout<<"Enter String Of 100 Characters : "; cin.get(str_value, 100);

	int x1 = fork(); // reverse
	
	if (x1 > 0){	// Parent - P
		wait(NULL);
		cout<<"ALL DONE !!!"<<endl;
	}
	
	else if (x1 == 0){
		int x2 = fork(); // Length
		if (x2 > 0) { // for child c1
			wait(NULL);
			int x3 = fork(); // Add 2 
			if (x3>0){ // for child c2
				wait(NULL);
				int x4 = fork(); // sort
				if (x4>0){ // for child c3
					wait(NULL);
					int x5 = fork(); // capitalize
					if (x5>0){
						wait(NULL);
					}
					
					else if (x5==0){
						execl("./capitalize","./capitalize",str_value,NULL);
					}
				}
				
				else if (x4==0){ 
					execl("./sort","./sort",str_value,NULL);
				}				
			}
			
			else if (x3==0){
				execl("./addtwo","./addtwo",str_value,NULL);
			}
		}
		
		else if (x2 == 0){
			execl("./length","./length",str_value,NULL);
		}
	
	
		execl("./reverse","./reverse",str_value,NULL);
	}
	


	return 0;	
}
