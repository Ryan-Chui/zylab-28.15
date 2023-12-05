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

void ExecuteMenu(char option, string playlistTitle, PlaylistNode* headNode) {
   /* Type your code here */
   string id;
    string name;
    string artist;
    int length;
    PlaylistNode* currNode;
    int seconds;
    char input;
switch (option) {
  case 'a':
    cout << "ADD SONG"  << endl;




    cout << "Enter song's unique ID:" << endl;
    getline(cin, id);
    cout << "Enter song's name:" << endl;
    getline(cin, name);
    cout << "Enter artist's name:" << endl;
    getline(cin , artist);
    cout << "Enter song's length (in seconds):" << endl;
    cin >> length;
    PlaylistNode* currNode;
    currNode = new PlaylistNode(id, name, artist, length);
    headNode->InsertAfter(currNode);
    break;
    
    
  case 'd':
      
  cout << "enter id for the song you want to delete" << endl;
  cin >> id;
   currNode = headNode;
  while(currNode->GetNext() != NULL){
      if(currNode->GetNext()->GetID() == id){
           currNode->SetNext(currNode->GetNext()->GetNext());
           break;
      }
      currNode = currNode->GetNext();
  }
    break;
  case 'c':
  
    break;
  case 's':
  cin >> artist;
  currNode = headNode;
  while (currNode->GetNext() != NULL){
     if(currNode->GetArtistName() == artist){
         currNode->PrintPlaylistNode();
     }
     currNode = currNode->GetNext();
     
  }
    break;
  case 't':
  seconds = 0;
  currNode = headNode;
  while (currNode->GetNext() != NULL){
        seconds+= currNode->GetSongLength();
        currNode = currNode->GetNext();
  }
    break;
  case 'o':
  currNode = headNode->GetNext();
  if(headNode->GetNext() == NULL){
   cout << playlistTitle <<" - OUTPUT FULL PLAYLIST Playlist is empty" << endl;
   break;
  }
  while(currNode != NULL){
      currNode->PrintPlaylistNode();
      currNode = currNode->GetNext();
  }
    break;
  case 'q':
    break;
    
   default:
   cin >> input;
   ExecuteMenu(input, playlistTitle, headNode);
   
}
}

int main() {
   /* Type your code here */
   PlaylistNode* headNode = new PlaylistNode();
   string playlistName;
   char input;
   
   cout << "Enter playlist's title:" << endl << endl;
   getline(cin,playlistName);
   cin >> input;
   ExecuteMenu(input, playlistName, headNode);
   PrintMenu(playlistName);
   while(input != 'q'){
   ExecuteMenu(input, playlistName, headNode);
   PrintMenu(playlistName);
   input = 'q';
   cin >> input;
   }
   return 0;
}
