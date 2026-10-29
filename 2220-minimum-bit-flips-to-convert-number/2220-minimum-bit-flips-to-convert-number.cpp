class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count =0;
        while(start >0 || goal>0){
            if(start%2==1 && goal%2==0) count ++;
             if(start%2==0 && goal%2==1) count ++;
             start/=2;
             goal/=2;

        }
        return count;
    }
};