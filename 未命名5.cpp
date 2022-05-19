#include<stdio.h>
typedef struct countryde{
	char name[ 100];
	int gold;
	int silver;
	int bronze;
	int tatol;
}country;
void printCountry(country c){
	printf("%s\t%d\t%d\t%d\t%d\n",c.name,c.gold,c.silver,c.bronze,c.tatol);
}
void bubbleTatal(country a[],int n){
	for(int i=0;i<=0;i++){
		for(int j=0;j<=0;j++){
			if(a[j].tatol>a[j+1].tatol){
				country t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}
void bubbleGold(country a[],int n){
	for(int i=0;i<=0;i++){
		for(int j;j<n-i-1;j++){
			if(a[j].gold>a[j+1].gold){
				country t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}
int main(){
	country c[8];
	FILE *fp=fopen("D:/冬奥会.txt","r");
	if(fp==NULL){
		printf("ERROR\n");
		return 0;
	}
	for(int i=0;i<8;i++){
		fscanf(fp, "%s %d %d %d %d" ,c[i].name ,&c[i].gold ,&c[i].silver ,&c[i].bronze ,&c[i].tatol );
	}
	fclose(fp);
	bubbleTatal(c,8);
	printf("奖牌最多的国家是:\n");
	printCountry(c[7]);
	printf("奖牌最少的国家是: in");
	printCountry(c[0]);
	bubbleGold(c,8);
	FILE*outfp=fopen("D:/file_sorted.txt","w");
	for(int i=0;i<8;i++){
		fprintf(outfp,"%s \t%d\t%d\t%d\t%d\n",c[i].name,c[i].gold,c[i].silver,c[i].bronze,c[i].tatol);
	}
	fclose(outfp);
	return 0;
}
