class Solution {
public:
    int maxProfit(vector<int>& prices) {

int Min_Price = INT_MAX;
int maxProfit = 0;
for(int price : prices){
    if(price<Min_Price){
        Min_Price = price;
    }
    if(price-Min_Price>maxProfit){
        maxProfit = price-Min_Price;
    }
}
return maxProfit;
        
    }
};