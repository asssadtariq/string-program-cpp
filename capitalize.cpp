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

	for (int i=0; i<string_length; i++){
		if (argv[1][i] >= 97 && argv[1][i] <= 122)
			argv[1][i]-=32;
	}

	cout<<"\nCAPITALIZING STRING : \n";
	cout<<argv[1]<<endl;		

}
