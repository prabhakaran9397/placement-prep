#include <bits/stdc++.h>
using namespace std;

struct ladder
{
	int s, e;
	int d;
};
struct snake
{
	int s, e;
	int d;
};
typedef struct ladder ladder;
typedef struct snake snake;

int main(void) 
{
	int n_snake, n_ladder;
	int t, i, j;
	int curr_pos, high_pos;
	bool lad_avail;
	while(t--)
	{
		cin >> n_ladder;
		ladder l[n_ladder];
		for(i=0; i<n_ladder; i++)
		{
			cin >> l[i].s >> l[i].e;
			l[i].d = l[i].e - l[i]s;
		}
		cin >> n_snake;
		snake s[n_snake];
		for(i=0; i<n_snake; i++)
		{
			cin >> s[i].s >> s[i].e;
			s[i].d = s[i].s - s[i].e;
		}
		//Sort based on ladder starting
		for(i=0; i<n_ladder; i++)
		{
			for(j=0; j<n_ladder-i-1; j++)
			{
				if(l[j].s < l[j+1].s)
				{
					ladder temp = l[j];
					l[j] = l[j+1];
					l[j+1] = temp;
				}
			}
		}
		//Sort based on snake starting
		for(i=0; i<n_snake; i++)
		{
			for(j=0; j<n_snake-i-1; j++)
			{
				if(s[j].s < s[j+1].s)
				{
					snake temp = s[j];
					s[j] = s[j+1];
					s[j+1] = temp;
				}
			}
		}
		curr_pos = 1;
		i = j = 0;
		lad_avail = n_ladder > 0 ? 1 : 0;
		sna_avail = n_snake > 0 ? 1 : 0;
		high_pos = 0;
		while()
		{
			if(lad_avail && curr_pos+6 == l[i])
			{
				high.pos = curr_pos + 6 + l[i].d;
			}
			if(lad_avail && curr_pos+5 == l[i])
			{
				if(high.pos < curr_pos + 5 + l[i].d)
					high.pos = curr_pos + 5 + l[i].d;
			}
			if(lad_avail && curr_pos+4 == l[i])
			{

			}
			if(lad_avail && curr_pos+3 == l[i])
			{

			}
			if(lad_avail && curr_pos+2 == l[i])
			{

			}
			if(lad_avail && curr_pos+1 == l[i])
			{

			}            
		}
	}
return 0;
}

