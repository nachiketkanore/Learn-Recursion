    //RECURSION - PRACTICE

    #include<bits/stdc++.h>
    using namespace std;

    int n, sz ,num;

    // (1) Printing 1....n using recursion
    //      cin>>n;
    //      printUsingRecursion(n);
    void printUsingRecursion(int n){
        if(n == 0) return  ;
        printUsingRecursion(n-1);
        cout<<n<< " ";
    }

    // (2) Factorial using recursion
    //      cin>>n;
    //      cout<<FactorialUsingRecursion(n) <<endl;
    int FactorialUsingRecursion(int n){
        if(n == 1 or n== 0) return 1;
        else return n*FactorialUsingRecursion(n-1);
    }

    // (3) Sum of first n elements using recursion
    //      cin>>n;
    //      cout<< FirstNNaturalSum(n) <<endl;
    int FirstNNaturalSum(int n){
        if(n == 1) return 1;
        return n + FirstNNaturalSum(n-1);
    }


    // (4) Sum of digits using recursion
    //      cin>>n;
    //      cout<<SumOfDigits(n)<<endl;
    int SumOfDigits(int n){
        if(n / 10 == 0) return n%10;
        
        return (n%10) + SumOfDigits(n/10); 
    }


    // (5) Printing an array using recursion
    //      int sz; cin>>sz;
    //      int a[sz] ; for(int x=0;x<sz;x++) cin>>a[x];
    //      PrintArrUsingRecursion(a , sz-1);
    void PrintArrUsingRecursion(int a[] , int size){
        if(size == -1) return ;
        PrintArrUsingRecursion(a , size-1);
        cout<< a[size] << " ";
        
    }

    // (6) a*b  using recursion
    //      int a,b;    cin>>a>>b;
    //      cout << Product(a,b) <<endl;
    int Product(int a,int b){
        if(b==0) return 0;
        
        return a + Product(a,b-1);
    }


    // (7) Sum of elements using recursion
    //      int sz; cin>>sz;
    //      int a[sz] ; for(int x=0;x<sz;x++) cin>>a[x];
    //      cout<< SumUsingRecursion(a , sz-1) <<endl;
    int SumUsingRecursion(int a[] , int ind){
        if(ind == 0) return a[0];
        return a[ind] + SumUsingRecursion(a , ind-1);
    }


    // (8) Count set bits using recursion
    //      int num;    cin>>num;
    //      cout<< CountSetBits(num) <<endl;
    int CountSetBits(int n){
        if(n==0) return 0;
        return ( n&1 == 1 ? 1 + CountSetBits(n>>1) : CountSetBits(n>>1) );
    }
    // (9) Check prime using recursion
    //      int num;    cin>>num;
    //      cout<<( CheckPrimeUsingRecursion(num , 2) ? "YES" : "NO" )<<endl;
    bool CheckPrimeUsingRecursion(int n , int divisor){
        if( n == 1) return false;
        if(n == 2) return true;
        
        if(n % divisor == 0) return false;
        if(divisor* divisor > n) return true;

        return CheckPrimeUsingRecursion(n, divisor + 1);
    }

    // (10) Find Min / Max in array using recursion
    //      int num;    cin>>num;
    //      int a[num]; for(int x=0;x<num;x++)  cin>>a[x];
    //      cout<< " Minimum element = " << FindMinUsingRecursion(a,num-1) <<endl;
    //      cout<< " Maximum element = " << FindMaxUsingRecursion(a,num-1) <<endl;
    
    
    int FindMinUsingRecursion(int a[] , int ind){
        if( ind == 0 ) return a[0];

        return min(a[ind] , FindMinUsingRecursion(a,ind-1));
    }

    
    int FindMaxUsingRecursion(int a[] , int ind){
        if( ind == 0 ) return a[0];

        return max(a[ind] , FindMaxUsingRecursion(a,ind-1));
    }

int main(){

    //Call the function you want to execute

    return 0;
}
