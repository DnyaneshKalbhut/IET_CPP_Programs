#include<iostream>
#include<string.h>
using namespace std;

int countvowels(char* ch){
	int count =0;
	while(*ch!='\0'){
	if(*ch=='a' || *ch=='e' || *ch=='i'|| *ch=='o' || *ch=='u'){
		count++;
	}
	ch++;
}
 return count;
}
int countspace(char* ch){	
	int count=0;
	while(*ch!='\0'){
	if(*ch == ' '){
     		count++;
	}
	ch++;
}
return count;
}

int countwords(char* ch){
	int count = 1;
	while(*ch!='\0'){
	if(*ch == ' '){
		count++;
	}
	ch++;
}
 return count;
}

int occuranceofchar(char* ch){
	int count = 0;
	while(*ch!='\0'){
		if
	}
}

int main(){
	char ch[100];
	cout<<"enter a string "<<endl;
	cin.getline(ch,sizeof(ch));
	
	int length=strlen(ch);
	int vowels=countvowels(ch);
	int spaces = countspace(ch);
	int words= countwords(ch);
	cout<<"length is "<<length<<endl;
	cout<<"spaces are "<<spaces<<endl;
	cout<<"vowels count "<<vowels<<endl;
	cout<<"words are "<<words<<endl;
}
