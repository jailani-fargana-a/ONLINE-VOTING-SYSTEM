#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define CANDIDATE1 "JAILANI"
#define CANDIDATE2 "MANSI"
#define CANDIDATE3 "POOJA"
#define CANDIDATE4 "AFIZA"

struct voters{
int id;
int pw;
}s[10];
int count1=0;
int count2=0;
int count3=0;
int count4=0;
int count5=0;
char noofvotes(int option)
{
switch(option)
{
case 1:
{count1++;
printf("\nVOTE CASTED SUCCESSFULLY!!");
break;}
case 2:
{count2++;
printf("\nVOTE CASTED SUCCESSFULLY!!");
break;}
case 3:
{count3++;
printf("\nVOTE CASTED SUCCESSFULLY!!");
break;}
case 4:
{count4++;
printf("\nVOTE CASTED SUCCESSFULLY!!");
break;}
case 5:
{count5++;
printf("\nVOTE CASTED SUCCESSFULLY!!");
break;}
default:
printf("\nINVALID CANDIDATE OPTION\n");
}
}
int VotingStatistics()
{printf("\n\n");
printf("---\tVoting Statistics\t---\n");
printf("Candidates\tVoteCount\n");
printf("%s\t\t%d\n",CANDIDATE1,count1);
printf("%s\t\t%d\n",CANDIDATE2,count2);
printf("%s\t\t%d\n",CANDIDATE3,count3);
printf("%s\t\t%d\n",CANDIDATE4,count4);
printf("%s\t\t%d\n","NOTA",count5);}
int Leading_Candidate()
{
printf("\n---\tLeading Candidate\t---\n");
if(count1>count2&&count1>count3&&count1>count4&&count1>count5)
printf("\t%s\n",CANDIDATE1);
else if (count2>count3 &&count2>count4&&count2>count1&&count2>count5)
printf("\t%s\n",CANDIDATE2);
else if(count3>count4&&count3>count2&&count3>count1&&count3>count5)
printf("\t%s\n",CANDIDATE3);
else if(count4>count1 &&count4>count2&&count4>count3&&count4>count5)
printf("\t%s\n",CANDIDATE4);
else if(count5>count1&&count5>count2 &&count5>count3&&count5>count4)
printf("\n-----\tNo-win situation\t----\n");
else
printf("\n-----\tNo-win situation\t----\n");

}
int main()
{s[0].id=1;
s[0].pw=1;
s[1].id=2;
s[1].pw=2;
s[2].id=3;
s[2].pw=3;
s[3].id=4;
s[3].pw=4;
s[4].id=5;
s[4].pw=5;
s[5].id=6;
s[5].pw=6;
s[6].id=7;
s[6].pw=7;
s[7].id=8;
s[7].pw=8;
s[8].id= 9;
s[8].pw=9;
s[9].id=10;
s[9].pw=10;
FILE *fp1,*fp2;
fp1=fopen("vote.txt","w");
fp2=fopen("votedlist.txt","a+");
int i;
for(i=0;i<10;i++)
{putw(s[i].id,fp1);}
fclose(fp1);
int option;
int check=0,j,t=0;
int votelist[10];
int flag=0;
int checklist=0;
int idno,pass;
int Candidateoption;
t=0;
int count=0;
fseek(fp2,0,SEEK_SET);
while ( (votelist[t++] = getw(fp2)) != EOF ) ;
printf("\n**~~ONLINE VOTING SYSTEM~~**\n");
while(1)
{printf("\n\n 1.CAST YOUR VOTE\n");
printf("2.FIND NO OF VOTES REGISTERED\n");
printf("3.FIND LEADING CANDIDATE\n");
printf("0.EXIT\n");
printf("---\tEnter the Option\t---\n");
scanf("%d",&option);

if(option==1)
{printf("ENTER YOUR ID NO: ");
scanf("%d",&idno);
printf("ENTER YOUR PASSWORD: ");
scanf("%d",&pass);
count=0;

for(i=0;i<10;i++)
{
if(s[i].id==idno)
{check=0;
if(s[i].pw==pass)
{
if(t==0)
{
printf("---***Eligible to vote\n");
printf("PRESS 1: JAILANI\n");
printf("PRESS 2: MANSI\n");
printf("PRESS 3: POOJA\n");
printf("PRESS 4: AFIZA\n");
printf("PRESS 5: NOTA\n");
printf("CAST YOUR VOTE: ");
scanf("%d",&Candidateoption);
if(Candidateoption<6&&Candidateoption>0)
{votelist[t++]=idno;
putw(votelist[t-1], fp2);
}
noofvotes(Candidateoption);
check=1;

}
for(j=0;j<t;j++)
{flag=0;
if(votelist[j]==idno)
flag=1;
if(flag==1)
break;}

if(t-1!=0&&flag==1)
{printf("Already Voted...\n");
check=1;
break;
}
if(t!=0&&flag!=1)
{
printf("-----------hello\n");
printf("---***Eligible to vote\n");
printf("PRESS 1: JAILANI\n");
printf("PRESS 2: MANSI\n");
printf("PRESS 3: POOJA\n");
printf("PRESS 4: AFIZA\n");
printf("PRESS 5: NOTA\n");
printf("CAST YOUR VOTE: ");
scanf("%d",&Candidateoption);
noofvotes(Candidateoption);
if(Candidateoption<6&&Candidateoption>0)
{votelist[t++]=idno;
putw(votelist[t-1], fp2);}
check=1;}}
if(check==0)
{printf("->Wrong Password...\n");
check=2;
break;}}
else
{count++;
if (count==10)
{printf("->Not Available in the Voter's list...\n");
}}
}


}
else if(option==2)
{VotingStatistics();
printf("\n");}
else if(option==3)
{Leading_Candidate();
printf("\n");}
else if(option==0)
{fseek(fp2,0,SEEK_SET);
t=0;
while ( (votelist[t++]= getw(fp2)) != EOF ) {
    printf("%d\n", votelist[t-1]);
  }
    exit(0);}
else
printf("Enter a Valid Option!!!\n");
}

return 0;
}
