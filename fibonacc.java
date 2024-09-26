import java.util.*;

class Main{
    
    static int fib(int n){
        if(n == 0){
            return 0;

        }
        if(n == 1){
            return 1;
        }
        int ans = fib(n-1) + fib(n-2);
        return ans;
        
    }
    
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        
        for(int i = 0; i<=n; i++){
            System.out.println(fib(i) + " ");
            
        }
        
        
        
        
    }
}