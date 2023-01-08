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

int main (int argc, char* argv[]) {
	int string_length = strlen(argv[1]);
	
	char temp;
	for (int i=0; i<string_length; i++){
		for (int j=0; j<string_length; j++){
			if (argv[1][i] < argv[1][j]){
				temp = argv[1][i];
				argv[1][i] = argv[1][j];
				argv[1][j] = temp;
			}
		}
	}
	
	cout<<"\nSORTED STRING\n";
	for (int i=0; i<string_length; i++)
		cout<<argv[1][i];
		
	cout<<endl;	
}
