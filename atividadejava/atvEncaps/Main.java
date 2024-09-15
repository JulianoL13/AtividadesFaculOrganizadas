public class Main {
  public static void main(String[] args) {
    EstoqueDeProduto produto1 = new EstoqueDeProduto();
    produto1.cadastrar("arroz", 10, 5.0);
    produto1.exibirEstoque();
    produto1.cadastrar("feijao", 5, 9.0);
    produto1.removerQuantidade(5);
    produto1.exibirEstoque();
    produto1.adicionarQuantidade(10);
    produto1.excluirCadastro();
    produto1.exibirEstoque();
  }
}
