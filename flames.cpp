#include <bits/stdc++.h>
using namespace std;
int main(){
string a,b,c,d;
cout<<"Enter two names"<<endl;
cin>>a>>b;//input strings 
c=a;//backing up name1
d=b;//backing up name2
//strcpy(d,b);
int la,lb,bk=0,tot=0;
la=(int)a.length();//length of string1
lb=(int)b.length();//length of string2
for(int i=0;i<la;i++){
for(int j=0;j<lb;j++){
	//cout<<a[i]<<b[j]<<"  \n";
if(a[i]==b[j]){//check for same character
	//cout<<a[i]<<b[j]<<"equal block\n";
b[j]='*';//mark as checked
a[i]='@';//optional
	//cout<<a[i]<<b[j]<<"after change block\n";
bk+=2;//name1,name2 has same character,so two in number
break;
}
}
}
tot=la+lb-bk;//unstruck characters
	//cout<<"total is "<<tot<<endl;
char arr[]="flames0";//0 to mark the end
int arr_size=6;//size of flames 

int rem=tot;
int  key=0;//to mark the start of array from which the strike should start
for(int i=0;i<5 && arr_size>0;i++){
 rem=tot%arr_size;

	
int bc=(key+rem)%arr_size;
if(!bc){//if bc ==0 ,then the previous character(the last character of flames) should be striked
key=0;//the next character should be first character of flames
arr[arr_size-1]='0';
arr_size--;//decrement the size
}else{
key=bc-1;
for(int j=bc-1;j<arr_size;j++){
arr[j]=arr[j+1];
}
arr_size--;
}


}
	//cout<<arr[0]<<endl;
cout<<c<<"  and  "<<d<<"  ";
switch(arr[0]){
case 'f': cout<<"are good friends";
	break;
case 'l': cout<<"are lovers";
	break;
case 'a': cout<<" have great affection on each other";
	break;
case 'm': cout<<"will end up in marriage";
	break;
case 'e': cout<<"are bitter enemies";
		
	break;
case 's': cout<<"are siblings";
	break;
}
cout<<endl;
return 0;
}












