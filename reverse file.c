#include<stdio.h>
#include<errno.h>

long count_characters(FILE*);

void main(int argc,char *argv[])
(
     int i ;
     long cnt;
     char ch,ch1;
     FILE *fp1,*fp2;
     
     if(fp1=fopen(argv[1],"r"))
     {
        printf("My Captain\n");
        fp2=fopen(argv[2],"w");
        cnt=count_characters(fp1);
        fseek(fp1,-1L,2);
        printf("Output\n",ftell(fp1));
        
        while(cnt)
        {
           ch=fgetc(fp1);
           fputc(cch,fp2);
           fseek(fp1,-2L,1);
           cnt--;
        }
     
        printf("\n Reverse order")
      }
      
      else
      {
        perror("Error occured\n");
      }
      fclose(fp1);
      fclose(fp2);
      
  }
  long count_charactera(FILE *f)
  
  {
     fseek(f,-1L,2);
     long last_pos =ftell(f);
     last_pos++;
     return last_pos++;
}     
