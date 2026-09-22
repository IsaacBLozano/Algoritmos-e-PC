<div align="center">

# 🔁 Aula 06 · Exercício 02

### Média e Maior Nota da Turma

![C](https://img.shields.io/badge/C-00599C?style=flat-square&logo=c&logoColor=white)
![Aula](https://img.shields.io/badge/Aula-06-6f42c1?style=flat-square)
![Tema](https://img.shields.io/badge/Tema-Estruturas%20de%20Repeti%C3%A7%C3%A3o-2ea44f?style=flat-square)

[⬅️ Anterior](../../Aula06/Exercicio01/README.md) · [📚 Aula 06](../README.md) · [🏠 Início](../../README.md) · [Próximo ➡️](../../Aula06/Exercicio03/README.md)

</div>

---

## 🎯 Objetivo

Ler as notas de 5 estudantes, calcular a média da turma e identificar a maior nota.

## 🧠 Conceitos aplicados

- Laço `for` com contador
- Acumulador
- Busca do maior valor

**Bibliotecas:** `stdio.h` · `locale.h`

## 📥 Entradas

| Variável | Tipo | Descrição |
|----------|------|-----------|
| `nota` | `float` | Nota de cada um dos 5 estudantes |

## 📤 Saídas

| Variável | Tipo | Descrição |
|----------|------|-----------|
| `media` | `float` | Média da turma |
| `maior_nota` | `float` | Maior nota informada |

## ⚙️ Lógica

```text
para i de 0 até 4:
    lê nota
    soma += nota
    se nota > maior_nota → maior_nota = nota
media = soma / 5
```

## 🗺️ Fluxograma

```mermaid
flowchart TD
    A(["Início"]) --> B["i = 0, soma = 0, maior = 0"]
    B --> C{"i < 5?"}
    C -- Sim --> D[/"Lê nota"/]
    D --> E["soma += nota"]
    E --> G{"nota > maior?"}
    G -- Sim --> H["maior = nota"]
    G -- Não --> I["i++"]
    H --> I
    I --> C
    C -- Não --> J["media = soma / 5"]
    J --> O[/"Exibe média e maior nota"/]
    O --> F(["Fim"])
```

## ▶️ Como executar

```bash
# Compilar
gcc exercicio02.c -o exercicio02

# Executar (Windows)
.\exercicio02.exe

# Executar (Linux / macOS)
./exercicio02
```

## 💻 Exemplo de execução

```text
digite a nota do 1º estudante: 7
digite a nota do 2º estudante: 8
digite a nota do 3º estudante: 6.5
digite a nota do 4º estudante: 9
digite a nota do 5º estudante: 10
Média da turma: 8.10
Maior nota: 10.00
```

## 📄 Código-fonte

➡️ [`exercicio02.c`](./exercicio02.c)

---

<div align="center">

[⬅️ Anterior](../../Aula06/Exercicio01/README.md) · [📚 Aula 06](../README.md) · [🏠 Início](../../README.md) · [Próximo ➡️](../../Aula06/Exercicio03/README.md)

</div>
