#include<stdio.h>                                                               
int main(){                                                                     
FILE *fptr=fopen("myfile.txt","r");                                             
int count,c=0,i;                                                                  
while(1){                                                                       
count=0;                                                                        
for( i=0;i<10;i++){                                                          
c=getc(fptr);                                                                   
if(c==-1)                                                                       
break;                                                                          
if(c>='0' && c<='9')                                                            
count++;                                                                        
}                                                                               
if(c==-1)                                                                       
break;                                                                          
if(count==10){                                                                  
char s[10];                                                                     
fseek(fptr,-10,SEEK_CUR);                                                       
fgets(s,11,fptr); 
printf("%s",s);                                                                 
break;                                                                          
}}                                                                              
if(count!=10){                                                                  
rewind(fptr);                                                                   
for( i=0;i<10;){                                                             
c=getc(fptr);                                                                   
if(c>='0' && c<='9')                                                            
continue;                                                                       
printf("%c",c); 
i++;                                                                            
}                                                                               
}                                                                               
return 0;                                                                       
}
