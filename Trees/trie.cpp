#include <iostream>
using namespace std;

class TrieNode
{
    public:
        TrieNode * children[26];
        bool terminal;
        char letter;

    TrieNode()
    {
        for(int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        terminal = false;
        letter = '\0';

    }
};


class trie
{

    public:
        TrieNode * root;
        trie()
        {
            root = new TrieNode();
        }

        /** Inserts a word into the trie. */
        void insert(string str)
        {
            TrieNode * curr = root;
            for(int i = 0; i < str.length(); i++)
            {
                int index = str[i] - 'a';
                if(curr->children[index] == NULL)
                {
                    curr->children[index] = new TrieNode();
                    curr->children[index]->letter = str[i];
                }
                curr = curr->children[index];
            }
            curr->terminal = true;
        }

        /** Returns if the word is in the trie. */
        TrieNode *search(string str)
        {
            TrieNode * curr = root;
            for(int i = 0; i < str.length(); i++)
            {
                int index = str[i] - 'a';
                if(curr->children[index] == NULL)
                {
                    return NULL;
                }
                curr = curr->children[index];
            }
            return curr;
        }
        
        /** Print the word with specified prefix in a lexical order. */
        void printLexical (TrieNode * curr, string prefix, string suffix)
        {
            if (curr-> terminal and suffix.size() != 0) 
            {
                cout << prefix+suffix << endl;
            }
        
            for (int i=0; i<26; i++) 
            {
                string temp = suffix;
                if (curr->children[i]) 
                {
                    temp += curr->children[i]->letter;
                    printLexical(curr->children[i], prefix, temp);
                }

            }

        }

    trie(/* args */);
    ~trie();
};

trie::trie(/* args */)
{
}

trie::~trie()
{
}

