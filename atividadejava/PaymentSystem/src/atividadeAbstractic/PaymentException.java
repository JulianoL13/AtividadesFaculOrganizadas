package atividadeAbstractic;

public abstract class PaymentException extends Exception {
    private static final long serialVersionUID = -9198666887421248430L;

	public PaymentException(String message) {
        super(message);
    }

    public PaymentException(String message, Throwable cause) {
        super(message, cause);
    }
}