#include<stdio.h>
#include<stdlib.h>

int strlen(char *str){
    int i=0;
    while(*str!='\0'){
        str++;
        i++;
    }
    return i;
}

void strcpy(char *str1,char *str2){
      //proccess1
       while(*str2!='\0'){
             *str1=*str2;
             str1++;
             str2++;
       }
       *str1='\0';

       //process2;
      /* int i;
       for(i=0;*(str2+i)!='\0';i++){
             *(str1+i)=*(str2+i);
       }
       *(str1+i)='\0'; */
}

void strncpy(char *str1,char *str2,int n){
       int i=0;
       while(i<n){
        *str1=*str2;
        str1++;
        str2++;
        i++;
       }
       *str1='\0';
}

void strcat(char *str1,char *str2){
       int length=strlen(str1);
       for(int i=0;i<length;i++)
        str1++;
       while(*str2!='\0'){
           *str1=*str2;
            str1++;
            str2++;
       }
       *str1='\0';
}

int strcmp(char *str1,char *str2){
     while(*str1!='\0' || *str2!='\0'){
        if(*str1<*str2)return -1;
        else if(*str1>*str2)return 1;
        str1++;
        str2++;
     }
     if(*str1=='\0' && *str2=='\0')return 0;
     else if(*str1=='\0')return -1;
     else if(*str2=='\0')return 1;
}

int strncmp(char *str1,char *str2,int n){
     int i=0;
      while(i<n){
       if(*str1!=*str2){
        if(*str1<*str2)return -1;
        else return 1;
       }
       str1++;
       str2++;
       i++;
      }
       return 0;
}

char *strchr(char *str,char ch){
       while(*str!='\0'){
           if(*str==ch){
               return str;
           }
           str++;
       }
        return NULL;
}

char *strrchr(char *str1,char ch){
       int index;
       for(int i=0;*(str1+i)!='\0';i++){
        if(*(str1+i)==ch)index=i;
       }
        return str1+index;
}

char *strstr(char *str1,char *str2){
       int flag=0;
       for(int i=0;*(str1+i)!='\0';i++){
            char *ptr=str1+i;
            flag=0;
        for(int j=i;*(str2+j)!='\0';j++){
            if(*ptr==*(str2+j)){
                ptr++;
                continue;
            }
            else {
                flag=1;
                break;
            }
        }
        if(flag==0){
               return str1+i;
        }
       }
       return NULL;
}


char* tok(char* str,char* delim){

    static char* buffer=NULL;

    if(str==NULL){
        str=buffer;
    }




    if(str){

    int i=0;

    while(str[i]!=*delim && str[i]){
        i++;
    }

    if(!str[i]) {
            buffer= NULL;
            return str;

    }

    str[i]='\0';



    buffer= str+i+1;
    }

    return str;


}

void strupr(char *s){
    int i=0;
    for(i=0;*(s+i)!=0;i++){
        if(*(s+i)>=97 && *(s+i)<=122) *(s+i)=*(s+i)-32;
    }
}


void strlwr(char *s){
    int i=0;
    for(i=0;*(s+i)!=0;i++){
        if(*(s+i)>=65 && *(s+i)<=90) *(s+i)=*(s+i)+32;
    }
}


void strrev(char *s){
    char temp;
    int i;
    for(i=0;i<strlen(s)/2;i++){
        temp=*(s+i);
        *(s+i)=*(s+strlen(s)-i-1);
        *(s+strlen(s)-i-1)=temp;
    }
}



int main(){

  //strlen
  char *ptr;
  ptr=(char *)malloc(101*sizeof(char));
  fgets(ptr,101,stdin);
  int len=strlen(ptr);
  printf("strlen()=%d\n",len);

  //strcpy
  char *str1,*str2;
  str1=(char *)malloc(101*sizeof(char));
  str2=(char *)malloc(101*sizeof(char));
  fgets(str2,101,stdin);
  strcpy(str1,str2);
  printf("strcpy()=%s\n",str1);

  //strncpy
  char *strn1,*strn2;
  strn1=(char *)malloc(101*sizeof(char));
  strn2=(char *)malloc(101*sizeof(char));
  fgets(strn2,101,stdin);
  strncpy(strn1,strn2,4);
  printf("strncpy()=%s\n",strn1);

  //strcat
  char *strcat1,*strcat2;
  strcat1=(char *)malloc(202*sizeof(char));
  strcat2=(char *)malloc(101*sizeof(char));
  //fgets(strcat1,101,stdin);
  //fgets(strcat2,101,stdin);
  scanf("%s",strcat1);
  scanf("%s",strcat2);
  getchar();
  strcat(strcat1,strcat2);
  printf("strcat()=%s\n",strcat1);


  //strcmp
  char *str5,*str6;
  str5=(char *)malloc(101*sizeof(char));
  str6=(char *)malloc(101*sizeof(char));
  fgets(str5,101,stdin);
  fgets(str6,101,stdin);
  printf("strcmp()=%d\n",strcmp(str5,str6));


  //strncmp
  char *str3,*str4;
  str3=(char *)malloc(101*sizeof(char));
  str4=(char *)malloc(101*sizeof(char));
  fgets(str3,101,stdin);
  fgets(str4,101,stdin);
  printf("strncmp()=%d\n",strncmp(str3,str4,3));


  //strchr
  char *str;
  char ch;
  str=(char *)malloc(101*sizeof(char));
  fgets(str,101,stdin);
  scanf("%c",&ch);
  getchar();
  printf("strchr()=%s\n",strchr(str,ch));

 //strrchr
  char *str10;
  char ch10;
  str10=(char *)malloc(101*sizeof(char));
  fgets(str10,101,stdin);
  scanf("%c",&ch10);
  getchar();
  printf("strrchr()=%s\n",strrchr(str10,ch10));

  //strstr
  char *str11,*str12;
  str11=(char *)malloc(101*sizeof(char));
  str12=(char *)malloc(101*sizeof(char));
  fgets(str11,101,stdin);
  fgets(str12,101,stdin);
  printf("strstr()=%s\n",strstr(str11,str12));
}
