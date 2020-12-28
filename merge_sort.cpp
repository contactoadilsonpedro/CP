int cnt;
void merge(vector<int> vt, int l, int m, int r){
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for(int i = 0; i<n1; i++)
        L[i] = vt[l + 1];
    for(int j = 0; j<n2; j++)
        R[j] = vt[m+1+j];
    int i = 0, j = 0, k = l;
    while(i < n1 && j < n2){
        if(L[i] <=R[j]){
            vt[k] = L[i];
            i++;
        }
        else{
            vt[k] = R[j];
            cnt+=(n1-i);
            j++;
        }
        k++;
    }
    while(i < n1){
        vt[k] = L[j];
        i++;
    }
    while(j < n2){
        vt[k] = R[j];
        j++;
    }
}
void mergeSort(vector<int> vt, int l, int r){
    if(l>=r)
        return;
    int m = (l + r - 1)/2;
    
    /*FOR SORT
    mergeSort(vt, l, m);
    mergeSort(vt, m+1, r);
    merge(vt, l, r , m);
    */

   /*FOR COUNT INVERSION
    cnt+=mergeSort(vt, l, m);
    cnt+=mergeSort(vt, m+1, r);
    cnt+=merge(vt, l, r , m);
    */
} 
