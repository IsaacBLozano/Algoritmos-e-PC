<div align="center">

# 🔀 Aula 04 · Exercício 01

### Hospedagem Anália

![C](https://img.shields.io/badge/C-00599C?style=flat-square&logo=c&logoColor=white)
![Aula](https://img.shields.io/badge/Aula-04-6f42c1?style=flat-square)
![Tema](https://img.shields.io/badge/Tema-Estruturas%20Condicionais-2ea44f?style=flat-square)

[⬅️ Anterior](../../Aula03/Exercicio10/README.md) · [📚 Aula 04](../README.md) · [🏠 Início](../../README.md) · [Próximo ➡️](../../Aula04/Exercicio02/README.md)

</div>

---

## 🎯 Objetivo

Exibir um menu de tipos de quarto, ler a opção escolhida e a quantidade de diárias, e calcular o valor total da hospedagem.

## 🧠 Conceitos aplicados

- Menu de opções com `char`
- `if` / `else if` / `else`
- Operador lógico `||` para aceitar maiúscula e minúscula

**Bibliotecas:** `stdio.h` · `locale.h` · `math.h`

## 📥 Entradas

| Variável | Tipo | Descrição |
|----------|------|-----------|
| `opcao` | `char` | Tipo de quarto: `s`, `d` ou `t` |
| `num_diarias` | `int` | Quantidade de diárias |

## 📤 Saídas

| Variável | Tipo | Descrição |
|----------|------|-----------|
| — | `int` | Total a pagar ou mensagem de opção inválida |

## ⚙️ Lógica

| Opção | Quarto  | Diária  |
|:-----:|---------|--------:|
| `s`   | Simples | R$ 300  |
| `d`   | Duplo   | R$ 450  |
| `t`   | Triplo  | R$ 600  |

## 🗺️ Fluxograma

```mermaid
flowchart TD
    A(["Início"]) --> B[/"Lê opção e nº de diárias"/]
    B --> C{"opção = s?"}
    C -- Sim --> S["total = diárias × 300"]
    C -- Não --> D{"opção = d?"}
    D -- Sim --> DD["total = diárias × 450"]
    D -- Não --> T{"opção = t?"}
    T -- Sim --> TT["total = diárias × 600"]
    T -- Não --> I[/"Opção inválida"/]
    S & DD & TT --> O[/"Exibe total"/]
    O & I --> F(["Fim"])
```

## ▶️ Como executar

```bash
# Compilar
gcc exercicio01.c -o exercicio01 -lm

# Executar (Windows)
.\exercicio01.exe

# Executar (Linux / macOS)
./exercicio01
```

> [!NOTE]
> Este programa utiliza a biblioteca `math.h`. Em Linux/macOS, a flag `-lm` é necessária para vincular a biblioteca matemática. No Windows (MinGW / Code::Blocks) ela é opcional.

## 💻 Exemplo de execução

```text
Hospedagem Anália
[s] Quarto simples
[d] Quarto Duplo
[t] Quarto Triplo
Digite uma opção: d
Qual a quantidade de diárias: 3
Total a pagar R$ 1350
```

## 📄 Código-fonte

➡️ [`exercicio01.c`](./exercicio01.c)

---

<div align="center">

[⬅️ Anterior](../../Aula03/Exercicio10/README.md) · [📚 Aula 04](../README.md) · [🏠 Início](../../README.md) · [Próximo ➡️](../../Aula04/Exercicio02/README.md)

</div>
