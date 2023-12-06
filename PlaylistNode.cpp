/* Type your code here */
#include "PlaylistNode.h"

	PlaylistNode::PlaylistNode(){
	   uniqueID = "none";
      songName = "none";
      artistName = "none";
      songLength = 0;
      nextNodePtr = 0;
	   
	}
	  
	PlaylistNode::PlaylistNode(string id, string name, string artist, int length){
	   uniqueID = id;
	   songName = name;
	   artistName = artist;
	   songLength = length;
	   nextNodePtr = NULL;
	}
	
	string PlaylistNode::GetID(){return uniqueID;}
   
   string PlaylistNode::GetSongName(){return songName;}
   
   string PlaylistNode::GetArtistName(){return artistName;}
   
   int PlaylistNode::GetSongLength(){return songLength;}
   
   PlaylistNode* PlaylistNode::GetNext(){return nextNodePtr;}
   
   void PlaylistNode::InsertAfter(PlaylistNode* nodeLoc){
         if(nodeLoc != NULL){
         PlaylistNode* holder = this->nextNodePtr;
         this->nextNodePtr = nodeLoc;
         nodeLoc->InsertAfter(holder);
      }
   }
   
   void PlaylistNode::SetNext(PlaylistNode* nodePtr){
      PlaylistNode* tmpNext;
	   tmpNext = this->nextNodePtr;
	   if(tmpNext == NULL){
	      this->InsertAfter(nodePtr);
	   }else{
	   while(tmpNext->GetNext() != NULL){
	      tmpNext = tmpNext->GetNext();
	      }
	      tmpNext->InsertAfter(nodePtr);
	   }
   }
   
   void PlaylistNode::PrintPlaylistNode(){
      cout << "Unique ID: " << uniqueID << endl;
      cout << "Song Name: " << songName << endl;
      cout << "Artist Name: " << artistName << endl;
      cout << "Song Length (in seconds): " << songLength << endl;
   }
