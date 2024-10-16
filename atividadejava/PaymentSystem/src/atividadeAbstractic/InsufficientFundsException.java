package atividadeAbstractic;

public class InsufficientFundsException extends PaymentException {
    private static final long serialVersionUID = -7328114700212323316L;

	public InsufficientFundsException(String message) {
        super(message);  

    }
}