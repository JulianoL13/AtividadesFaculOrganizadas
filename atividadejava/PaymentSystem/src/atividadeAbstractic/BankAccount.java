package atividadeAbstractic;

public class BankAccount {
	protected double balance;
	private String accountNumber;
	private String accountManager;


	public BankAccount(double balance, String accountNumber, String accountManager) {
		super();
		this.balance = balance;
		this.accountNumber = accountNumber;
		this.accountManager = accountManager;
	}

	public double getBalance() {
		return balance;
	}

	public void setBalance(double balance) {
		this.balance = balance;
	}

	public String getAccountNumber() {
		return accountNumber;
	}

	public void setAccountNumber(String accountNumber) {
		this.accountNumber = accountNumber;
	}

	public String getAccountManager() {
		return accountManager;
	}

	public void setAccountManager(String accountManager) {
		this.accountManager = accountManager;
	}

	public void makePayment(Payments paymentStrategy, double amount) throws PaymentException {
		try {
			paymentStrategy.realizePayment(this, amount);
		} catch (InsufficientFundsException e) {
			System.err.println("Error: " + e.getMessage());
		} catch (PaymentException e) {
			System.err.println("General payment error: " + e.getMessage());
		}
	}
}