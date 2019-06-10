# TP2
Trabalho Prático 2 de POO


A operadora mantém: nome, endereço e CPF/CNPJ do cliente;

1 cliente pode possuir mais de um celular, mas não ao contrário;

Celular = número -> Cliente -> Plano -> Lista de Ligações;

Ligações podem ser por dados ou comuns;
  Tipo Ligações {data, duração e custo(custo depende da duracao e do valor do minuto que é definido pelo Plano)};
    Ligações do tipo Dados (Internet) devem ser contabilizadas segundo as
    informações (velocidade, franquia) do plano de Dados contratado. Uma exceção
    deve ser lançada caso haja a tentativa de registro de uma ligação do tipo Dados
    em um aparelho que não contemple (franquia = 0) esse tipo de ligação em seu
    plano.

Planos podem ser Pré (credito e validade) ou Pós (vencimento);
  Listar: valor da conta de Pós, valor dos créditos de Pré, extrato de ligações de dados, clientes, planos e celulares;
  
Informativo de vencimento de fatura/créditos. Sempre que um desses itens
alcançar a data de vencimento, o sistema deve informar ao usuário os dados do
cliente e celular cujos item venceu.

Informativo de limite de franquia de dados. Sempre que o consumo de dados
alcançar o valor da franquia do plano contratado, o sistema deve informar ao
usuário os dados do cliente e celular.


OBS
Usar polimorfismo, exceções, include <vector>, interface;
Gerar documentação das classes do TP2;
