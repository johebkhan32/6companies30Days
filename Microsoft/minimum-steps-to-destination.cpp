class Solution {
public:
    int minSteps(int D) {
        
        int steps = ((double)-1 + sqrt(1 + 8*D)) / (double) 2;
        int coverage = (steps * (steps + 1))/2;

        if(coverage == D) return steps;

        for(int i = 0; i < 3; ++i) {
            ++steps;
            coverage += steps;
            if(((coverage - D) & 1) == 0) {
                return steps;
            }
        }
    }
};