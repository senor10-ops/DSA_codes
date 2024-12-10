import java.util.*;  
class swappingwihoutusingthirdvariable
{  
    public static void main(String a[])   
    {   
        System.out.println("Enter the value of x and y");  
        Scanner sc = new Scanner(System.in);  
        
        int x = sc.nextInt();  
        int y = sc.nextInt();  
        System.out.println("before swapping numbers: "+x +" "+ y);  
       /*Swapping*/  
        x = x + y;   
        y = x - y;   
        x = x - y;   
        System.out.println("After swapping: "+x +"  " + y);   
    }   
}  

// X= 25 (First number), Y= 23 (second number)
// Swapping Logic:
// X = X + Y = 25 +23 = 48
// Y = X - Y = 48 - 23 = 25
// X = X -Y = 48 - 25 = 23
// and the numbers are swapped as X =23 and Y =25.