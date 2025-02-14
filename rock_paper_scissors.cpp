#include <iostream>
using namespace std;
// Hafize Hale Ertem 04.05.2023 Lab Assingment #2

void setStrength(int);
void setType(int); // protected üyelere ulaşabilmek için tool class içinde
                   // fonksiyon oluşturdum
int getStrength(); // protected üyelere ulaşabilmek için tool class içinde
                   // fonksiyon oluşturdum
// Tool class ını oluşturdum
class Tool {
protected:
  float strength;
  char type;

public:
  void setStrength(int tools_strength) { strength = tools_strength; };
  void setType(int rivals_type) { type = rivals_type; };
  int getStrength() { return strength; };
};
// Tool class tan inherite olan Rock, Paper ve Scissors class larını tanımladım
class Rock : public Tool {
public:
  Rock(int rock_strength) {
    setStrength(rock_strength);
    setType('r');
  }
  // rakiplerin güçlerini karşılaştırarak kazanıp kazanılamayacağını 1 ve 0 ile
  // belirten bool fonksiyonu tanımladım
  bool fight(Tool rival) {
    if (type == 's') {
      strength *= 2;
    } else if (type == 'p') {
      strength /= 2;
    }
    return strength > rival.getStrength();
  }
};

class Paper : public Tool {
public:
  Paper(int paper_strength) {
    setStrength(paper_strength);
    setType('p');
  }
  // rakiplerin güçlerini karşılaştırarak kazanıp kazanılamayacağını 1 ve 0 ile
  // belirten bool fonksiyonu tanımladım
  bool fight(Tool rival) {
    if (type == 's') {
      strength /= 2;
    } else if (type == 'r') {
      strength *= 2;
    }
    return strength > rival.getStrength();
  }
};

class Scissors : public Tool {
public:
  Scissors(int scissors_strength) {
    setStrength(scissors_strength);
    setType('s');
  }
  // rakiplerin güçlerini karşılaştırarak kazanıp kazanılamayacağını 1 ve 0 ile
  // belirten bool fonksiyonu tanımladım
  bool fight(Tool rival) {
    if (type == 'r') {
      strength /= 2;
    } else if (type == 'p') {
      strength *= 2;
    }
    return strength > rival.getStrength();
  }
};

int main() {
  Rock rock(18);
  Paper paper(20);
  Scissors scissors(22);

  cout << "0: fail\n1: win\n";
  cout << "--------------------------" << endl;
  cout << "rock vs paper:" << rock.fight(paper) << endl
       << "paper vs rock:" << paper.fight(rock) << endl;
  cout << "--------------------------" << endl;
  cout << "paper vs scissors:" << paper.fight(scissors) << endl
       << "scissors vs paper:" << scissors.fight(paper) << endl;
  cout << "--------------------------" << endl;
  cout << "scissors vs rock:" << scissors.fight(rock) << endl
       << "rock vs scissors:" << rock.fight(scissors) << endl;

  return 0;
};
