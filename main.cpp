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
   string id;
    string name;
    string artist;
    int length;
    PlaylistNode* currNode;
switch (option) {
  case 'a':
    
    cout << "enter song id" << endl;
    getline(cin, id);
    cout << "enter song name" << endl;
    getline(cin, name);
    cout << "enter song artist" << endl;
    getline(cin , artist);
    PlaylistNode* currNode;
    currNode = new PlaylistNode(id, name, artist, length, null);
    headNode->InsertAfter(currNode);
    break;
    
    
  case 'd':
      
  cout << "enter id for the song you want to delete" << endl;
  cin >> id;
   currNode = HeadNode;
  while(currNode->GetNext() != NULL){
      if(currNode->GetNext.GetID() == id){
           currNode.setNext(currNode->GetNextPtr().GetNextPtr());
           break;
      }
      currNode = currNode->GetNext();
  }
    break;
  case 'c':
  
    break;
  case 's':
  cin >> artist;
  currNode = HeadNode;
  while (currNode->GetNext != NULL){
     if(currNode->GetArtistName() == artist){
         currNode->PrintPlaylistNode();
     }
     currNode = currNode->GetNext();
     
  }
    break;
  case 't':
  int seconds = 0;
  currNode = HeadNode;
  while (currNode->getNext() != null){
        seconds+= currNode->SongLength();
        currNode = currNode->GetNext();
  }
    break;
  case 'o':
  currNode = HeadNode->GetNext();
  while(currNode != NULL){
      currNode->PrintPlaylistNode();
      currNode = currNode->GetNext();
  }
    break;
  case 'q':
    break;
   case default:
   cout << "please choose an option";
   cin >> input;
   ExcecuteMenu(input, playlistName, headNode);
   
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
