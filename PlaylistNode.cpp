/* Type your code here */
#include "PlaylistNode.h"

	PlaylistNode::PlaylistNode(){
	   uniqueID = "none";
      songName = "none";
      artistName = "none";
      songLength = 0;
      nextNodePtr = 0;
	   
	}
	  
	PlaylistNode::PlaylistNode(string id, string name, string artist, int length, PlaylistNode* node){
	   uniqueID = id;
	   songName = name;
	   songArtist = artist;
	   songLength = length;
	   nextNodePtr->node;
	}
	
	string GetID(){return uniqueID;}
   
   string GetSongName(){return songName;}
   
   string GetArtistName(){return songArtist;}
   
   int GetSongLength(){return songLength;}
   
   PlaylistNode* GetNext(){return nextNodePtr;}
   
   void InsertAfter(PlaylistNode* nodeLoc){
         if(nodeLoc != NULL){
         IntNode* holder = this->nextNodeRef;
         this->nextNodeRef = nodeLoc;
         nodeLoc->InsertAfter(holder);
      }
   }
   
   void SetNext(PlaylistNode* nodePtr){
      PlaylistNode* tmpNext;
	   tmpNext = this->nextNodePtr;
	   this->nextNodeRef = nodePtr;
	   nodePtr->nextNodeRef = tmpNext;
      
   }
   
   void PrintPlaylistNode(){
      cout << "Unique ID: " << uniqueID << endl;
      cout << "Song Name: " << songName << endl;
      cout << "Artist Name: " << artistName << endl;
      cout << "Song Length (in seconds): " << songLength << endl;
   }
