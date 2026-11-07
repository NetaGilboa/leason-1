#ifndef LINKEDLISTH
#define LINKEDLISTH

typedef struct Node
{
    unsigned num;
    Node* next;
} Node;

FrameNode* addFrame(FrameNode* head);
void removeFrame(FrameNode** head, FrameNode** tail);
void moveFrame(FrameNode** head, FrameNode** tail);
void changeFrameDuration(FrameNode* head);
void changeDuration(FrameNode* head);
void printFrames(FrameNode* head);
void showGif(FrameNode* head);
int getPosition(FrameNode* head, char* name);
FrameNode* getTail(FrameNode* head);

#endif