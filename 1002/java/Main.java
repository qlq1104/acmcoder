import java.io.*;
import java.util.*;
import java.math.BigInteger;

public class Main {
    public static void main(String[] args) {
        boolean init = true;
        Scanner sc = new Scanner(new BufferedInputStream(System.in));
        int n = sc.nextInt();

        for (int i = 1; i <= n; ++i) {
            if (init) {
                init = false;
            } else {
                System.out.println();
            }
            String str1 = sc.next();
            String str2 = sc.next();
            BigInteger a = new BigInteger(str1);
            BigInteger b = new BigInteger(str2);
            System.out.println("Case " + i + ":");
            System.out.println(a + " + " + b + " = " + a.add(b));
        }
    }
}
