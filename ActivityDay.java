import java.util.*;

public class ActivityDay {

    static class Box {
        int x1, y1, x2, y2; // bottom-left (x1,y1) and top-right (x2,y2)
        int area;
        String str;

        Box(int x1, int y1, int x2, int y2, String str) {
            this.x1 = x1; this.y1 = y1;
            this.x2 = x2; this.y2 = y2;
            this.str = str;
            this.area = (x2 - x1) * (y2 - y1);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int M = sc.nextInt();
        sc.nextLine();

        int L = sc.nextInt(); // number of partition lines
        sc.nextLine();

        // Collect all unique vertical and horizontal lines including boundaries
        TreeSet<Integer> xLines = new TreeSet<>();
        TreeSet<Integer> yLines = new TreeSet<>();

        xLines.add(0); xLines.add(M);
        yLines.add(0); yLines.add(N);

        for (int i = 0; i < L; i++) {
            int x1 = sc.nextInt();
            int y1 = sc.nextInt();
            int x2 = sc.nextInt();
            int y2 = sc.nextInt();
            sc.nextLine();
            if (x1 == x2) xLines.add(x1); // vertical line
            if (y1 == y2) yLines.add(y1); // horizontal line
        }

        int R = sc.nextInt(); // Raghu's rank
        sc.nextLine();

        String[] strs = sc.nextLine().split("\\s+");
        List<Box> boxes = new ArrayList<>();

        // convert TreeSet to sorted list
        List<Integer> xList = new ArrayList<>(xLines);
        List<Integer> yList = new ArrayList<>(yLines);

        // create boxes in bottom-to-top, left-to-right order
        int index = 0;
        for (int i = 0; i < yList.size() - 1; i++) {
            for (int j = 0; j < xList.size() - 1; j++) {
                int x1 = xList.get(j);
                int y1 = yList.get(i);
                int x2 = xList.get(j + 1);
                int y2 = yList.get(i + 1);
                if (index < strs.length) {
                    boxes.add(new Box(x1, y1, x2, y2, strs[index++]));
                }
            }
        }

        // sort boxes by: area descending, x1 ascending, y1 ascending
        boxes.sort((b1, b2) -> {
            if (b2.area != b1.area) return b2.area - b1.area; // larger area first
            if (b1.x1 != b2.x1) return b1.x1 - b2.x1;
            return b1.y1 - b2.y1;
        });

        // Raghu's assigned box
        Box raghuBox = boxes.get(R - 1);
        int sum = 0;
        for (char c : raghuBox.str.toCharArray()) sum += (int)c;
        System.out.println(sum);
    }
}
