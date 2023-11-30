/* Type your code here */
#ifndef PLAYLISTNODEH
#define PLAYLISTNODEH

#include <string>
using namespace std;

class PlaylistNode {
	private:
		string uniqueID;
   string songName;
   string artistName;
   int songLength;
   PlaylistNode* nextNodePtr;

	public:
	   PlaylistNode();
	   PlaylistNode(string id, string name, string artist, int length, PlaylistNode* node);
		string GetID();
      string GetSongName();
      string GetArtistName();
      int GetSongLength();
      PlaylistNode* GetNext();
      void InsertAfter(PlaylistNode* nodePtr);
      void SetNext(PlaylistNode* nodePtr);
      void PrintPlaylistNode();
};

#endif
