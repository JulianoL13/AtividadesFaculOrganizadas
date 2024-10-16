package atividadeAbstractic;

public class Main {

	public static void main(String[] args) {
		BankAccount account = new BankAccount(100000.0, "John Doe", "123456");

		Payments cashPayment = new Cash();
		Payments creditPayment = new CreditCard("4532015112830366", "12/25", "123");

		try {
			account.makePayment(cashPayment, 500.0);
		} catch (PaymentException e) {
			System.err.println("Error: " + e.getMessage());
		}

		try {
			account.makePayment(cashPayment, 1500.0);
		} catch (PaymentException e) {
			System.err.println("Error: " + e.getMessage());
		}

		try {
			account.makePayment(creditPayment, 500.0);
		} catch (PaymentException e) {
			System.err.println("Error: " + e.getMessage());

		}
	}

}
