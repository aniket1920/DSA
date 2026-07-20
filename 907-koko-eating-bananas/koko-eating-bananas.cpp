class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int minspeed = 1;
        int maxspeed = *max_element(piles.begin(),piles.end());
        while(minspeed<maxspeed){
            int mid = (minspeed + maxspeed)/2;
            if(kokocaneat(piles,h,mid)){
                maxspeed = mid;
            }
            else{
                minspeed = mid + 1;
            }
        }
        return minspeed;
    }
    bool kokocaneat(vector<int>& piles, int h, int mid){
        int hour = 0;
        for(int pile: piles){
            hour += (pile + mid -1)/mid;
        }
        return hour <= h;
    }
};