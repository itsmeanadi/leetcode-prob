class Solution {
public:
    int maxProduct(int n) {
        int lar=0;
        int selar =0 ;
        while(n>0){
            int rem = n % 10;
            if(rem>lar){
                selar = lar;
                lar = rem;
            }else if(rem>selar){
                selar = rem;
            }

            n=n/10;

        }
        return (selar*lar);
        
    }
};