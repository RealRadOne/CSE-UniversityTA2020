    void setZeroes(int matrix[M][N] ) 
    {
        int rows[M];
        int cols[N];
        for(int i=0;i<M;i++)
        {
            for(int j=0;j<N;j++)
            {
                if(matrix[i][j]==0)
                {
                   rows[i]=1;
                   cols[j]=1;
                }
            }
        }
        for(int i=0;i<M;i++)
        {
            for(int j=0;j<N;j++)
            {
                if(rows[i]==1 || cols[j]==1 )
                    matrix[i][j]=0;
            }
        }
        }