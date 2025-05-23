class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int totalapples=accumulate(apple.begin(),apple.end() ,0);
        sort(capacity.rbegin(),capacity.rend());

        int a=0;
        int b=0;

        for(int cap:capacity)
        {
            a+=cap;
            b++;
        if(a>=totalapples)
        break;
        }
        return b;
    }
};