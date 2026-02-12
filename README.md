# Super Trunfo de Países - Mestre (ies-supertrunfo-mestre)

Sistema para comparação e cadastro de cartas com informações sobre países:

- Nome do País
- População
- Área (km²)
- PIB (Produto Interno Bruto)
- Número de Pontos Turísticos
- Densidade Demográfica

## Instalação

É possível instalar os binários compilados diretamente da aba Releases ou baixar o código-fonte:

```shell
git clone https://github.com/david-karpinski/ies-supertrunfo-mestre.git

cd ies-supertrunfo-mestre
```

## Instruções de Compilação e Execução

```shell
# Linux
gcc super_trunfo.c -o super_trunfo
./super_trunfo

# Windows
gcc super_trunfo.c -o super_trunfo.exe
.\super_trunfo.exe

# Compilação Otimizada com Make
make
```

> Nota: em ambos os sistemas operacionais, a flag `-o` é totalmente opcional. Quando omitida, o compilador gera um arquivo com nome padrão, usualmente `a.out` ou `a.exe`.

## Conceitos Abordados

- Leitura de dados do usuário
- Armazenamento em variáveis
- Exibição e formatação de informações no console
- Interação com o usuário
- Lógica de comparação avançada de múltiplos atributos
- Criação de menus dinâmicos
- Estruturas condicionais avançadas (if-else aninhado, switch case e operador ternário)
