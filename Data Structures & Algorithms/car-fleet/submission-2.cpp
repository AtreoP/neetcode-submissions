class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=position.size();int count=0;
        vector<pair<int, double>> cars(n);
        for(int i=0; i<n; i++) {
            cars[i] = {position[i], (double)(target - position[i]) / speed[i]};
        }
        sort(cars.begin(), cars.end());
        double maxTime = 0;
        for(int i=n-1; i>=0; i--) {
            if(cars[i].second > maxTime) {
                maxTime = cars[i].second;
                count++;
            }
        }
        return count;
    }
};