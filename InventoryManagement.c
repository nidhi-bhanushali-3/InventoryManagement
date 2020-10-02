#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int order_more(char a[50],int,int);
void rmpdisp();
int check_stock(char mname[50],int material);
void confirm(char mname[50],int material,float mp,double *tp);
void rawpurchase(char name[50],int qty);
void print();
void print1();
int a;
static int flag=0,i=0;
struct rawpurch
{
char rmpname[50];
int rmpqty;
int count;
}raw,r[100];

 struct Stock_room
{
 char stockmat[50];
 int stkqty;
 double price;
 };
 struct Stock_room sr[3];

typedef struct orderdet
{
  char prodname[50];
  int qty;
  int uniquenum;
  double bprice;
  double fprice;
 }order;

 struct jobstr
  {
  char matname[7][50];
  int matqty[7];
  int totmatqty[7];
  float matprice[7];
  order o1;
  }job[100];

void menuprint()
 {
  printf("\n\t\t\t\t\t\t\t\t \b  <<< ORDER >>>   \n\t\t\t\t\t\t\t\t\n");
  printf("\t-->  PRODUCTS THAT CAN BE MANUFACTURED HERE ARE:\n\n");
  printf("\t    1.Product A\n");
  printf("\t    2.Product B \n");
  printf("\t    3.Product C\n");
  printf("\t    4.Product D\n");
  printf("\t    5.Product E\n");
  printf("\t    0.GO BACK TO MAIN MENU\n\n"); //printf("0.EXIT to menu\n");
}

int jobreq()
{
int q,c,num,a;

menuprint();
printf("ENTER THE OPTION NUMBER OF THE PRODUCT YOU WANT TO MANUFACTURE.\n");
scanf("%d",&a);
int j=0;

switch(a)
{
  case 1:
   
  printf("\033[0;0H\033[2J");
  printf("\t   THE MATERIALS REQUIRED TO MANUFACTURE PRODUCT A ARE AS FOLLOWS:\n\n");
  printf("\t\t\tMATERIAL NAME |  UNITS PER PRODUCT\n");
  printf("\t\t\tMaterial1     |       10\n");
  printf("\t\t\tMaterial2     |       20\n");
  printf("\t\t\tMaterial3     |       20\n");
  printf("\nENTER QUANTITY OF PRODUCT TO BE MANUFACTURED\n");
     scanf("%d",&q);
    printf("\033[0;0H\033[2J");
   strcpy(job[i].o1.prodname,"product A");
   job[i].o1.uniquenum=i;
   job[i].o1.qty=q;
   job[i].o1.bprice=800;
   job[i].o1.fprice=(1.18*(1.025*(q*job[i].o1.bprice)));

   strcpy(job[i].matname[j],"Material 1");
   job[i].matprice[j]=10;
   job[i].matqty[j]=10;
   job[i].totmatqty[j]=q*10;
    check_stock(job[i].matname[j],job[i].totmatqty[j]);
   j++;


   strcpy(job[i].matname[j],"Material 2");
   job[i].matprice[j]=15;
   job[i].matqty[j]=20;
   job[i].totmatqty[j]=q*20;
    check_stock(job[i].matname[j],job[i].totmatqty[j]);  
   j++;

   strcpy(job[i].matname[j],"Material 3");
   job[i].matprice[j]=20;
   job[i].matqty[j]=20;
   job[i].totmatqty[j]=q*20;
   check_stock(job[i].matname[j],job[i].totmatqty[j]);
   
   j++;
  flag++;

break;

  case 2:
  
  printf("\033[0;0H\033[2J");
  printf("\t   THE MATERIALS REQUIRED TO MANUFACTURE PRODUCT B ARE AS FOLLOWS:\n\n");
  printf("\t\t\tMATERIAL NAME |  UNITS PER PRODUCT\n");
  printf("\t\t\tMaterial1     |       20\n");
  printf("\t\t\tMaterial2     |       20\n");
  printf("\t\t\tMaterial3     |       30\n");

     printf("\nENTER QUANTITY OF PRODUCT TO BE MANUFACTURED\n");
     scanf("%d",&q);
  printf("\033[0;0H\033[2J");
   strcpy(job[i].o1.prodname,"product B");
   job[i].o1.uniquenum=i;
   job[i].o1.qty=q;
     job[i].o1.bprice=1100;
   job[i].o1.fprice=(1.18*(1.025*(q*job[i].o1.bprice)));

   strcpy(job[i].matname[j],"Material 1");
   job[i].matprice[j]=10;
   job[i].matqty[j]=20;
   job[i].totmatqty[j]=q*20;
   check_stock(job[i].matname[j],job[i].totmatqty[j]);
   
   j++;

   strcpy(job[i].matname[j],"Material 2");
   job[i].matprice[j]=15;
   job[i].matqty[j]=20;
   job[i].totmatqty[j]=q*20;
   check_stock(job[i].matname[j],job[i].totmatqty[j]);
   
   j++;

   strcpy(job[i].matname[j],"Material 3");
   job[i].matprice[j]=20;
   job[i].matqty[j]=30;
   job[i].totmatqty[j]=q*30;
   check_stock(job[i].matname[j],job[i].totmatqty[j]);
    j++;

   flag++;
   break;

  case 3:
  printf("\033[0;0H\033[2J");
  printf("\t   THE MATERIALS REQUIRED TO MANUFACTURE PRODUCT C ARE AS FOLLOWS:\n\n");
  printf("\t\t\tMATERIAL NAME |  UNITS PER PRODUCT\n");
  printf("\t\t\tMaterial1     |       30\n");
  printf("\t\t\tMaterial2     |       20\n");
  printf("\t\t\tMaterial3     |       30\n");
  printf("\nENTER QUANTITY OF PRODUCT TO BE MANUFACTURED\n");
  scanf("%d",&q);
  printf("\033[0;0H\033[2J");
   strcpy(job[i].o1.prodname,"product C");
   job[i].o1.uniquenum=i;
   job[i].o1.qty=q;
   job[i].o1.bprice=1200;
   job[i].o1.fprice=(1.18*(1.025*(q*job[i].o1.bprice)));

   strcpy(job[i].matname[j],"Material 1");
   job[i].matprice[j]=10;
   job[i].matqty[j]=30;
   job[i].totmatqty[j]=q*30;
   check_stock(job[i].matname[j],job[i].totmatqty[j]);  
   j++;

   strcpy(job[i].matname[j],"Material 2");
   job[i].matprice[j]=15;
   job[i].matqty[j]=20;
   job[i].totmatqty[j]=q*20;
   check_stock(job[i].matname[j],job[i].totmatqty[j]);
   j++;

   strcpy(job[i].matname[j],"Material 3");
   job[i].matprice[j]=20;
   job[i].matqty[j]=30;
   job[i].totmatqty[j]=q*30;
   check_stock(job[i].matname[j],job[i].totmatqty[j]);
   
   j++;
   flag++;
  break;

  case 4:
  printf("\033[0;0H\033[2J");
  printf("\t   THE MATERIALS REQUIRED TO MANUFACTURE PRODUCT D ARE AS FOLLOWS:\n\n");
  printf("\t\t\tMATERIAL NAME | UNITS PER PRODUCT\n");
  printf("\t\t\tMaterial1     |        40\n");
  printf("\t\t\tMaterial2     |        20\n");
  printf("\t\t\tMaterial3     |        20\n");

     printf("\nENTER QUANTITY OF PRODUCT TO BE MANUFACTURED\n");
     scanf("%d",&q);
  printf("\033[0;0H\033[2J");
   strcpy(job[i].o1.prodname,"product D");
   job[i].o1.uniquenum=i;
   job[i].o1.qty=q;
     job[i].o1.bprice=1100;
   job[i].o1.fprice=(1.18*(1.025*(q*job[i].o1.bprice)));

   strcpy(job[i].matname[j],"Material 1");
   job[i].matprice[j]=10;
   job[i].matqty[j]=40;
   job[i].totmatqty[j]=q*40;
   check_stock(job[i].matname[j],job[i].totmatqty[j]);
   
   j++;

   strcpy(job[i].matname[j],"Material 2");
   job[i].matprice[j]=15;
   job[i].matqty[j]=20;
   job[i].totmatqty[j]=q*20;
   check_stock(job[i].matname[j],job[i].totmatqty[j]);
   
   j++;

   strcpy(job[i].matname[j],"Material 3");
   job[i].matprice[j]=20;
   job[i].matqty[j]=20;
   job[i].totmatqty[j]=q*20;
   check_stock(job[i].matname[j],job[i].totmatqty[j]);
   j++;

   flag++;
  break;

  case 5:
  printf("\033[0;0H\033[2J");
  printf("\t   THE MATERIALS REQUIRED TO MANUFACTURE PRODUCT E ARE AS FOLLOWS:\n\n");
  printf("\t\t\tMATERIAL NAME | UNITS PER PRODUCT\n");
  printf("\t\t\tMaterial1     |       10\n");
  printf("\t\t\tMaterial2     |       40\n");
  printf("\t\t\tMaterial3     |       20\n");

     printf("\nENTER QUANTITY OF PRODUCT TO BE MANUFACTURED\n");
     scanf("%d",&q);
  printf("\033[0;0H\033[2J");
   strcpy(job[i].o1.prodname,"product E");
   job[i].o1.uniquenum=i;
   job[i].o1.qty=q;
   job[i].o1.bprice=1100;
   job[i].o1.fprice=(1.18*(1.025*(q*job[i].o1.bprice)));

   strcpy(job[i].matname[j],"Material 1");
   job[i].matprice[j]=10;
   job[i].matqty[j]=10;
   job[i].totmatqty[j]=q*10;
   check_stock(job[i].matname[j],job[i].totmatqty[j]);
   j++;

   strcpy(job[i].matname[j],"Material 2");
   job[i].matprice[j]=15;
   job[i].matqty[j]=40;
   job[i].totmatqty[j]=q*40;
   check_stock(job[i].matname[j],job[i].totmatqty[j]); 
   j++;

   strcpy(job[i].matname[j],"Material 3");
   job[i].matprice[j]=20;
   job[i].matqty[j]=20;
   job[i].totmatqty[j]=q*20;
   check_stock(job[i].matname[j],job[i].totmatqty[j]); 
   j++;

   flag++;
   break;
  case 0:
  break;

  default:
  {
  printf(" PLEASE ENTER VALID CHOICE \n");
  }
   break;
}
return a;
}//jobreq() ends

int check_stock(char mname[50],int material)
{  int t,z,extra,num,v;

for(t=0;t<3;t++)
{
  if(strcmp(sr[t].stockmat,mname)==0)
  {
    if(material<sr[t].stkqty)
    {
       printf("%s IS IN STOCK\n", mname);
       printf("\n______________________________________________________________________________________________________________\n\n");
      sr[t].stkqty=sr[t].stkqty-material;
    }
    else if (material==sr[t].stkqty)
    {
     printf(" \n%s IS SUFFICIENT BUT MORE NEEDS TO BE ORDERED FOR FUTURE ORDERS.\n\n",sr[t].stockmat);
     printf("\n_______________________________________________________________________________________________________________\n\n");
     sr[t].stkqty=sr[t].stkqty-material;
     sr[t].stkqty=sr[t].stkqty + 100;
      order_more(sr[t].stockmat,1,100);
    }
    else
    { 
     printf(" %s IS INSUFFICIENT \n\n",sr[t].stockmat);
     printf("SHIPPING PRICE FOR THE INSUFFICIENT MATERIAL WILL BE CHARGED AND THE MATERIAL WILL BE DELIVERED.\n");
     printf("\n_____________________________________________________________________________________________________________\n\n");
     int fina=material-sr[t].stkqty;
     sr[t].stkqty=(0.3*(material-sr[t].stkqty));
     order_more(sr[t].stockmat,2,fina+sr[t].stkqty);
     }
   }
 }//for ends
  return 0; 
}//check_stock ends

int order_more(char a[50],int v,int fin)
{
 if(v==1)
 {
 rawpurchase(a,100);
 }
 else if(v==2)
 {
   rawpurchase(a,fin);
 }
  else{ }
  return 0;
}//order_more ends
 void rawpurchase(char name[50],int qty)
 {
 int c;
 raw.count=raw.count+1;
 c=raw.count;

 strcpy(r[c].rmpname,name);
 r[c].rmpqty=qty;

 }
 void rmpdisp()
 {
 int jp;

   printf("\n\tPURCHASE ORDER\n");
   printf("RAW MATERIAL NAME\t\t\tRAW MATERIAL QUANTITY\n");
   if(raw.count>=0)
   {
    for(jp=0;jp<=raw.count;jp++)
     {
         printf("%s\t\t\t\t\t\t\t%d\t\t\t\t\t\n",r[jp].rmpname,r[jp].rmpqty);
     }
   }   
}

void print()
{
int k=3;
printf("\n\t\tPRODUCT NAME:");
puts(job[i].o1.prodname);

printf("\t\tMATERIAL NAME   QUANTITY   UNITS PER PRODUCT   TOTAL UNITS\n");
for(k=0;k<3;k++)
{
printf("\t\t%s         %d             %d               %d\n",job[i].matname[k],job[i].o1.qty,job[i].matqty[k],job[i].totmatqty[k]);
}
printf("\n");
printf("\t\t\tTotal Price: %f RUPEES\n",job[i].o1.fprice);
printf("\nYOUR ORDER HAS BEEN PLACED SUCCESSFULLY\n");
printf("\t  NOTE: TOTAL PRICE CONTAINS SHIPPING CHARGES OF 2.5%% AND GST\n");
printf("\n");
}

void printstockr()
{
int u,y;
for(u=0;u<3;u++)
{
printf("\n\t\t%s\t",sr[u].stockmat);
 printf("\t%d\t",sr[u].stkqty);
 //printf("%f\n\n",sr[u].price);
}
printf("\n\t\tNOTE: THE STOCK GETS AUTOREFILLED\n\n");
}

void stockreg()
{
static int p=0;
strcpy(sr[p].stockmat,"Material 1");
sr[p].stkqty=100;
sr[p].price=100;
      p++;
strcpy(sr[p].stockmat,"Material 2");
sr[p].stkqty=100;
sr[p].price=100;
        p++;
strcpy(sr[p].stockmat,"Material 3");
sr[p].stkqty=100;
sr[p].price=100;
p++;
}
void print1()
{
int p1=0,k=3;

for(p1=0;p1<flag;p1++)
{
printf("\nPRODUCT NAME:");
puts(job[p1].o1.prodname);
printf("Total Price: %f\n",job[p1].o1.fprice);
printf("MATERIAL NAME   QUANTITY   UNITS PER PRODUCT   TOTAL UNITS\n");
for(k=0;k<3;k++)
{
printf("%s         %d             %d               %d\n",job[p1].matname[k],job[p1].o1.qty,job[p1].matqty[k],job[p1].totmatqty[k]);
}
}
}

int main()
{  int log,ex,b,a1;
  char us[100],pa[100];
   printf("\033[0;0H\033[2J");
   ep:
   printf("\033[0;0H\033[2J");
  stockreg();
  raw.count=-1;
 lp:
 
 printf("\n\t\t\t --------- !!! ENTER LOG IN DETAILS: !!! ---------\t\t\t\t\n");
 printf("\n_________________________________________________________________________\n\n");
  printf("\tENTER USERNAME: ");
  scanf("%s",us);
 printf("\n");
 printf("\tENTER PASSWORD: ");
 scanf("%s",pa);
 printf("\n");
 if(strcmp(us,"user")==0 && strcmp(pa,"pass")==0)
 {
  printf("\033[0;0H\033[2J");
   printf("\n\t\t\t --------- !!! WELCOME TO STOCK MANANGEMENT SYSTEM!!! ---------\t\t\t\t\n");
   printf("\n_________________________________________________________________________\n\n");
   he:   
   printf("\t\t\t\t\t\tENTER: \v\n\t(1) TO PLACE ORDER \n\t(2) TO VIEW CURRENT STOCK\n\t(3) TO VIEW PUCHASED RAW MATERIAL \n\t(4) TO VIEW PREVIOUS AND CURRENT ORDERS\n\t(0) TO LOGOUT\n");
   printf("\n_________________________________________________________________________\n\n");
   scanf("%d",&b);
   printf("\033[0;0H\033[2J");
   switch(b)
  {

case 1:
{
  a1=jobreq();
  if(a1>=1 && a1<=5)
  {
   print();
   i++;
   }
 else if(a1==0)
 {
    printf("\033[0;0H\033[2J");
   goto he;
 }
break;
}

case 2:
printstockr();
break;

case 3:
{
rmpdisp();
break;
}

case 0:
goto lo;
break;

case 4:
{
print1();
break;
  }
default:
printf("Enter valid choice\n");
break;

}
printf("\n");
printf("\nENTER 1 TO GO BACK TO MENU OR ANY OTHER NUMBER TO LOG OUT\n\n");
scanf("%d",&log);
if(log==1)
{
  printf("\033[0;0H\033[2J");
  goto he;
  
}
else 
{
 printf("\033[0;0H\033[2J");
 lo:
printf("\n\t\tYOU HAVE LOGGED OUT SUCCESSFULLY\n");
printf("\n\t\tENTER 1 TO LOG IN AGAIN OR ANY OTHER NUMBER TO CLOSE THE SYSTEM\n\n");
scanf("%d",&ex);
printf("\033[0;0H\033[2J");
if(ex==1)
{
  goto ep;
  }
  else
  {
    printf("\t\t | THE SYSTEM IS CLOSED |\n");
   exit(0);
  }
 }
}
else
 {
  printf("\033[0;0H\033[2J");
  printf("PLEASE ENTER LOG IN DETAILS CORRECTLY\n");
  goto lp;
 }
}
