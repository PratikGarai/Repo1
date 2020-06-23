#include <iostream>
#include <utility> // pairs
#include <vector>

using namespace std;
const int MAXN = 1005;

vector < pair<int, int> > G[MAXN][MAXN];
char mat[MAXN][MAXN];
bool vis[MAXN][MAXN];
int row, col;
int dx[5] = {-1, 0, 1, 0};						
int dy[5] = {0, -1,  0, 1};

vector < char > path; 

char get_char(int to_r, int to_c, int fro_r, int fro_c){ // GIven its a valid transition
if (to_r > fro_r) return 'D';
	if (to_c > fro_c) return 'R';
	if (to_r < fro_r) return 'U';	
	return 'L';
}

//(i + 1, j) <- (i, j) then its D    to_r > fro_r return ‘D’
//     j + 1) <- j    then its R      to_c > fro_c return ‘R’
//(i - 1, j) <- (i, j) then its U	 to_r < fro_r return ‘U’
//(i, j - 1) <- (i, j) then its L 	 return ‘L’

bool dfs(int i, int j) // ith row and jth column
{	
	if(mat[i][j] == 'B') return true;
	vis[i][j] = true;
	for(auto edge: G[i][j]){
	int nr = edge.first, nc = edge.second;
	if(vis[nr][nc]) continue;
	if( dfs(nr, nc) )
{// true
		path.emplace_back(get_char(nr, nc, i, j));
		return true; // exit dfs
}
}
return false;
}


void print(){
	for(auto element : path) 
printf("%c", element);
	printf("\n");
}


int main(){
scanf("%d %d", &row, &col);
for(int i = 0; i < row; i++) 
scanf("%s", mat[i]);





for(int r = 0; r < row; r++){
		for(int c = 0; c < col; c++){ 
			for(int i= 0; i < 4;i++){
int nr = r + dy[i], nc = c + dx[i];
if(nr >= row || nr < 0 || nc >= col|| nc < 0) continue; /*out of bounds check*/
G[r][c].emplace_back({nr, nc});
G[nr][nc].emplace_back({c, r});
}
}	
}



for(int i = 0; i < row; i++)// initializing 
	for(int j = 0; j < col; j++)
		if(mat[r][c] == '#')
			vis[r][c] = true;
		else
			vis[r][c] = false;
bool found = false;
for(int i = 0; i < row && !found; i++) 
for(int j =0; j < col && !found; j++) 
if(mat[i][j] == 'A'){
pos_r  = i; pos_c = j;
found = true;
}

if(dfs(pos_r, pos_c)){
	printf("YES\n%ld\n", path.size() );
	print();
	return 0;
}
printf("No\n");
return 0;
}

