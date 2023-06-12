bool check(vector<vector<char>>& board , int x, int y , char k) {

    for (int i = 0 ; i < 9 ; i++){
        if (( board[i][y] == k  && i != x) || ( board[x][i] == k && i != y))
            return false ;
    }
    int a = x / 3 ;
    int b = y / 3 ;
    for (int i = 3*a ; i <= 3*a + 2 ; i++ ){
        for (int j = 3*b ; j <= 3*b + 2 ; j++) {
            if ( board[i][j] == k &&(i != x || j != y)) return false ;
        }
    }
    return true ;

}
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0 ; i < 9 ; i ++) {
            for (int j = 0 ; j < 9 ; j ++){
                if (board[i][j] != '.'){
                    if ( check(board,i,j,board[i][j]) == false) {
                        return false ;
                    }
                }
            }
        }
        return true ;
    }
};
