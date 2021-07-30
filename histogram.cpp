string predictPartyVictory(string senate) {
    int n = senate.length();
    if(n == 0) return "";
    queue<int>rad;
    queue<int>dir;

    for(int i = 0; i < n; i++){
        if(senate[i] == 'R')
            rad.push(i);
        else dir.push(i);
    }

    while(true){
        if(rad.empty()) return "Dire";
        if(dir.empty()) return "Radiant";

        int r = rad.front();
        int d = dir.front();
        rad.pop();
        dir.pop();

        if(r < d){
            // r would appear in next round also
            rad.push(n+r);
        }
        // otherwise d would appear in next round
        else dir.push(n+d);
    }

    return "";
}
