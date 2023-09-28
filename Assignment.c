#include <stdio.h>
#include <conio.h>
#include <windows.h>

//Dat ten cho ma mau
#define WHITE 7
#define RED 12
#define GREEN 10

//Ham to mau
void textColor(int color) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
}

//Ham an nut ESC thoat chuong trinh
void thoatChuongTrinh(){
	textColor(GREEN);
	printf("Nhan ESC de quay lai !");
	
	int chon;
	do {
		chon = getch(); //Bat 1 ki tu, tu ban phim
	} while(chon!=27);
}	

void bai1() {
	system("cls");
	textColor(RED);
	printf("Bai 1: Kiem tra so nguyen\n\n");
	
	thoatChuongTrinh();
}

void bai2() {
	system("cls");
	textColor(RED);
	printf("Bai 2: Tim uoc chung va boi chung nho nhat\n\n");
	
	thoatChuongTrinh();	
}

void bai3() {
	system("cls");
	textColor(RED);
	printf("Bai 3: Tinh tien cho quan Karaoke\n\n");
	
	thoatChuongTrinh();
}

void bai4() {
	system("cls");
	textColor(RED);
	printf("Bai 4: Tinh tien dien\n\n");
	
	thoatChuongTrinh();
}

void bai5() {
	system("cls");
	textColor(RED);
	printf("Bai 5: Chuc nang doi tien\n\n");
	
	thoatChuongTrinh();	
}

void bai6() {
	system("cls");
	textColor(RED);
	printf("Bai 6: Tinh lai suat vay ngan hang, vay tra gop\n\n");
	
	thoatChuongTrinh();	
}

void bai7() {
	system("cls");
	textColor(RED);
	printf("Bai 7: Vay tien mua xe\n\n");
	
	thoatChuongTrinh();	
}

void bai8() {
	system("cls");
	textColor(RED);
	printf("Bai 8: Sap xep thong tin sinh vien\n\n");
	
	thoatChuongTrinh();	
}

void bai9() {
	system("cls");
	textColor(RED);
	printf("Bai 9: Game FPOLY-LOTT\n\n");
	
	thoatChuongTrinh();	
}

void bai10() {
	system("cls");
	textColor(RED);
	printf("Bai 10: Tinh toan phan so\n\n");
	
	thoatChuongTrinh();	
}


//Ham de chon chuc nang, dieu khien bang Menu
int menu(char luaChon[][50], int soDong, int chonMenu) {
	int color[soDong];
	int tamThoi = chonMenu;
	int chon, i;
	
	//Gan mau cho cac dong cua Menu 
	for(i=1; i<soDong; i++) {
		color[i] = WHITE; // Gan mau trang cho cac dong khong duoc chon
	}
	color[tamThoi] = RED; // Gan mau vang cho dong dang duoc chon
	
	//Di chuyen len xuong Menu
	while (1) {
		system("cls"); //Xoa man hinh
		color[0] = GREEN; 
		//To mau tung dong trong Menu
		for(i=0; i<soDong;i++) {
			textColor(color[i]);
			printf("%s\n", luaChon[i]);
		}
		
		chon = getch();
		
		//Bat phim len, xuong, enter tu ban phim
		switch(chon) {
			case 72: { // Phim mui ten len (UP)
				if(tamThoi==1) tamThoi = soDong - 1;
				else tamThoi--;
				break;
			}
			case 80: { // Phim mui ten xuong (DOWN)		
				if(tamThoi == soDong-1) tamThoi = 1;
				else tamThoi++;
				break;
			}
			case 13: { // Phim Enter
				return tamThoi; //Tra ve dong duoc chon, thoat ham
				break;
			}
		}
		for(i=1; i<soDong; i++) {
			color[i] = WHITE;
		}
		color[tamThoi] = RED;
	}
	
}

//Bien toan cuc, chuc nang dang chon
int chonMenu = 1;

int main() {
	char luaChon[][50] = {"**********Assignment**********\n","1. Kiem tra so nguyen","2. Tim uoc chung va boi chung nho nhat",
	"3. Tinh tien cho quan Karaoke","4. Tinh tien dien","5. Chuc nang doi tien",
	"6. Tinh lai suat vay ngan hang, vay tra gop","7. Vay tien mua xe","8. Sap xep thong tin sinh vien",
	"9. Game FPOLY-LOTT","10. Tinh toan phan so","11. Thoat"};
	
	int soDong = sizeof(luaChon)/sizeof(luaChon[0]); // Tinh so dong cua Menu

	do {
		chonMenu = menu(luaChon,soDong,chonMenu); // Chon chuc nang
		
		//Truy cap vao tung chuc nang
		switch(chonMenu) {
			case 1: {
				bai1();
				break;
			}
			case 2: {
				bai2();
				break;
			}
			case 3: {
				bai3();
				break;
			}
			case 4: {
				bai4();
				break;
			}
			case 5: {
				bai5();
				break;
			}
			case 6: {
				bai6();
				break;
			}
			case 7: {
				bai7();
				break;
			}
			case 8: {
				bai8();
				break;
			}
			case 9: {
				bai9();
				break;
			}
			case 10: {
				bai10();
				break;
			}
			case 11: {
				textColor(WHITE);
				printf("-----------------------\n");
					textColor(3);
					printf("Ket thuc chuong trinh\n");
					printf("Xin chao va hen gap lai!");
					textColor(WHITE);
				break;
			}
		}
	} while(chonMenu !=11); //
}
			
			
		