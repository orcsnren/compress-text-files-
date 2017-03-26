#ifndef INT_LINKED_LIST
#define INT_LINKED_LIST
#include <string.h>
#include <iostream>
#include <stdio.h>
using namespace std;
class WordSLLNode {
public:
    WordSLLNode() {
        next = 0;
    }
    WordSLLNode(string el, WordSLLNode *ptr = 0) {
        info = el; id=-1; count=1 ; size=el.size(); next = ptr;
    }
    string info;
    int count;
    int id;
    int size;
    WordSLLNode *next;
};

class WordSLList {
public:
    WordSLList() {
        head = tail = 0;
    }
    ~WordSLList();
    int isEmpty() {
        return head == 0;
    }
    void n_count(int);
    void compressor();
    void add_id();
    void decompressor();
    void dictionary();
    void addToList(string);
    void  deleteWord(string); 
    bool isInList(string) const;
    void printAll() const;
    void LowerCase(char[]);
private:
    WordSLLNode *head, *tail;
};

#endif
