#include <bits/stdc++.h>
using namespace std;
int main(){
string a,b,c,d;
cout<<"Enter two names"<<endl;
cin>>a>>b;
c=a;
d=b;
//strcpy(d,b);
int la,lb,bk=0,tot=0;
la=(int)a.length();
lb=(int)b.length();
for(int i=0;i<la;i++){
for(int j=0;j<lb;j++){
	//cout<<a[i]<<b[j]<<"  \n";
if(a[i]==b[j]){
	//cout<<a[i]<<b[j]<<"equal block\n";
b[j]='*';
a[i]='@';
	//cout<<a[i]<<b[j]<<"after change block\n";
bk+=2;
break;
}
}
}
tot=la+lb-bk;
	//cout<<"total is "<<tot<<endl;
char arr[]="flames0";
int arr_size=6;
	//cout<<arr<<endl;
/*for(int i=0;i<6 && arr_size>0;i++){
int rem=tot;
if(tot>arr_size){


 rem=tot%arr_size;
}
int j=rem;
cout<<"j is "<<j<<endl;
//if(!j)
//j=1;
while(j<=arr_size && j>0 && arr[j]!='0'){
arr[j-1]='*';

j=j+j;;
}
cout<<arr<<endl;
--arr_size;

}
*/
int rem=tot;
int  key=0;
for(int i=0;i<5 && arr_size>0;i++){
 rem=tot%arr_size;

	//key=rem;
int bc=(key+rem)%arr_size;
if(!bc){
key=0;
arr[arr_size-1]='0';
arr_size--;
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












