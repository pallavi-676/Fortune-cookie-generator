#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

  srand(time(0));

  string fortunes[] = {
    "Don't pursue happiness – create it.",
    "All things are difficult before they are easy.",
    "The early bird gets the worm, but the second mouse gets the cheese.",
    "Someone in your life needs a letter from you.",
    "The fortune you search for is in another cookie.",
    "Help! I'm being held prisoner in a Chinese bakery!",
    "Your creativity will lead you to great success.",
    "A pleasant surprise is waiting for you.",
    "Now is the time to try something new.",
    "Your hard work will soon pay off.",
    "Adventure can be real happiness.",
    "Believe in yourself and others will too.",
    "Success is a journey, not a destination.",
    "You will discover a hidden talent.",
    "Good news will come to you by mail.",
    "Error 404: Fortune not found.",
    "You will find WiFi when you need it most.",
    "Your code will compile on the first try (maybe).",
    "You will step on a Lego today. Be careful.",
    "A bug-free program is in your future... just kidding.",
    "The best way to predict the future is to create it.",
    "Small steps today lead to big results tomorrow.",
    "Growth begins where comfort ends.",
    "Your mindset shapes your reality.",
    "Someone appreciates you more than you know."
  };

  int size = 25;

  int index = rand() % size;

  cout << "🥠 " << fortunes[index] << endl;

  cout << "\nLucky numbers: ";
  for (int i = 0; i < 6; i++) {
    cout << rand() % 51 << " ";
  }

  cout << endl;

  return 0;
}