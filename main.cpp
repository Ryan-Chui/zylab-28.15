#include <iostream>
#include "PlaylistNode.h"

using namespace std;

void PrintMenu(const string playlistTitle) {
   /* Type your code here */
   cout << playlistTitle << " PLAYLIST MENU" << endl;
   cout << "a - Add song" << endl;
   cout << "d - Remove song" << endl;
   cout << "c - Change position of song" << endl;
   cout << "s - Output songs by specific artist" << endl;
   cout << "t - Output total time of playlist (in seconds)" << endl;
   cout << "o - Output full playlist" << endl;
   cout << "q - Quit" << endl << endl;

   cout << "Choose an option:" << endl;
   
}

PlaylistNode* ExecuteMenu(char option, string playlistTitle, PlaylistNode* headNode) {
   /* Type your code here */
switch (option) {
  case 'a':
    
    break;
  case 'd':
    break;
  case 'c':
    break;
  case 's':
    break;
  case 't':
    break;
  case 'o':
    break;
  case 'q':
    break;
   
}

int main() {
   /* Type your code here */
   PlaylistNode* headNode;
   string playlistName;
   char input;
   
   cout << "Enter playlist's title:" << endl;
   cin >> playlistName;
   PrintMenu(playlistName);
   cin >> input;
   while(input != q)
   ExcecuteMenu(input, playlistName, headNode);
   PrintMenue(playlistName);
   cin >> input;
   return 0;
}

