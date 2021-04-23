#include <stdio.h>
#include <stdlib.h>
#include <string.h>                 
#include <time.h>                  
#include <unistd.h>
long li;


void Intro()
{
    char button;
    int i;
    printf("\t\t\t\t\t\t\tWELCOME TO QUIZ");
    printf("\n                            -----------------------------------------");
                   fflush(stdout) ; sleep(1.5);
    printf("\n                            PROGRAMMED BY:  SHUBHAM & VAIBHAV FROM S19");
    fflush(stdout); sleep(1.5);
    char name[50];
    printf("\n                            ENTER YOUR NAME: ");
    gets(name);
    int l=strlen(name);
    for(i=0;i<l;i++)
    {
        if(name[i]>='a'&&name[i]<='z')
        {
            name[i]=name[i]-32;
        }
    }
    printf("\n                                 WE ARE HAPPY TO HAVE YOU,");fflush(stdout) ; sleep(1.5);
    printf(" %s",name);fflush(stdout) ; sleep(1);
    printf("\n                           ------------------------------------------\n");
    printf("\t\t\t\tRULES FOR THE QUIZ\n");
    printf("\t\t\t\t1. YOU HAVE TO ENTER CHOICE FROM 'a' TO 'd'.\n");
    printf("\t\t\t\t2. YOU ARE GIVEN A SPECIAL CHARACTER 'h' FOR LIFELINE.\n");
    printf("\t\t\t\t3. YOU CAN CHOOSE ANY LIFELINE UPTO 3 TIMES.\n");
    printf("\t\t\t\t4. IN ONE QUESTION ONLY ONE LIFE LINE IS TO BE USED.\n"); 
    fflush(stdout);sleep(1.5) ; 
    printf("\n\t\t\t\t\tPRESS ENTER TO CONTINUE");
    button=getc(stdin);
    if(button=='\n')
    system("cls");
    else
    {
        printf("Nikal beta pehli fursat me nikal!!");
    exit(0);
    }
}
void Timer()
{
    int  second;
    second=3; 

    while(second>0)
    {
       system("cls");
       printf(" QUIZ STARTING IN: %d \n",second);
       fflush(stdout);
       second--;
      sleep(1);  
    }
    system("cls");
}
void Questions()
{ int  s=0,t; int c=0;
    char op,nex;
    long li,r=0;
    printf("                     Q.1 What is the Capital of Uttar Pradesh?                  \n");
    fflush(stdout) ; sleep(1);
    printf("                         a. Ghaziabad ");fflush(stdout) ; sleep(1);printf("           b. Prayagraj\n");
    fflush(stdout) ; sleep(1);
    
    printf("                         c. Lucknow   ");fflush(stdout) ; sleep(1);printf("           d. Varanasi\n");
    printf("                         Enter your option: ");
    scanf(" %c",&op);
   line73: if(op!='c'&&op!='h')
    {
        li=0;
        goto end;
    }
    else if(op=='h')
    {
        c++;
      line80:  if(c<3)
        {
        printf("\nEnter 1 for 50-50 choice\n");
        printf("Enter 2 for Audience poll\n");
        printf("Enter 3 for Expert advise\n");
        printf("Enter the choice: ");
       scanf("%d",&t);
       switch(t)
       { 
           
           case 1: printf("50-50\n");
           system("cls"); printf("                     Q.1 What is the Capital of Uttar Pradesh?                  \n");
    
                fflush(stdout) ; sleep(1);printf("                                             b. Prayagraj\n");
    fflush(stdout) ; sleep(1);
    printf("                         c. Lucknow\n");fflush(stdout) ; sleep(1);
    printf("                         Enter your option: ");
     scanf(" %c",&op);
     
     goto line73;
     
         break;
         case 2: printf("\nAUDIENCE POLL\n");
          printf("A: ");fflush(stdout) ; sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("===\n"); 
 printf("B: ");fflush(stdout) ; sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("===\n");
 printf("C: ");fflush(stdout) ; sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("===\n");
 printf("D: ");fflush(stdout) ; sleep(1);printf("===\n"); 
   printf("                         Enter your option: "); 
     scanf(" %c",&op);
     goto line73;
         break;
         case 3: printf("ACCORDING TO OUR SKILLED EXPERTS ANS C IS CORRECT\n");
          printf("                         Enter your option: ");
               scanf(" %c",&op);
               goto line73;
         break;
         default : printf("YOU ENTERED A WRONG CHOICE TRY AGAIN.\n");

         goto line80;
       }
       
    }
    
    }
    else
    {
        printf("YOUR ANS IS RIGHT\n");
        li=1000;
        printf("YOU WON--->Rs.");
        printf("%ld",li);
        printf("\nNEXT QUESTION IN 5 SEC...");
        r++;
    }
        while(s<5)
    {   
        
        fflush(stdout);
        s++;  
        sleep(1);  
    }  s=0;
    system("cls");
    printf("                     Q.2 What is the Capital of Madhya Pradesh?\n");
    fflush(stdout) ; sleep(1);
    printf("                         a. Vidisha");fflush(stdout) ; sleep(1);printf("           b. Bhopal\n");
    fflush(stdout) ; sleep(1);
    printf("                         c. Satna");fflush(stdout) ; sleep(1);printf("             d. Shahdol\n");
   line137: printf("                         Enter your option: ");
    scanf(" %c",&op);
    if(op!='b'&&op!='h')
    goto end;
    else if(op=='h')
    {c++;
     line143:   if(c<3)
        {
        printf("\nEnter 1 for 50-50 choice\n");
        printf("Enter 2 for Audience poll\n");
        printf("Enter 3 for Expert advise\n");
       printf("Enter the choice: ");
       scanf("%d",&t);
       switch(t)
       { 
           
           case 1: printf("50-50\n");
           system("cls"); printf("                     Q.2 What is the Capital of Madhya Pradesh?                  \n");
    
                fflush(stdout) ; sleep(1);printf("                                   b. Bhopal\n");
    fflush(stdout) ; sleep(1);
    printf("                         c. Satna\n");fflush(stdout) ; sleep(1);
    
     goto line137;
     break;
     case 2:  printf("\nAUDIENCE POLL\n");
          printf("A: ");fflush(stdout) ; sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("===\n");
 printf("B: ");fflush(stdout) ; sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("===\n");
 printf("C: ");fflush(stdout) ; sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("===\n");
 printf("D: ");fflush(stdout) ; sleep(1);printf("===\n");
   goto line137;
   break;
   case 3: printf("OUR EXPERTS SAYS THAT OPTION B IS CORRECT.\n");
   goto line137;
   break;
   default: printf("YOU HAVE ENTERED A WRONG OPTION TRY AGAIN.\n");
   goto line143;
        }
        
    }
    }
    else
    {
        printf("YOUR ANS IS RIGHT\n");
        li=4000;
        printf("YOU WON--->Rs.");
        printf("%d",li);
        printf("\nNEXT QUESTION IN 5 SEC...");
        r++;
    }
        while(s<5)
    {   
        
        fflush(stdout);
        s++;  
        sleep(1);  
    }  s=0;
    system("cls");
    printf("                       Q.3 Which among these is a middle level language?\n");fflush(stdout) ; sleep(1);
    printf("                          a. Pearl");fflush(stdout) ; sleep(1);printf("\t\tb. SQL\n");
    fflush(stdout) ; sleep(1);
    printf("                          c. Ruby");fflush(stdout) ; sleep(1); printf("\t\td. C\n");

   line202: printf("                     Enter your option: ");
    scanf(" %c",&op);
    if(op!='d'&&op!='h')
    goto end;



    else if(op=='h')
    {c++;
    line205:  if(c<=3)
        {
        printf("\nEnter 1 for 50-50 choice\n");
        printf("Enter 2 for Audience poll\n");
        printf("Enter 3 for Expert advise\n");
       printf("Enter the choice: ");
       scanf("%d",&t);
       switch(t)
       { 
           
           case 1: printf("50-50\n");
           system("cls"); printf("                     Q.3 WHICH among these is a middle level language?                  \n");
    
                fflush(stdout) ; sleep(1);printf("\t\t\t\t\t\t\tb. SQL\n");
    fflush(stdout) ; sleep(1);
    printf("\t\t\t\t\t\t\td. C\n");fflush(stdout) ; sleep(1);
    goto line202; 
     break;
     case 2:  printf("\nAUDIENCE POLL\n");
          printf("A: ");fflush(stdout) ; sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("===\n");
 printf("B: ");fflush(stdout) ; sleep(1);printf("===\n");
 printf("C: ");fflush(stdout) ; sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("===\n");
 printf("D: ");fflush(stdout) ; sleep(1);printf("==="); fflush(stdout) ;  sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("==="); fflush(stdout);sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("===\n");
   goto line202;
   break;
   case 3: printf("OUR EXPERTS SAYS THAT OPTION D IS CORRECT.\n");   
   goto line202;
   break;
   default: printf("YOU HAVE ENTERED A WRONG OPTION TRY AGAIN.\n");
   goto line205;
        }
       
    }
    }
    else
    {
    printf("YOUR ANS IS RIGHT\n");
    li=10000;
    printf("YOU WON--->Rs.");
    printf("%d",li);
    printf("\nNEXT QUESTION IN 5 SEC...");
    r++;
    }
    
        while(s<5)
    {   
        
        fflush(stdout);
        s++;  
        sleep(1);  
    }  s=0;
    system("cls");
    printf("                     Q.4 India got Independence on which year?\n");fflush(stdout) ; sleep(1);
    printf("                         a. 1937");fflush(stdout) ; sleep(1);printf("             b. 1950\n");
    fflush(stdout) ; sleep(1);
    printf("                         c. 1957");fflush(stdout) ; sleep(1);printf("             d. 1947\n");
   line269: printf("                         Enter your option: ");
    scanf(" %c",&op);
    if(op!='d'&&op!='h')
    goto end;
    else if (op=='h'&&c>=3)
    {
        printf("YOU HAVE EXHAUSTED THE LIMIT OF YOUR LIFELINE\n");
        goto line269;

    }
    else if(op=='h')
    {c++;
    line275:  if(c<=3)
        {
        printf("\nEnter 1 for 50-50 choice\n");
        printf("Enter 2 for Audience poll\n");
        printf("Enter 3 for Expert advise\n");
       printf("Enter the choice: ");
       scanf("%d",&t);
       switch(t)
       { 
           
           case 1: printf("50-50\n");
           system("cls"); printf("                     Q.4 India got Independence in which year?                  \n");
    
                fflush(stdout) ; sleep(1);printf("\t\t\t\t\t\t\tb.1950\n");
    fflush(stdout) ; sleep(1);
    printf("\t\t\t\t\t\t\td.1947\n");fflush(stdout) ; sleep(1);
      goto line269;
     break;
     case 2:  printf("\nAUDIENCE POLL\n");
          printf("A: ");fflush(stdout) ; sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("===\n");
 printf("B: ");fflush(stdout) ; sleep(1);printf("===\n");
 printf("C: ");fflush(stdout) ; sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("===\n");
 printf("D: ");fflush(stdout) ; sleep(1);printf("==="); fflush(stdout) ;  sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("===");fflush(stdout); sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("===\n");
   goto line269;
   break;
   case 3: printf("OUR EXPERTS SAYS THAT OPTION D IS CORRECT.\n");
   goto line269;
   break;
   default: printf("YOU HAVE ENTERED A WRONG OPTION TRY AGAIN.\n");
   goto line275;
        }
       
    }
    }
    else
    {
    printf("YOUR ANS IS RIGHT\n");
    li=15000;
    printf("YOU WON--->Rs.");
    printf("%d",li);
    printf("\nNEXT QUESTION IN 5 SEC...");
    r++;
    }
        while(s<5)
    {   
        
        fflush(stdout);
        s++;  
        sleep(1);  
    }  s=0;
    system("cls");
    printf("                     Q.5 What is the most popular sport in India?\n");fflush(stdout) ; sleep(1);
    fflush(stdout) ; sleep(1);
    printf("                         a. Hockey");fflush(stdout) ; sleep(1);printf("             b. Volleyball\n");
    fflush(stdout) ; sleep(1);
    printf("                         c. Cricket");fflush(stdout) ; sleep(1);printf("            d. Football\n");
    line344: printf("                         Enter your option: ");
    scanf(" %c",&op);
    if(op!='c'&&op!='h')
    goto end;
        else if (op=='h'&&c>=3)
    {
        printf("YOU HAVE EXHAUSTED THE LIMIT OF YOUR LIFELINE\n");
        goto line344;

    }
    else if(op=='h')
    {c++;
    line356:  if(c<=3)
        {
        printf("\nEnter 1 for 50-50 choice\n");
        printf("Enter 2 for Audience poll\n");
        printf("Enter 3 for Expert advise\n");
        printf("Enter the choice: ");
       scanf("%d",&t);
       switch(t)
       { 
           
           case 1: printf("50-50\n");
           system("cls"); printf("                     Q.5 What is the most popular sport in India?                  \n");
    
                fflush(stdout) ; sleep(1);printf("\t\t\t\t\ta. Hockey\n");
    fflush(stdout) ; sleep(1);
    printf("\t\t\t\t\tc. Cricket\n");fflush(stdout) ; sleep(1);
      goto line344;
     break;
     case 2:  printf("\nAUDIENCE POLL\n");
          printf("A: ");fflush(stdout) ; sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("===\n");
          printf("B: ");fflush(stdout) ; sleep(1);printf("===\n");
          printf("C: ");fflush(stdout) ; sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("===");fflush(stdout); sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("===");fflush(stdout); sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("===\n");
          printf("D: ");fflush(stdout) ; sleep(1);printf("===\n"); 
   goto line344;
   break;
   case 3: printf("OUR EXPERTS SAYS THAT OPTION C IS CORRECT.\n");
   goto line344;
   break;
   default: printf("YOU HAVE ENTERED A WRONG OPTION TRY AGAIN.\n");
   goto line356;
    }    
    }
    }
    else
    {
    printf("YOUR ANS IS RIGHT\n");
    li=30000;
    printf("YOU WON--->Rs.");
    printf("%d",li);
    printf("\nNEXT QUESTION IN 5 SEC...");
    r++;
    }
        while(s<5)
    {   
        
        fflush(stdout);
        s++;  
        sleep(1);  
    }  s=0;
    system("cls");
    printf("                           Q.6 What is the function of SHIFT+DEL key?\n");fflush(stdout) ; sleep(1);
    printf("                     a. Deleting             ");fflush(stdout) ; sleep(1);printf("        b. Permanent Deletion\n");
    fflush(stdout) ; sleep(1);
    printf("                     c. Moving to recycle bin");fflush(stdout) ; sleep(1);printf("        d. Deletes a Paragraph\n");
    line410 : printf("                     Enter your option: ");
    scanf(" %c",&op);
    if(op!='b'&&op!='h')
    goto end;
    else if (op=='h'&&c>=3)
    {
        printf("YOU HAVE EXHAUSTED THE LIMIT OF YOUR LIFELINE\n");
        goto line410;
    }
    else if(op=='h')
    {c++;
    line416:  if(c<=3)
        {
        printf("\nEnter 1 for 50-50 choice\n");
        printf("Enter 2 for Audience poll\n");
        printf("Enter 3 for Expert advise\n");
        printf("Enter the choice: ");
       scanf("%d",&t);
       switch(t)
       { 
           
           case 1: printf("50-50\n");
           system("cls"); printf("                     Q.6 What is the function is SHIFT+DEL key?\n");
    
                fflush(stdout) ; sleep(1);printf("\t\t\t\t\t\t\tb. Permanent Deletion\n");
    fflush(stdout) ; sleep(1);
    printf("\t\t\t\t\t\t\td. Deletes a paragraph\n");fflush(stdout) ; sleep(1);
      goto line410;
     break;
     case 2:  printf("\nAUDIENCE POLL\n");
          printf("A: ");fflush(stdout) ; sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("===\n");
          printf("B: ");fflush(stdout) ; sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("===");fflush(stdout); sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("===\n");
          printf("C: ");fflush(stdout) ; sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("===\n");
          printf("D: ");fflush(stdout) ; sleep(1);printf("===\n");
   goto line410;
   break;
   case 3: printf("OUR EXPERTS SAYS THAT OPTION B IS CORRECT.\n");
   goto line410;
   break;
   default: printf("YOU HAVE ENTERED A WRONG OPTION TRY AGAIN.\n");
   goto line416;
    }    
    }
    }
    else
    {
    printf("YOUR ANS IS RIGHT\n");
    li=100000;
    printf("YOU WON--->Rs.");
    printf("%d",li);
    printf("\nNEXT QUESTION IN 5 SEC...");
    r++;
    }
        while(s<5)
    {   
        
        fflush(stdout);
        s++;  
        sleep(1);  
    }  s=0;
    system("cls");
    printf("                  Q.7 How many nibbles does 1 kilobytes carry?\n");fflush(stdout) ; sleep(1);
    printf("                     a. 1024");fflush(stdout) ; sleep(1);printf("                     b. 1000\n");
    fflush(stdout) ; sleep(1);
    printf("                     c. 2048");fflush(stdout) ; sleep(1);printf("                     d. 2000\n");
   line470: printf("                     Enter your option: ");
    scanf(" %c",&op);
    if(op!='c'&&op!='h')
    goto end;
    else if (op=='h'&&c>=3)
    {
        printf("YOU HAVE EXHAUSTED THE LIMIT OF YOUR LIFELINE\n");
        goto line470;
    }
    else if(op=='h')
    {c++;
    line476:  if(c<=3)
        {
        printf("\nEnter 1 for 50-50 choice\n");
        printf("Enter 2 for Audience poll\n");
        printf("Enter 3 for Expert advise\n");
        printf("Enter the choice: ");
       scanf("%d",&t);
       switch(t)
       { 
           
           case 1: printf("50-50\n");
           system("cls"); printf("                     Q.7 How many nibbles does 1 Kilobytes carry?\n");
    
                fflush(stdout) ; sleep(1);printf("\t\t\t\t\tc. 2048");
    fflush(stdout) ; sleep(1);
    printf("\t\td. 2000\n");fflush(stdout) ; sleep(1);
      goto line470;
     break;
     case 2:  printf("\nAUDIENCE POLL\n");
          printf("A: ");fflush(stdout) ; sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("===\n");
          printf("B: ");fflush(stdout) ; sleep(1);printf("===\n");
          printf("C: ");fflush(stdout) ; sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("==="); fflush(stdout);sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("===\n");
          printf("D: ");fflush(stdout) ; sleep(1);printf("=====\n"); 
   goto line470;
   break;
   case 3: printf("OUR EXPERTS SAYS THAT OPTION C IS CORRECT.\n");
   goto line470;
   break;
   default: printf("YOU HAVE ENTERED A WRONG OPTION TRY AGAIN.\n");
   goto line476;
    }    
    }
    }
    else
    {
    printf("YOUR ANS IS RIGHT\n");
    li=320000;
    printf("YOU WON--->Rs.");
    printf("%d",li);
    printf("\nNEXT QUESTION IN 5 SEC...");
    r++;
    }
        while(s<5)
    {   
        
        fflush(stdout);
        s++;  
        sleep(1);  
    }  s=0;
    system("cls");
    printf("                 Q.8 Which among the following triangles is real in programming?\n");fflush(stdout) ; sleep(1);
    
    printf("                     a. Pasteur's Triangle");fflush(stdout) ; sleep(1);printf("                  b. Lebinitz's Triangle\n");
    fflush(stdout) ; sleep(1);
    printf("                     c. Raman's Triangle");fflush(stdout) ; sleep(1);printf("                    d. Pascal's Triangle\n");
    line531: printf("                     Enter your option: ");
    scanf(" %c",&op);
    if(op!='d'&&op!='h')
    goto end;
    else if (op=='h'&&c>=3)
    {
        printf("YOU HAVE EXHAUSTED THE LIMIT OF YOUR LIFELINE\n");
        goto line531;
    }
        else if(op=='h')
    {c++;
    line537:  if(c<=3)
        {
        printf("\nEnter 1 for 50-50 choice\n");
        printf("Enter 2 for Audience poll\n");
        printf("Enter 3 for Expert advise\n");
        printf("Enter the choice: ");
       scanf("%d",&t);
       switch(t)
       { 
           
           case 1: printf("50-50\n");
           system("cls"); printf("                     Q.8 Which among the following triangle is real in programming?\n");
    
                fflush(stdout) ; sleep(1);printf("\t\t\t\t\ta. Pasteur's Triangle\n");
    fflush(stdout) ; sleep(1);
    printf("\t\t\t\t\t\t\td. Pascal's Triangle\n");fflush(stdout) ; sleep(1);
      goto line531;
     break;
     case 2:  printf("\nAUDIENCE POLL\n");
          printf("A: ");fflush(stdout) ; sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("===\n");
          printf("B: ");fflush(stdout) ; sleep(1);printf("===\n");
          printf("C: ");fflush(stdout) ; sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("===\n");
          printf("D: ");fflush(stdout) ; sleep(1);printf("===="); fflush(stdout) ;sleep(1); printf("===");fflush(stdout) ; sleep(1);printf("==="); fflush(stdout);sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("===\n");
   goto line531;
   break;
   case 3: printf("OUR EXPERTS SAYS THAT OPTION D IS CORRECT.\n");
   goto line531;
   break;
   default: printf("YOU HAVE ENTERED A WRONG OPTION TRY AGAIN.\n");
   goto line537;
    }    
    }
    }
    else
    {
    printf("YOUR ANS IS RIGHT\n");
    li=960000;
    printf("YOU WON--->Rs.");
    printf("%d",li);
    printf("\nNEXT QUESTION IN 5 SEC...");
    r++;
    }
        while(s<5)
    {   
        
        fflush(stdout);
        s++;  
        sleep(1);  
    }  s=0;
    system("cls");
    printf("                                 Q.9 What is the Full Form of FPS?\n");fflush(stdout) ; sleep(1);
    printf("                     a. Frames per second");fflush(stdout) ; sleep(1);printf("                  b. First Person Shooter\n");
    fflush(stdout) ; sleep(1);
    printf("                     c. both a & b");fflush(stdout) ; sleep(1);printf("                         d. Frames per Shooter\n");
    line591: printf("                     Enter your option: ");
    scanf(" %c",&op);
    if(op!='c'&&op!='h')
    goto end;
    else if (op=='h'&&c>=3)
    {
        printf("YOU HAVE EXHAUSTED THE LIMIT OF YOUR LIFELINE\n");
        goto line591;
    }
            else if(op=='h')
    {c++;
    line597:  if(c<=3)
        {
        printf("\nEnter 1 for 50-50 choice\n");
        printf("Enter 2 for Audience poll\n");
        printf("Enter 3 for Expert advise\n");
        printf("Enter the choice: ");
       scanf("%d",&t);
       switch(t)
       { 
           
           case 1: printf("50-50\n");
           system("cls"); printf("                     Q.9 What is the full form of FPS?\n");
    
                fflush(stdout) ; sleep(1);printf("\t\t\t\t\ta. Frames per second\n");
    fflush(stdout) ; sleep(1);
    printf("\t\t\t\t\tc. both a & b\n");fflush(stdout) ; sleep(1);
      goto line591;
     break;
     case 2:  printf("\nAUDIENCE POLL\n");
          printf("A: ");fflush(stdout) ; sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("===\n");
          printf("B: ");fflush(stdout) ; sleep(1);printf("===\n");
          printf("C: ");fflush(stdout) ; sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("==="); fflush(stdout);sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("===\n");
          printf("D: ");fflush(stdout) ; sleep(1);printf("===="); fflush(stdout) ;sleep(1); printf("===\n");
   goto line591;
   break;
   case 3: printf("OUR EXPERTS SAYS THAT OPTION C IS CORRECT.\n");
   goto line591;
   break;
   default: printf("YOU HAVE ENTERED A WRONG OPTION TRY AGAIN.\n");
   goto line597;
    }    
    }
    }
    else
    {
    printf("YOUR ANS IS RIGHT\n");
    li=5000000;
    printf("YOU WON--->Rs.");
    printf("%d",li);
    printf("\nNEXT QUESTION IN 5 SEC...");
    r++;
    }
        while(s<5)
    {   
        
        fflush(stdout);
        s++;  
        sleep(1);  
    }  s=0;
    system("cls"); 
    printf("                                 Q.10 On which concept JAVA language is based on?\n");fflush(stdout) ; sleep(1);
    printf("                                 a. Inheritance");fflush(stdout) ; sleep(1);printf("                  b. OOP\n");
    fflush(stdout) ; sleep(1);
    printf("                                 c. Polymorphism");fflush(stdout) ; sleep(1);printf("                 d. Encapsulation\n");
  line651:  printf("                     Enter your option: ");
    scanf(" %c",&op);
    if(op!='b'&&op!='h')
    goto end;
    else if (op=='h'&&c>=3)
    {
        printf("YOU HAVE EXHAUSTED THE LIMIT OF YOUR LIFELINE\n");
        goto line651;
    }
            else if(op=='h')
    {c++;
    line657:  if(c<=3)
        {
        printf("\nEnter 1 for 50-50 choice\n");
        printf("Enter 2 for Audience poll\n");
        printf("Enter 3 for Expert advise\n");
        printf("Enter the choice: ");
       scanf("%d",&t);
       switch(t)
       { 
           
           case 1: printf("50-50\n");
           system("cls"); printf("                     Q.10 On which concept JAVA language is based on?\n");
    
                fflush(stdout) ; sleep(1);printf("\t\t\t\t\t\t\tb. OOP\n");
    fflush(stdout) ; sleep(1);
    printf("\t\t\t\t\tc. Polymorphism\n");fflush(stdout) ; sleep(1);
      goto line651;
     break;
     case 2:  printf("\nAUDIENCE POLL\n");
          printf("A: ");fflush(stdout) ; sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("===\n");fflush(stdout) ;
          printf("B: ");fflush(stdout) ; sleep(1);printf("==="); fflush(stdout) ;sleep(1); printf("===");fflush(stdout) ; sleep(1);printf("==="); fflush(stdout);sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("===\n");
          printf("C: ");fflush(stdout) ; sleep(1);printf("===");fflush(stdout) ; sleep(1);printf("===\n");
          printf("D: ");fflush(stdout) ; sleep(1);printf("====\n");
   goto line651;
   break;
   case 3: printf("OUR EXPERTS SAYS THAT OPTION B IS CORRECT.\n");
   goto line651;
   break;
   default: printf("YOU HAVE ENTERED A WRONG OPTION TRY AGAIN.\n");
   goto line657;
    }    
    }
    }
    else
    {
    printf("YOUR ANS IS RIGHT\n");
    li=10000000;
    printf("YOU WON--->Rs.");
    printf("%d",li);
    }
        while(s<4)
    {   
        
        fflush(stdout);
        s++;  
        sleep(1);  
    }  s=0;
    system("cls");       
    end : if(r<10)
    {
          printf("YOU PLAYED TILL Q.%d\n",r);
          printf("YOU WON Rs.%ld\n",li);
          fflush(stdout); sleep(1.5);
          printf("AFTER INCLUDING GST YOUR FINAL AMOUNT IS: Rs.%ld\n\n\n\n",li/2);
    }
          else
          {
          printf("ADBHUT!!! BADHAI HO...AAP JEET GAYE HAI 1 CRORE RUPAY\n");
           fflush(stdout); sleep(1.5);
          printf("AFTER INCLUDING GST YOUR FINAL AMOUNT IS: Rs.8000000\n\n\n\n");
          }
}
void Outro()
{ 
    char str[] = "THANKYOU";
    int s=0,i;
    
     printf("                                       ");
    for(i=0;i<strlen(str);i++)
    {
        printf("  %c",str[i]);
        fflush(stdout);
        sleep(1);
    }
}
void main()
{
    
    Intro();
    Timer();
    Questions();
    Outro();
}