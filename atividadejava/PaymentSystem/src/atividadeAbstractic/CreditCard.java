package atividadeAbstractic;

public class CreditCard extends Payments {
	private String cardNumber;
	private String expirationDate;
	private String cvv;

	public CreditCard(String cardNumber, String expirationDate, String cvv) {
		this.cardNumber = cardNumber;
		this.expirationDate = expirationDate;
		this.cvv = cvv;
	}

	@Override
	public void realizePayment(BankAccount account, double amount) throws PaymentException {
		verifyBalance(account, amount);
		verifyCardDetails();
		double creditTaxes = (amount / 100 * 5);
		double totalValue = amount + creditTaxes;

		account.setBalance(account.getBalance() - totalValue);
		System.out.println("Credit card payment done, balance value: " + account.getBalance());
	}

	private void verifyCardDetails() throws InvalidCardDetailsException {
		String cardNumberRegex = "^(?:4[0-9]{12}(?:[0-9]{3})?|5[1-5][0-9]{14}|6011[0-9]{12}|62212[6-9][0-9]{10}|6222[0-9]{13}|624[0-9]{14}|626[0-9]{13}|64[4-9][0-9]{13}|65[0-9]{14}|3[47][0-9]{13}|2[0-9]{16})$";
		String expirationDateRegex = "^(0[1-9]|1[0-2])\\/[0-9]{2}$";
		String cvvRegex = "^[0-9]{3}$";

		if (!cardNumber.matches(cardNumberRegex)) {
			throw new InvalidCardDetailsException("Invalid card number");
		}

		if (!expirationDate.matches(expirationDateRegex)) {
			throw new InvalidCardDetailsException("Invalid expiration date");
		}

		if (!cvv.matches(cvvRegex)) {
			throw new InvalidCardDetailsException("Invalid CVV");
		}
	}

	protected void verifyBalance(BankAccount account, double amount) throws InsufficientFundsException {
		if (account.getBalance() < amount) {
			throw new InsufficientFundsException("Insufficient balance");
		}
	}
}