class Solution {
public:
    int climbStairs(int n) {
        int distinctWays = 0;
        int lastStep = 1;
        int secondLastStep = 1;
        int currentStep = 1;
        for (int i = n-2; i >= 0; i--) {
            currentStep = secondLastStep + lastStep;
            lastStep = secondLastStep;
            secondLastStep = currentStep; // NOTE: if we update secondLastStep first, then lastStep gets the overwritten value.
        }
        return currentStep;
    }
};
