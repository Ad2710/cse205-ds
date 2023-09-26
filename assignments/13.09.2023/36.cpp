bool isValidSudoku(vector<vector<char>>& board) {
        
        int n = board.size();
        int m = board[0].size();

        //checking validity for the row
        

        for(int i = 0; i < n; i++)
        {
            unordered_set<char> check(9);
            for(int j = 0; j < m; j++)
                {
                    if(board[i][j] == '.')
                    {
                        continue;
                    }
                    if(check.find(board[i][j]) != check.end())
                    {
                        return false;
                    }

                    check.insert(board[i][j]);
                }
        }

        //checking for validity for the column

        for(int i = 0; i < n; i++)
        {
            unordered_set<char> check(9);
            for(int j = 0; j < m; j++)
                {
                    if(board[j][i] == '.')
                    {
                        continue;
                    }
                    if(check.find(board[j][i]) != check.end())
                    {
                        return false;
                    }

                    check.insert(board[j][i]);
                }
        }


        //checking for validility of the individual boxes
        
        vector<unordered_set<char>> check_box(9);

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                int index = (i/3)*3+(j/3);

                if(board[i][j] == '.')
                {
                    continue;
                }

                if(check_box[index].find(board[i][j]) != check_box[index].end())
                {
                    return false;
                }

                check_box[index].insert(board[i][j]);
            }
        }

        return true;

    }