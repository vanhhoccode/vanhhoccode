#include<stdio.h>
#include<conio.h>
#include<math.h>

main(){
	int n;
	printf("nhap vao so nguyen n:");
	scanf("%d",&n);
	int sum = 0;
	for(int i = 1;i <= n;i++){
		sum += i*(i+1);
	}
	printf("tong la:");
	printf("%d",sum);
}

