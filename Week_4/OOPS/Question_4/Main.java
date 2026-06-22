public class Main{
    public static void main(String[] args){
        box b=new box(1,2);
        System.out.println(b.area());
        
        box3d b1=new box3d(1,2,3);
        System.out.println(b1.volume());
    }
}
