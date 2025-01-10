import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter your name here: ");
        String name = scanner.nextLine();
        
         if (name.isEmpty()) {
            System.out.println("Name cannot be empty.");
            return;
        }
        int age = -1;
        while (age <= 0) {
            System.out.print("Enter your age: ");
            if (scanner.hasNextInt()) {
                age = scanner.nextInt();
                if (age <= 0) {
                    System.out.println("Age must be greater than 0. Please try again.");
                }
            } else {
                System.out.println("Invalid input. Please enter a valid integer for age.");
                scanner.next();
            }
         }
         
        scanner.close();
        System.out.println("hello "+ name + " you are " + age + " years old" );
        
    }
}