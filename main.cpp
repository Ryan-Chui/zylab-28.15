//Ryan Chui decided to do this solo
//https://github.com/Ryan-Chui/zylab-28.15/
#include <iostream>
#include "PlaylistNode.h"
#include <limits>

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

   
}

void ExecuteMenu(char option, string playlistTitle, PlaylistNode*& headNode) {
   /* Type your code here */
   string id;
    string name;
    string artist;
    int length;
    PlaylistNode* currNode;
    int seconds;
    int counter;
switch (option) {
  case 'a':
    cout << "ADD SONG"  << endl;




    cout << "Enter song's unique ID:" << endl;
    getline(cin, id);
    cout << "Enter song's name:" << endl;
    getline(cin, name);
    cout << "Enter artist's name:" << endl;
    getline(cin , artist);
    cout << "Enter song's length (in seconds):" << endl << endl;
    cin >> length;
    PlaylistNode* tempNode;
    tempNode = new PlaylistNode(id, name, artist, length);
    currNode = headNode;
    headNode->SetNext(tempNode);
    break;
    
    
    
  case 'd':
      
  cout << "REMOVE SONG" << endl;
   cout << "Enter song's unique ID:" << endl;
  cin >> id;
   currNode = headNode;
  while(currNode->GetNext() != NULL){
      if(currNode->GetNext()->GetID() == id){
            cout << "\"" << currNode->GetNext()->GetSongName() << "\" removed." << endl << endl;
           currNode->SetNext(currNode->GetNext()->GetNext());
           break;
      }
      currNode = currNode->GetNext();
  }
    break;
  case 'c':
  
    break;
  case 's':
  getline(cin, artist);
  cout << "OUTPUT SONGS BY SPECIFIC ARTIST\nEnter artist's name:" << endl << endl;
  currNode = headNode->GetNext();
  counter = 1;
  while(currNode != NULL){
     if(currNode->GetArtistName() == artist){
     cout << counter << "." << endl;
      currNode->PrintPlaylistNode();
        cout << endl;
     }
      currNode = currNode->GetNext();
      counter++;
      

  }
    break;
  case 't':
  seconds = 0;
  currNode = headNode;
  while (currNode != NULL){
        seconds+= currNode->GetSongLength();
        currNode = currNode->GetNext();
  }
   cout << "OUTPUT TOTAL TIME OF PLAYLIST (IN SECONDS)" << endl;
   cout << "Total time: " << seconds <<" seconds" << endl << endl;

    break;
  case 'o':
  cout << playlistTitle << " - OUTPUT FULL PLAYLIST" << endl;
  if(headNode == NULL){
   cout << "Playlist is empty" << endl << endl;
   break;
  }
  if(headNode->GetNext() == NULL){
   cout << "Playlist is empty" << endl << endl;
   break;
  }
  currNode = headNode->GetNext();
  counter = 1;
  while(currNode != NULL){
     cout << counter << "." << endl;
      currNode->PrintPlaylistNode();
      currNode = currNode->GetNext();
      counter++;
      
  cout << endl;
  }
    break;
  case 'q':
    break;
   
}
}

int main() {
   /* Type your code here */
   PlaylistNode* headNode = new PlaylistNode();
   headNode->SetNext(NULL);
   string playlistName;
   char input;
   
   cout << "Enter playlist's title:" << endl << endl;
   getline(cin,playlistName);
   
   cin >> input;
   cin.ignore(numeric_limits<streamsize>::max(),'\n');
   //cout << "input " << input << endl;
   do {
   ExecuteMenu(input, playlistName, headNode);
   PrintMenu(playlistName);
   cout << "Choose an option:" << endl;
   
   cin >> input;
   cin.ignore(numeric_limits<streamsize>::max(),'\n');
   //cout << "input " << input << endl;
   }while(input != 'q');
   return 0;
}
