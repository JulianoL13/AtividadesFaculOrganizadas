# Atividade Abstractic

Este projeto implementa um sistema de pagamentos em Java, utilizando o padrão Strategy. O sistema permite pagamentos em dinheiro e cartão de crédito, verificando o saldo da conta bancária.

## Estrutura do Projeto

As classes principais estão no pacote `atividadeAbstractic`:

- **Payments**: Classe abstrata para a estratégia de pagamento.
- **BankAccount**: Representa uma conta bancária com saldo e métodos de pagamento.
- **Cash**: Implementa pagamentos em dinheiro.
- **CreditCard**: Implementa pagamentos via cartão de crédito.
- **InsufficientFundsException**: Exceção para saldo insuficiente.
- **InvalidCardDetailsException**: Exceção para detalhes de cartão inválidos.
- **PaymentException**: Exceção base para pagamentos.

## Uso

Para realizar um pagamento, crie uma instância de `BankAccount` e utilize `Cash` ou `CreditCard`:

```java
BankAccount account = new BankAccount(100000.0, "John Doe", "123456");
Payments cashPayment = new Cash();
Payments creditPayment = new CreditCard("4532015112830366", "12/25", "123");

try {
  account.makePayment(cashPayment, 500.0);
} catch (PaymentException e) {
  System.err.println("Error: " + e.getMessage());
}
;
