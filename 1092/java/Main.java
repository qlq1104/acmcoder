import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int sum = 0;
        while (sc.hasNextInt()) {
            int n = sc.nextInt();
            if (n == 0) break;
            sum = 0;
            for (int i=0; i<n; ++i) {
               sum += sc.nextInt(); 
            }
            System.out.println(sum);
        }
    }
}
