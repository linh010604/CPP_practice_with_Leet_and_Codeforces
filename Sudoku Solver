// using backtracking with O(9^(NN)) complexity

bool check(vector<vector<char>>& board , int x, int y , char k) {

    for (int i = 0 ; i < 9 ; i++){
        if (board[i][y] == k || board[x][i] == k )
            return false ;
    }
    int a = x / 3 ;
    int b = y / 3 ;
    for (int i = 3*a ; i <= 3*a + 2 ; i++ ){
        for (int j = 3*b ; j <= 3*b + 2 ; j++) {
            if ( board[i][j] == k ) return false ;
        }
    }
    return true ;

}

bool solve (vector<vector<char>>& board , int x , int y) {
    if ( y == 9 ) {
        if (x == 8){
            return true ;
        }
        else if (solve(board , x + 1, 0)) return true ;
    }
    else if  ( board[x][y] == '.' ){
        for (int i = 49 ; i <= 57 ; i++) {
            if ( check(board, x, y, char(i)) ) {
                board[x][y] = char (i) ;
                if (solve(board , x , y+1) == true) return true ;
                board[x][y] = '.' ;
            }
        }
        return false ;
    }
    else if (solve(board, x, y + 1)) return true;

    return false ;

}

class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        for (int i = 0 ; i < 9 ; i++) {
            for (int j = 0 ; j < 9 ; j++){
                if (board[i][j] == '.'){
                    solve(board,i,j) ;
                    return ;
                }
            }
        }
    }
};
