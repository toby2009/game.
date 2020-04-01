#include <bits/stdc++.h>
using namespace std ;
int n , m , a[510][510] , lj[260][260] , c = 0 ;
int main ()
{
    memset( lj , -1 , sizeof(lj) ) ;
    cin >> n >> m ;
    for( int i = 0 ; i < n ; i ++ )
    {
        for( int j = 0 ; j < m ; j ++ )
        {
            cin >> a[i][j] ;
            c = max( c , a[i][j] ) ;
            if( i > 0 )
            {
                lj[a[i - 1][j]][a[i][j]] = lj[a[i][j]][a[i - 1][j]] = 1 ;
            }
            if( j > 0 )
            {
                lj[a[i][j - 1]][a[i][j]] = lj[a[i][j]][a[i][j - 1]] = 1 ;
            }
        }
    }
    for( int i = 1 ; i <= c ; i ++ )
    {
        lj[i][i] = 0 ;
    }
    for( int k = 1 ; k <= c ; k ++ )
    {
        for( int i = 1 ; i <= c ; i ++ )
        {
            for( int j = 1 ; j <= c ; j ++ )
            {
                if( lj[i][k] == -1 || lj[j][k] == -1 ) continue ;
                if( lj[i][j] > lj[i][k] + lj[k][j] || lj[i][j] == -1 )
                {
                    lj[i][j] = lj[i][k] + lj[k][j] ;
                }
            }
        }
    }
    int q ;
    cin >> q ;
    int t1 , t2 ;
    for( int i = 0 ; i < q ; i ++ )
    {
        cin >> t1 >> t2 ;
        cout<< lj[t1][t2] << endl ;
    }
    return 0 ;
}
