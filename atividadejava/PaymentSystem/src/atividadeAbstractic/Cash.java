package atividadeAbstractic;

public class Cash extends Payments {

    @Override
    public void realizePayment(BankAccount account, double amount) throws PaymentException {
        verifyBalance(account, amount);
        account.setBalance(account.getBalance() - amount);
        System.out.println("Cash payment done, balance value: " + account.getBalance());
    }
    
    @Override
	protected void verifyBalance(BankAccount account, double amount) throws InsufficientFundsException {
        if (account.getBalance() < amount) {
            throw new InsufficientFundsException("Insufficient balance");
        }
    }
}