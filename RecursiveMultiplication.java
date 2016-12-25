import java.io.*;
import java.util.*;
import java.math.*;
 
public class RecursiveMultiplication {
 
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        BigInteger a,b,z,rem,t,k;
        int res,r,r1=1;
		Scanner sc=new Scanner(System.in);
		a=sc.nextBigInteger();
         z = new BigInteger("0");
        t=new BigInteger("10");
        k=new BigInteger("1");
        
        
        
       while(r1==1|| r1==0)
           {
         // System.out.println(a);
           k=new BigInteger("1");
          res = a.compareTo(z);
        while(res!=0)
            {
            rem=a.remainder(t);
            r=rem.compareTo(z);
            if(r!=0)
                {
                k=k.multiply(rem);
             //    System.out.println("HELLO");
              //   System.out.println(k);
            }
            a=a.divide(t);
            
            res = a.compareTo(z);
        }
         r1=k.compareTo(t);
           if(r1==1 || r1==0)
               {
               a=k;
             //  System.out.println(a);
           }
           
       }
        System.out.println(k);
        
    }
} 
