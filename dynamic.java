import java.util.*;

class dynamic {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        int[] arr = new int[t];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt(); // Read values into the array
        }
        
        for (int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
        
        sc.close();
    }
}
