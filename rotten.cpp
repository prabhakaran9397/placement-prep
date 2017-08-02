#include <stdio.h>
#include <queue>
using namespace std;

int oranges[101][101];

struct Pair {
    int x, y;
    Pair(int i, int j){ x = i; y = j; }
};

typedef struct Pair Pair;

int time_to_rot(int r, int c)
{
    queue<Pair> rotten_oranges;
    int time_taken = -1;

    for(int i=0; i<r; ++i)
        for(int j=0; j<c; ++j)
            if(oranges[i][j] == 2)
                rotten_oranges.push(Pair(i, j));

    while(!rotten_oranges.empty()) {
        rotten_oranges.push(Pair(-1, -1));
        ++time_taken;
        while(1) {
            Pair curr = rotten_oranges.front();
            rotten_oranges.pop();
            if(curr.x == -1 && curr.y == -1) break;
            if(curr.x+1<r && oranges[curr.x+1][curr.y]==1) {
                rotten_oranges.push(Pair(curr.x+1, curr.y));
                oranges[curr.x+1][curr.y]=2;
            }
            if(curr.x-1>-1 && oranges[curr.x-1][curr.y]==1) {
                rotten_oranges.push(Pair(curr.x-1, curr.y));
                oranges[curr.x-1][curr.y]=2;
            }
            if(curr.y+1<c && oranges[curr.x][curr.y+1]==1) {
                rotten_oranges.push(Pair(curr.x, curr.y+1));
                oranges[curr.x][curr.y+1]=2;
            }
            if(curr.y-1>-1 && oranges[curr.x][curr.y-1]==1) {
                rotten_oranges.push(Pair(curr.x, curr.y-1));
                oranges[curr.x][curr.y-1]=2;
            }
        }
    }

    for(int i=0; i<r; ++i)
        for(int j=0; j<c; ++j)
            if(oranges[i][j] == 1)
                return -1;        

    return time_taken;
}

int main(void)
{
    int t;
    scanf("%d", &t);

    while(t--) {
        int r, c;
        scanf("%d%d", &r, &c);

        for(int i=0; i<r; ++i)
            for(int j=0; j<c; ++j)
                scanf("%d", &oranges[i][j]);

        printf("%d\n", time_to_rot(r, c));
    }
}
