public class P {
     public String id, name;
     public double roll;
     public P(String id, String name, double roll) {
         this.id = id;
         this.name = name;
         this.roll = roll;
     }
    public void a(P other) {
        String tempId = this.id;
        String tempName = this.name;
        double tempRoll = this.roll;

        this.id = other.id;
        this.name = other.name;
        this.roll = other.roll;

        other.id = tempId;
        other.name = tempName;
        other.roll = tempRoll;
    }
    public static void main(String[] args) {
        P s1= new P("1", "John", 1.0);
        P s2= new P("2", "Jane", 2.0);

        System.out.println(s1.id);
        System.out.println(s1.name);
        System.out.println(s2.id);

        s1.a(s2);
        System.out.println(s1.id);
        System.out.println(s2.id);
    }
}
