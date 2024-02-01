#include <iostream>
#include <vector>
#include "Header.h"

using namespace std;

void amongUs(int ligne, int colonne)
{
    vector<vector<int>> amongUs = {
        {0,0,1,1,1,1,1,1,0,0},
        {0,1,0,0,0,0,1,1,1,0},
        {0,1,0,0,0,0,1,1,1,0},
        {0,0,1,1,1,1,1,1,1,0},
        {0,0,1,1,1,1,1,1,1,0},
        {0,0,1,1,1,1,1,1,0,0},
        {0,0,1,1,0,0,1,1,0,0}
    };

    for (int i = 0; i < ligne; i++)
    {
        for (int j = 0; j < colonne; j++)
        {
            if (amongUs[i][j] == 0)
            {
                cout << " ";
            }
            else
            {
                cout << "x";
            }
        }
        cout << endl;
    }
}
	