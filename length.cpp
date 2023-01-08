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
	cout<<"\nLength of String = "<<string_length<<endl;	
}
