class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int totalapples=accumulate(apple.begin(),apple.end() ,0);
        sort(capacity.rbegin(),capacity.rend());

        int currentcapacity=0;
        int usedboxes=0;

        for(int cap:capacity)
        {
            currentcapacity+=cap;
            usedboxes++;
        if(currentcapacity>=totalapples)
        break;
        }
        return usedboxes;
    }
};