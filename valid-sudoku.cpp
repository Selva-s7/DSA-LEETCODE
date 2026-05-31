#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> rowset(9);
        vector<unordered_set<char>> colset(9);
        vector<unordered_set<char>> boxset(9);
        for(int row=0;row<9;row++)
        {
            for(int col=0;col<9;col++)
            {   char ch=board[row][col];
                    if(ch=='.')
                    {
                        continue;
                    }
                    if(rowset[row].find(ch)!=rowset[row].end())
                    {return false;}
                    rowset[row].insert(ch);
                    if(colset[col].find(ch)!=colset[col].end())
                    {return false;}
                    colset[col].insert(ch);
                    int box=(row/3)*3+col/3;
                    if(boxset[box].find(ch)!=boxset[box].end())
                    {
                        return false;
                    }
                    boxset[box].insert(ch);
            }
            
        }
       return true; 
    }
};