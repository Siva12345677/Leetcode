bool isPowerOfTwo(int n){
if(n>0&&(n&(n-1))==0)
return true;
else
return false;
}
