#include <bits/stdc++.h>
using namespace std;


/* ----------------------utils--------------------------- */
vector<string> in_stream(){
    vector<string> input;
    string current_line;
    while (std::getline(std::cin, current_line)) {
        input.push_back(current_line);
    }
    return input;
}
/* --------------------------------------------------------- */

bool isSafe(int r,int c,vector<string> &board){
    for(int i=0;i<r;i++){
        if(board[i][c]=='Q'){
            return false;
        }
    }
    for(int i=r-1,j=c-1;i>=0 && j>=0;i--,j--){
        if(board[i][j]=='Q'){
            return false;
        }
    }
    for(int i=r-1,j=c+1;i>=0 && j<8;i--,j++){
        if(board[i][j]=='Q'){
            return false;
        }
    }
    return true;
}
int track(int r, int queens , vector<string> &board){
    if(queens==0){
        return 1;
    }
    if(r==8){
        return 0;
    }
    int ans=0;
    for(int i=0;i<8;i++){
        if(board[r][i]=='*'){
            continue;
        }
        if(isSafe(r,i,board)){
            board[r][i]='Q';
            ans += track(r+1,queens-1,board);
            board[r][i]='.';
        }
    }
    return ans;
}
void solve() {
    vector<string> board = in_stream();
    int queens = 8;
    int r=8,col=8;
    int result = track(0,queens,board);
    cout << result << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}

