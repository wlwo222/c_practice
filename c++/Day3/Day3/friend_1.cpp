//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class Girl;
//
//class Boy {
//private:
//	int height;
//	friend class Girl;
//
//public:
//	Boy(int len): height(len) {}
//	void ShowYourFriendInfo(Girl& frn);
//};
//
//class Girl {
//private:
//	char phNum[20];
//	friend class Boy;
//public:
//	Girl(const char* num) {
//		strcpy_s(phNum, num);
//	}
//	void ShowYourFriendInfo(Boy& frn);
//
//};
//
//void Boy::ShowYourFriendInfo(Girl& frn) {
//	cout << "Called by boy" << " Her phone number : " << frn.phNum << endl;
//}
//
//void Girl::ShowYourFriendInfo(Boy& frn) {
//	cout << "Called by girl" << " His height : " << frn.height << endl;
//}
//
//int main() {
//	Boy boy(170);
//	Girl girl("010-1234-5678");
//
//	boy.ShowYourFriendInfo(girl);
//	girl.ShowYourFriendInfo(boy);
//	return 0;
//}