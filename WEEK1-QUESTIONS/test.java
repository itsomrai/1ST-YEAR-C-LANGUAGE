// import java.util.Scanner;

/**
 * test
 */
public class test {

    public static void main(String[] args) {
        
        int n=1234;

        //1234   - 4321
        int rev=0;
        while(n!=0){
            int temp=n%10;
            rev=rev*10+temp;
            n/=10;
        }
        System.out.println(rev);


    
    }
}
    