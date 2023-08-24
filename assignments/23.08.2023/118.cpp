vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> pascal_triangle(1);

        pascal_triangle[0].push_back(1);

        vector<int> temp;

        for(int i = 1; i < numRows; i++)
        {
            //first part
            //pascal_triangle[i].push_back(1);

            temp.push_back(1);

            if(i-1 > 0)//i + 1 - 2 elements i.e. the first and the last parts
            {
                for(int j = 1; j <= i-1; j++)
                {
                    //pascal_triangle[i].push_back(pascal_triangle[i-1][j] + pascal_triangle[i-1][j-1]);
                    temp.push_back(pascal_triangle[i-1][j] + pascal_triangle[i-1][j-1]);
                }
            }

            //last part
            //pascal_triangle[i].push_back(1);
            temp.push_back(1);

            pascal_triangle.push_back(temp);

            temp.clear();
        }

        return pascal_triangle;

    }