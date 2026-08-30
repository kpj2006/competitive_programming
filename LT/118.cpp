class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> tri;
        tri.push_back(vector<int>(1,1));
        int current=1;
        while(current<numRows){
            tri.push_back(vector<int>(current+1));
            tri[current][0]=1;
            tri[current][current]=1;
            int row=1;
            while(row+1<=current){
                tri[current][row]=tri[current-1][row]+tri[current-1][row-1];
                row++;
            }
            current++;
        }
        return tri;
    }
};