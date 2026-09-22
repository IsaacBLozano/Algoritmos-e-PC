<div align="center">

# 🔁 Aula 06 · Exercício 03

### Soma dos Números Ímpares

![C](https://img.shields.io/badge/C-00599C?style=flat-square&logo=c&logoColor=white)
![Aula](https://img.shields.io/badge/Aula-06-6f42c1?style=flat-square)
![Tema](https://img.shields.io/badge/Tema-Estruturas%20de%20Repeti%C3%A7%C3%A3o-2ea44f?style=flat-square)

[⬅️ Anterior](../../Aula06/Exercicio02/README.md) · [📚 Aula 06](../README.md) · [🏠 Início](../../README.md) · [Próximo ➡️](../../Aula06/Exercicio04/README.md)

</div>

---

## 🎯 Objetivo

Ler números inteiros até que seja digitado 0 ou um valor negativo e exibir a soma dos números ímpares informados.

## 🧠 Conceitos aplicados

- Laço `do-while`
- Operador módulo (`%`) para testar paridade
- Acumulador condicional

**Bibliotecas:** `stdio.h` · `locale.h`

## 📥 Entradas

| Variável | Tipo | Descrição |
|----------|------|-----------|
| `num` | `int` | Números inteiros (0 ou negativo encerra) |

## 📤 Saídas

| Variável | Tipo | Descrição |
|----------|------|-----------|
| `soma` | `int` | Soma dos números ímpares |

## ⚙️ Lógica

```text
faça:
    lê num
    se num > 0 e num % 2 != 0 → soma += num
enquanto num > 0
```

## 🗺️ Fluxograma

```mermaid
flowchart TD
    A(["Início"]) --> B[/"Lê num"/]
    B --> C{"num > 0 e ímpar?"}
    C -- Sim --> D["soma += num"]
    C -- Não --> E{"num > 0?"}
    D --> E
    E -- Sim --> B
    E -- Não --> O[/"Exibe soma"/]
    O --> F(["Fim"])
```

## ▶️ Como executar

```bash
# Compilar
gcc exercicio03.c -o exercicio03

# Executar (Windows)
.\exercicio03.exe

# Executar (Linux / macOS)
./exercicio03
```

## 💻 Exemplo de execução

```text
Digite um número: 3
Digite um número: 4
Digite um número: 5
Digite um número: 0
A soma dos números ímpares é: 8
```

## 📄 Código-fonte

➡️ [`exercicio03.c`](./exercicio03.c)

---

<div align="center">

[⬅️ Anterior](../../Aula06/Exercicio02/README.md) · [📚 Aula 06](../README.md) · [🏠 Início](../../README.md) · [Próximo ➡️](../../Aula06/Exercicio04/README.md)

</div>
