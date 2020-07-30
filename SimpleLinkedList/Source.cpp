#include <iostream>

//Bài toán: Nhập danh sách liên kết đơn các số nguyên. Tìm giá trị lớn nhất trong danh sách
//=================KHAI BÁO CẤU TRÚC DANH SÁCH LIÊN KẾT ĐƠN CÁC SỐ NGUYÊN ====================
//Khai báo cấu trúc 
struct node {
	int data; //dữ liệu chứa trong 1 cái node
	struct node* pNext; // con trỏ dùng để liên kết giữa các node với nhau
};

typedef struct node NODE; //thay thế struct node thành 1 tên duy nhất là NODE
//Nếu dùng C biên dịch thì phải khai báo dòng này. Còn bên C++ thì bỏ dòng này nó vẫn hiểu

//Khai báo cấu trúc của danh sách liên kết đơn
struct list {
	NODE* pHead; //node đầu danh sách
	NODE* pTail; //node cuối danh sách
};

typedef struct list LIST;

//===================KHỞI TẠO CẤU TRÚC DANH SÁCH LIÊN KẾT ĐƠN VỚI CÁC SỐ NGUYÊN ==================
void initList(LIST& list) {
	//cho 2 node trỏ đến null - vì danh sách liên kết chưa có phần tử
	list.pHead = NULL;
	list.pTail = NULL;
}

// Hàm khởi tạo 1 node
NODE* createNode(int data) {
	NODE* node = new NODE(); //Cấp phát vùng nhớ cho node 
	if (node == NULL) {
		std::cout << "Không đủ vùng nhớ để cấp phát";
		return NULL;
	}
	node->data = data;
	node->pNext = NULL; //đầu tiên khai báo node đó chưa có liên kết tới node nào hết => con trỏ sẽ trỏ đến NULL
	return node;
}

//

int main() {
	std::cout << "Hello world";
}