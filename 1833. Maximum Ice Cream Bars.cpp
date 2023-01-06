 class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n=costs.size();
        sort(begin(costs), end(costs));

    // initialize a counter for the number of ice cream bars purchased
    int num_purchased = 0;

    // iterate through the costs and add up the total cost
    for (int i = 0; i < n; i++) {
        if (coins >= costs[i]) {
            coins -= costs[i];
            num_purchased++;
        } else {
            break;
        }
    }

    return num_purchased;
    }
};
