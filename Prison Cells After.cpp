//juwoo는 사기꾼
//ㅜㅜㅜㅜ안돌아가ㅠㅠㅠㅠㅠ
class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N) {
        int new_cells[8]={0};
        int tmp[8];
        int count=0;
        int num;
        int index = 0;
        int i=0, j=0;
        for(i=0 ; i<8 ; i++)
            tmp[i] = cells[i];
        while(index==0)
        {
            count++;
            new_cells[0] = 0;
            new_cells[7] = 0;
            for(i=1 ; i<7 ; i++)
            {
                if(cells[i-1]==cells[i+1])
                    new_cells[i] = 1;
                else
                    new_cells[i] = 0;
            }
            for(i=0 ; i<8 ; i++)
                cells[i] = new_cells[i];
            i=0;
            while(tmp[i]==new_cells[i] && i<8)
            {
                i++;
            }
            if(i==8)
                index = 1;
        }
        num = N % count;
        while(num>0)
        {
            num--;
            new_cells[0] = 0;
            new_cells[7] = 0;
            for(i=1 ; i<7 ; i++)
            {
                if(cells[i-1]==cells[i+1])
                    new_cells[i] = 1;
                else
                    new_cells[i] = 0;
            }
            for(i=0 ; i<8 ; i++)
                cells[i] = new_cells[i];
        }
        return cells;
    }
};
