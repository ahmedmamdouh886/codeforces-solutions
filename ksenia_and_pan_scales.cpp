#include <iostream>
#include <string>
#include<algorithm> 

using namespace std;

string equilibrium(string untouchedWeights, int leftWeightSize, string scales) {
   
   for (int i = 0; i < untouchedWeights.size(); i++)
    {
        if(i < leftWeightSize)
            scales = untouchedWeights[i] + scales;
        else
            scales = scales + untouchedWeights[i];
    }

    return scales;

}

int main()
{
    int left = 0, right = 0, untouchedWeightSize = 0;
    string scales, res, untouchedWeights;
    cin >> scales;
    cin >> untouchedWeights;
    untouchedWeightSize = untouchedWeights.size();
    bool delimiter = false;
    for (int i = 0; i < scales.size(); i++){

        if(scales[i] != '|') {

            if(delimiter)
                right++;
            else
                left++;

        }else{
            delimiter = true;
        }

    }

    if(right == left) {
       if(!(untouchedWeightSize & 1)) {

                int allHalfWeightsSize = (untouchedWeightSize + left + right) / 2;
                int leftWeights = (allHalfWeightsSize - left);
                res = equilibrium(untouchedWeights, leftWeights, scales);

        }else{
            res = "Impossible";
        }
    }else{

        int leftWeight = max(untouchedWeightSize - left, 0) + left;
        int rightWeight = max(untouchedWeightSize - right, 0) + right;

        if((left == 0 || right == 0) && (leftWeight != rightWeight)) {
            res = "Impossible";
        }else if(abs(left - right) == untouchedWeightSize) {
            if(left < right)
                res = untouchedWeights + scales;
            else
                res = scales + untouchedWeights;
        }else if(!((untouchedWeightSize + left + right) & 1)) {
            int allHalfWeightsSize = (untouchedWeightSize + left + right) / 2;

            if(untouchedWeightSize == (max(allHalfWeightsSize - left, 0) + max(allHalfWeightsSize - right, 0))) {
                int leftWeights = (allHalfWeightsSize - left);
                res = equilibrium(untouchedWeights, leftWeights, scales);
            }else{
                res = "Impossible";
            }
        }else{
            res = "Impossible";
        }
    }

    cout << res << endl;

}