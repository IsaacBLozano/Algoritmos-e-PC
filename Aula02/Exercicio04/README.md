<div align="center">

# 🧮 Aula 02 · Exercício 04

### Consumo Diário de Água

![C](https://img.shields.io/badge/C-00599C?style=flat-square&logo=c&logoColor=white)
![Aula](https://img.shields.io/badge/Aula-02-6f42c1?style=flat-square)
![Tema](https://img.shields.io/badge/Tema-Entrada%2C%20Sa%C3%ADda%20e%20Opera%C3%A7%C3%B5es%20Aritm%C3%A9ticas-2ea44f?style=flat-square)

[⬅️ Anterior](../../Aula02/Exercicio03/README.md) · [📚 Aula 02](../README.md) · [🏠 Início](../../README.md) · [Próximo ➡️](../../Aula02/Exercicio05/README.md)

</div>

---

## 🎯 Objetivo

Calcular a quantidade aproximada de água recomendada por dia a partir da massa corporal (35 ml por kg).

## 🧠 Conceitos aplicados

- Multiplicação por fator constante
- Conversão ml → litros embutida no fator (0,035)

**Bibliotecas:** `stdio.h` · `locale.h`

## 📥 Entradas

| Variável | Tipo | Descrição |
|----------|------|-----------|
| `kg` | `float` | Massa corporal em quilogramas |

## 📤 Saídas

| Variável | Tipo | Descrição |
|----------|------|-----------|
| `rec_agua` | `float` | Litros de água recomendados por dia |

## ⚙️ Lógica

```text
rec_agua = kg × 0,035
```

## ▶️ Como executar

```bash
# Compilar
gcc exercicio04.c -o exercicio04

# Executar (Windows)
.\exercicio04.exe

# Executar (Linux / macOS)
./exercicio04
```

## 💻 Exemplo de execução

```text
Digite a massa corporal (em kg):
 80
Quantidade aproximada de agua recomendada por dia:
2.8 Litros
```

## 📄 Código-fonte

➡️ [`exercicio04.c`](./exercicio04.c)

---

<div align="center">

[⬅️ Anterior](../../Aula02/Exercicio03/README.md) · [📚 Aula 02](../README.md) · [🏠 Início](../../README.md) · [Próximo ➡️](../../Aula02/Exercicio05/README.md)

</div>
