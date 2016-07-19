#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <tim>
int *array2();
int main(int argc, char const *argv[])
{
	/* code */
	char string1[5]={'1','2','3','4','5'};
	char *strtest;
	char string2[5] = {0};
	int i=0;

	int *arraytest;

	arraytest = array2();

	printf("ret-1[%d], ret-2[%d]\n",arraytest[0],arraytest[1]);




	for(i=0;i<5-1;i++)
	{
		string1[i]= string1[i+1];
	}
	strtest =string1;

	memcpy(string2,strtest,4);
	string2[4]=0;

	printf("%s \n",string2);
	
	return 0;
}


int* array2(){

    int ret[2] = {0};

	ret[0] = 1;
	ret[1] = 2;

	return ret;
}
