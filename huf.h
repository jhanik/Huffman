#ifndef HUF_H_INCLUDED
#define HUF_H_INCLUDED
#include<iostream>
using namespace std;
class Huffmantree
{
public:

    /*struct MinHeapNode
{
    char data;                // One of the input characters
    unsigned freq;             // Frequency of the character
    MinHeapNode *left, *right; // Left and right child

    MinHeapNode(char data, unsigned freq)
    {
        left = right = NULL;
        this->data = data;
        this->freq = freq;
    }
};
struct compare
{
    bool operator()(MinHeapNode* l, MinHeapNode* r)
    {
        return (l->freq > r->freq);
    }
};*/
huffmantree();
void printcodes(struct MinHeapNode* root, string str);
void HuffmanCodes(char data[], int freq[], int size);

};



#endif // HUF_H_INCLUDED
