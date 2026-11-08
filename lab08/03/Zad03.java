public class Zad03 {
    public static void main(String[] args) {
        int[][] a = {
            {1, 2, 3},
            {4, 0, 6},
            {7, 8, 9}
        };

        int fi = -1, fj = -1;

        outer:
        for (int i = 0; i < a.length; i++) {
            for (int j = 0; j < a[i].length; j++) {
                if (a[i][j] == 0) {
                    fi = i;
                    fj = j;
                    break outer;
                }
            }
        }

        if (fi != -1) {
            System.out.println("Первый нуль: (" + fi + ", " + fj + ")");
        } else {
            System.out.println("Нулей нет");
        }
    }
}