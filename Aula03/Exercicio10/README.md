<div align="center">

# 📐 Aula 03 · Exercício 10

### Alcance de um Lançamento Oblíquo

![C](https://img.shields.io/badge/C-00599C?style=flat-square&logo=c&logoColor=white)
![Aula](https://img.shields.io/badge/Aula-03-6f42c1?style=flat-square)
![Tema](https://img.shields.io/badge/Tema-Express%C3%B5es%20e%20Fun%C3%A7%C3%B5es%20Matem%C3%A1ticas-2ea44f?style=flat-square)

[⬅️ Anterior](../../Aula03/Exercicio09/README.md) · [📚 Aula 03](../README.md) · [🏠 Início](../../README.md) · [Próximo ➡️](../../Aula04/Exercicio01/README.md)

</div>

---

## 🎯 Objetivo

Estimar o alcance horizontal de um projétil a partir da velocidade inicial e do ângulo de lançamento.

## 🧠 Conceitos aplicados

- Física: lançamento oblíquo
- Conversão graus → radianos
- `sin` e `pow` da `math.h`

**Bibliotecas:** `stdio.h` · `locale.h` · `math.h`

## 📥 Entradas

| Variável | Tipo | Descrição |
|----------|------|-----------|
| `v_inicial` | `float` | Velocidade inicial em m/s |
| `angulo` | `float` | Ângulo de lançamento em graus |

## 📤 Saídas

| Variável | Tipo | Descrição |
|----------|------|-----------|
| `alcance` | `float` | Alcance horizontal em metros |

## ⚙️ Lógica

```text
radiano = angulo × π / 180            (π ≈ 3,14)
alcance = (v_inicial² × sen(2 × radiano)) / 9,8
```

## ▶️ Como executar

```bash
# Compilar
gcc exercicio10.c -o exercicio10 -lm

# Executar (Windows)
.\exercicio10.exe

# Executar (Linux / macOS)
./exercicio10
```

> [!NOTE]
> Este programa utiliza a biblioteca `math.h`. Em Linux/macOS, a flag `-lm` é necessária para vincular a biblioteca matemática. No Windows (MinGW / Code::Blocks) ela é opcional.

## 💻 Exemplo de execução

```text
Qual a velocidade inicial (m/s): 20
Qual o ângulo de lançamento em graus: 45
O alcance horizontal estimado é 40.82 metros.
```

## 📄 Código-fonte

➡️ [`exercicio10.c`](./exercicio10.c)

---

<div align="center">

[⬅️ Anterior](../../Aula03/Exercicio09/README.md) · [📚 Aula 03](../README.md) · [🏠 Início](../../README.md) · [Próximo ➡️](../../Aula04/Exercicio01/README.md)

</div>
