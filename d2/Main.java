import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        Double[] a = {13.1, 1.32, 5.1, 12.6, 1.0, 13.2, 1.9, 5.8};

        Arrays.sort(a, (x, y) -> {
            int byInteger = Double.compare(Math.floor(x), Math.floor(y));
            if (byInteger != 0) return byInteger;
            return Double.compare(y - Math.floor(y), x - Math.floor(x));
        });

        System.out.println(Arrays.toString(a));
    }
}
