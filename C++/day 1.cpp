// myfirst.cpp -- 메시지를 출력한다.

#include <iostream>

int main(){
  using namespace std;
  cout << "C++의 세계로 오십시오.";
  cout << endl;
  cout << "후회하지 않으실 겁니다!" << endl;
  return 0;
}



#include <iostream>

int main(){
  using namespace std;

  int carrots;

  carrots = 25;

  cout << "나는 당근을 ";
  cout << carrots;
  cout << "개 가지고 있다.";
  cout << endl;
  carrots = carrots - 1;
  cout << "아삭아삭, 이제 당근은 " << carrots << "개 남아 있다." << endl;
  return 0;
}



#include <iostream>

int main(){
  using namespace std;

  int carrots;

  cout << "당근을 몇 개나 가지고 있니?" << endl;
  cin >> carrots;
  cout << "여기 두 개 더. ";
  carrots = carrots + 2;
  cout << "이제 당근은 모두 " << carrots << "개야." << endl;
  
  return 0;
}
