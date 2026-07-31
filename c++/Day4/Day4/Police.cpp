//#include <iostream>
//#include<cstring>
//using namespace std;
//
//class Gun {
//private:
//	int bullet;
//public:
//	Gun(int bnum) : bullet(bnum)  {}
//	void Shot() {
//		if (bullet < 0) {
//			cout << "총알이 없습니다." << endl;
//			return;
//		}
//
//		cout << "BANG! 도둑을 잡았습니다!" << endl;
//		bullet--;
//	}
//};
//
//class Police : public Gun {
//private:
//	int handcuffs;		// 소유한 수갑의 수
//public:
//	Police(int bnum, int bcuff)
//		: Gun(bnum), handcuffs(bcuff) {}
//	void PutHandcuff()
//	{
//		cout << "SNAP!" << endl;
//		handcuffs--;
//	}
//};
//
//int main() {
//	Police pman(2, 3);		// 총알 2 수갑 3
//	pman.Shot();
//	pman.Shot();
//	pman.Shot();
//	pman.Shot();
//	pman.Shot();
//	pman.PutHandcuff();
//
//	return 0;
//}