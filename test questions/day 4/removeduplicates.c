#include<stdio.h>

int main(){
char str[20];
gets(str);

//printf("%s",str);

int len=strlen(str),index=0;
//printf("%d",len);
for(int i=0;i<len;i++){

int j;
for(j=0;j<len;j++){
if(str[i]==str[j])

break;

}
if(j==i){
str[index++]=str[i];
}


}
printf("%s",str);
return 0;
}


// CPP program to remove duplicate character
// from character array and print in sorted
// order


/*


#include <stdio.h>

int main()
{
char str[20],str2[20];
gets(str);
int n = sizeof(str) / sizeof(str[0]);


int index = 0;
	

for (int i=0; i<n; i++) {
		
	
	int j;
	for (j=0; j<i; j++)
		if (str[i] == str[j])
		break;
	

	if (j == i)
		str2[index++] = str[i];
}

printf("%s",str2);
return 0;
}
*/

