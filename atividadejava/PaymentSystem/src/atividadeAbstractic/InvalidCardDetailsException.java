package atividadeAbstractic;

public class InvalidCardDetailsException extends PaymentException {
	private static final long serialVersionUID = -3996829008395970145L;

	public InvalidCardDetailsException(String message) {
        super(message);  

    }

}
