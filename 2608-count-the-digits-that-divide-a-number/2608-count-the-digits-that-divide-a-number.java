class Solution {
    public int countDigits(int num) {
        int a=num;
        int b=0;
        while (num!=0)
        {
          int aa=num%10;
          if(aa!=0 && a%aa==0)
          {
            b+=1;
          }
          num/=10;
        }
        return b;
    }
}