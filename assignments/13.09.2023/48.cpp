void rotate(vector<vector<int>>& matrix) {
        
        //transpose of a matrix

        for(int i = 0; i < matrix.size(); i++)
        {
            for(int j = i; j < matrix[0].size(); j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }


        //reversing the rows
        for(int i = 0; i < matrix.size(); i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }

    }