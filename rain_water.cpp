int trap(vector<int>& height){
    int n = height.size();
    if(n == 0) return 0;

    int water_trapped = 0;
    int lmax = height[0], rmax = height[n-1];

    // Brute Force: TC O(n^2), SC O(1)
    // For each building, water_trapped is min(lmax, rmax) - height[i]
    for(int i = 1; i < n-1; i++){
        for(int j = i; j >=0; j--)
            if(height[j] > lmax)
                lmax = height[j];

        for(int j = i; j < n-1;j++)
            if(height[j] > rmax)
                rmax = height[j];

        water_trapped += min(lmax, rmax) - height[i];
        lmax = height[0], rmax = height[n-1]; // restoring default values of lmax and rmax
    }
    return water_trapped;
}
