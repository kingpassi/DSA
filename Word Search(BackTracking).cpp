/******************************************************************************
79. Word Search

Given an m x n grid of characters board and a string word, return true if 
word exists in the grid.
The word can be constructed from letters of sequentially adjacent cells, 
where adjacent cells are horizontally or vertically neighboring. 
The same letter cell may not be used more than once.

Example 1:
Input: board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]],
word = "ABCCED"

Output: true
*******************************************************************************/
class Solution {
  bool  search(vector<vector<char>>& board,int i,int j,int idx,string word){
        if(idx==word.length()-1) return true;
        board[i][j]-=65;
        
        if(i>0 && board[i-1][j]==word[idx+1] && search(board,i-1,j,idx+1,word)) return true;
       if(j>0 && board[i][j-1]==word[idx+1] && search(board,i,j-1,idx+1,word)) return true;
        
      if(i<board.size()-1 && board[i+1][j]==word[idx+1] && search(board,i+1,j,idx+1,word)) return true;
        if(j<board[0].size()-1 && board[i][j+1]==word[idx+1] && search(board,i,j+1,idx+1,word)) return true;
        
        
        board[i][j]+=65;
        return false;
        }
public:
    bool exist(vector<vector<char>>& board, string word) {
        int r=board.size();
        int c=board[0].size();
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(board[i][j]==word[0] && search(board,i,j,0,word)) return true;
                
            }
        }
        return false;
    }
};