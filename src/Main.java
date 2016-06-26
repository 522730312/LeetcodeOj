public class Main {

    public static void IteratorArrays(int[] nums) {
        for (int i = 0; i < nums.length; i++) {
            System.out.println(nums[i]);

        }
    }
    public static void main(String[] args) {
        SortColor75 so75=new SortColor75();
        int[] nums=new int[]{1,0,2,0,1};
        so75.sortColors(nums);
        IteratorArrays(nums);

        System.out.println("Hello World!");
        System.out.println("Hello World!");
        System.out.println("Hello World!");
        System.out.println("Hello World!");
        System.out.println("Hello World!");
    }
}
