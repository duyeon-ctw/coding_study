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


// myfirst.cpp -- 메시지를 출력한다.

#include <iostream>
#define ZERO 0
#include <climits>

int main(){
  using namespace std;
  short Dohee = SHRT_MAX;
  unsigned short Insuk = SHRT_MAX;

  cout << "도희의 계좌에는 " << Dohee << "원이 들어있고, ";
  cout << "인숙이의 계좌에는 " << Insuk << "원이 들어있다." << endl;
  cout << "각각의 계좌에 1원씩 입금한다." << endl << "이제 ";
  Dohee = Dohee + 1;
  Insuk = Insuk + 1;
  cout << "도희의 잔고는 " << Dohee << "원이 되었고, ";
  cout << "인숙이의 잔고는 " << Insuk << "원이 되었다." << endl;
  cout << "이럴 수가! 도희가 나 몰래 대출을 했나?" << endl;
  Dohee = ZERO;
  Insuk = ZERO;
  cout << "도희의 잔고는 " << Dohee << "원이 들어 있고, ";
  cout << "인숙이의 잔고는 " << Insuk << "원이 들어 있다." << endl;
  cout << "각각의 계좌에서 1원씩 인출한다." << endl << "이제 ";
  Dohee = Dohee - 1;
  Insuk = Insuk - 1;
  cout << "도희의 잔고는 " << Dohee << "원이 되었고, ";
  cout << "인숙이의 잔고는 " << Insuk << "원이 되었다." << endl;
  cout << "이럴 수가! 인숙이가 복권에 당첨되었나?" << endl;
  
  return 0;
}

