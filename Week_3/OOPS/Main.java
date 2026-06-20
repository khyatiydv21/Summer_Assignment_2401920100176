import java.util.Random;

abstract class Compartment {
    public abstract String notice();
}

class FirstClass extends Compartment {
    public String notice() {
        return "First Class: Maintain silence and comfort.";
    }
}

class Ladies extends Compartment {
    public String notice() {
        return "Ladies: Reserved for women passengers.";
    }
}

class General extends Compartment {
    public String notice() {
        return "General: Valid ticket required for travel.";
    }
}

class Luggage extends Compartment {
    public String notice() {
        return "Luggage: Only goods allowed, no passengers.";
    }
}

public class Main {
    public static void main(String[] args) {

        Compartment[] arr = new Compartment[10];
        Random r = new Random();

        for (int i = 0; i < 10; i++) {
            int type = r.nextInt(4) + 1;

            if (type == 1) {
                arr[i] = new FirstClass();
            } else if (type == 2) {
                arr[i] = new Ladies();
            } else if (type == 3) {
                arr[i] = new General();
            } else {
                arr[i] = new Luggage();
            }
        }

        for (int i = 0; i < 10; i++) {
            System.out.println(arr[i].notice());
        }
    }
}