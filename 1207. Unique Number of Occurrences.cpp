
    bool uniqueOccurrences(vector<int>& arr) {
       unordered_map<int, int> umap;
       vector<int> freq;
       for(auto it:arr){
           umap[it]++;
       }
       for(auto i:umap){
           freq.push_back(i.second);
       }
       sort(freq.begin(), freq.end());
       for(int m=0; m<freq.size()-1; m++){
           if(freq[m] == freq[m+1]) return false;
       }
       return true;
    }
