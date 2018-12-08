#include<stdio.h>
#include<stdlib.h>

typedef struct Student student;
struct Student {
	int score;
	char name[50];
	char code[50];
};

int cmp(const void *a,const void *b)
{
	student *p1=(student*)a,*p2=(student*)b;
	return p1->score - p2->score;
}

int main(void)
{
	int n;

	student *students;
	scanf("%d%*c",&n);
	students = (student*)malloc(sizeof(student)*n);
	for(int i = 0;i < n;i++)
		scanf("%s %s %d%*c",&students[i].name,&students[i].code,&students[i].score);

	qsort(students,n,sizeof(students[0]),cmp);

	printf("%s %s\n",students[n-1].name,students[n-1].code);
	printf("%s %s\n",students[0].name,students[0].code);

	return 0;
}
