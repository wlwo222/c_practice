//#include <iostream>
//#include <cstring	>
//using namespace std;
//
//class Computer {
//private:
//	char owner[50];
//public:
//	Computer(const char* name) {
//		printf("Computer 생성자 호출 ! \n");
//		strcpy_s(owner, name);
//	}
//	void Calculate() {
//		cout << "요청 내용을 계산합니다." << endl;
//	}
//};
//
//class NotebookComp : public Computer {
//private:
//	int battary;
//public:
//	NotebookComp(const char* name, int initChag)
//		: Computer(name), battary(initChag) {
//		printf("NotebookComp 생성자 호출 ! \n");
//	}
//	void Charging() { 
//		battary += 5; 
//		cout << "충전한 배터리는 " << battary << "입니다." << endl;
//	}
//	void UseBattary() { 
//		battary--; 
//		cout << "남은 배터리는 " << battary << "입니다." << endl;
//	}
//	int GetBattaryInfo() { return battary; }
//	void MovingCal() {
//		if (GetBattaryInfo() < 1) {
//			cout << "충전이 필요합니다." << endl;
//			return;
//		}
//		cout << "이동하면서";
//		Calculate();
//		UseBattary();
//	}
//};
//
//class TabletNotebook : public NotebookComp {
//private:
//	char regstPenModel[50];
//public:
//	TabletNotebook(const char* name, int initChag, const char* pen)
//		: NotebookComp(name, initChag)
//	{
//		printf("TabletNotebook 생성자 호출 ! \n");
//		strcpy_s(regstPenModel, pen);
//	}
//
//	void Write(const char* penInfo) {
//		if (GetBattaryInfo() < 1) {
//			cout << "충전이 필요합니다. " << endl;
//			return;
//		}
//
//		// strcmp 문자열 비교 함수, 같으면 0
//		if (strcmp(regstPenModel, penInfo) != 0) {
//			cout << "등록된 펜이 아닙니다.";
//			return;
//		}
//
//		cout << "필기 내용을 처리합니다. " << endl;
//		UseBattary();
//	}
//};
//
//int main() {
//	NotebookComp nc("원천지재", 5);
//	nc.MovingCal();
//
//	TabletNotebook tc("지성호", 5, "Galaxy Pen");
//	tc.Write("Galaxy Pen");
//
//	tc.Charging();
//
//	for (int i = 0; i < 10; i++) {
//		tc.Write("Galaxy Pen");
//	}
//
//	return 0;
//}