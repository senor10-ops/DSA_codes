import java.util.*;

class factorial{

     int factors(int n){
        if(n == 0){
            return 1;

        }

        int smaller = factors(n-1);
        int bigger = n * smaller;
        return bigger;
        
    }

    public static void main(String []args){

Scanner sc = new Scanner(System.in);
int n = sc.nextInt();

int ans = factors(n);
System.out.println(ans);

    }
}