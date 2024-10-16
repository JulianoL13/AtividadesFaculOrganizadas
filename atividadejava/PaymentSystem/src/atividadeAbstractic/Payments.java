package atividadeAbstractic;

public abstract class Payments {

	public abstract void realizePayment(BankAccount account, double amount) throws PaymentException;

	protected void verifyBalance(BankAccount account, double amount) throws InsufficientFundsException {
		if (account.getBalance() < amount) {
			throw new InsufficientFundsException("Insufficient balance");
		}
	}
}
