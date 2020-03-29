//Structure - 1 Students details

#include <stdio.h>
#include <string.h>
struct Student
{
  char name[30];
  char department[20];
  int yearOfStudy;
  float cgpa;
};

int main()
{
  struct Student S1[1000];
  struct Student t;
  int i,j,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%s",S1[i].name);
    scanf("%s",S1[i].department);
    scanf("%d",&S1[i].yearOfStudy);
    scanf("%f",&S1[i].cgpa);
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(strcmp(S1[i].name,S1[j].name)>0)
      {
        t=S1[i];
        S1[i]=S1[j];
        S1[j]=t;
      }
    }
  }
  
        
  for(i=0;i<n;i++)
  {
    printf("Name:%s\n",S1[i].name);
    printf("Department:%s\n",S1[i].department);
    printf("Year of study:%d\n",S1[i].yearOfStudy);
    printf("CGPA:%.1f\n",S1[i].cgpa);
  }
  return 0;
}