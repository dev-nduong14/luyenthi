#include <stdio.h>
#include <math.h>
int main(){
	int x;
	int n;
	printf("Nhap so luong phan tu: ");scanf("%d",&n);
	printf("Nhap gia tri can tim: ");scanf("%d",&x);
	int a[100];
	for(int i = 0; i < n;i++){
		scanf("%d",&a[i]);
	}
	int dem = 0;
	for(int i = 0; i < n;i++){
		if(a[i] == x){
			++dem;
		}
	}
	int v;
	int flag = 0;
	for(int i = 0 ; i< n;i++){
		if(x == a[i]){
			flag = 1;
		}
		
	}
	if(flag == 1){
		printf("Gia tri can tim la %d xuat hien %d",x,dem);
	}
	else{
		printf("Khong co gia tri can tim");
	}
     
	
}
