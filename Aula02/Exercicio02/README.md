<div align="center">

# 🧮 Aula 02 · Exercício 02

### Perímetro e Área do Jardim

![C](https://img.shields.io/badge/C-00599C?style=flat-square&logo=c&logoColor=white)
![Aula](https://img.shields.io/badge/Aula-02-6f42c1?style=flat-square)
![Tema](https://img.shields.io/badge/Tema-Entrada%2C%20Sa%C3%ADda%20e%20Opera%C3%A7%C3%B5es%20Aritm%C3%A9ticas-2ea44f?style=flat-square)

[⬅️ Anterior](../../Aula02/Exercicio01/README.md) · [📚 Aula 02](../README.md) · [🏠 Início](../../README.md) · [Próximo ➡️](../../Aula02/Exercicio03/README.md)

</div>

---

## 🎯 Objetivo

Ler o comprimento e a largura de um jardim retangular e calcular o seu perímetro e a sua área.

## 🧠 Conceitos aplicados

- Múltiplas entradas
- Duas expressões a partir dos mesmos dados
- `setlocale` para acentuação

**Bibliotecas:** `stdio.h` · `locale.h`

## 📥 Entradas

| Variável | Tipo | Descrição |
|----------|------|-----------|
| `comprimento` | `float` | Comprimento do jardim em metros |
| `largura` | `float` | Largura do jardim em metros |

## 📤 Saídas

| Variável | Tipo | Descrição |
|----------|------|-----------|
| `perimetro` | `float` | Perímetro do jardim (m) |
| `area` | `float` | Área do jardim (m²) |

## ⚙️ Lógica

```text
perimetro = 2 × comprimento + 2 × largura
area      = comprimento × largura
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
Qual é a medida do comprimento (em m)? 10
Qual é a largura do jardim ? 5
Perímetro do jardim: 30.00 m
Área do Jardim: 50.00 m
```

## 📄 Código-fonte

➡️ [`exercicio02.c`](./exercicio02.c)

---

<div align="center">

[⬅️ Anterior](../../Aula02/Exercicio01/README.md) · [📚 Aula 02](../README.md) · [🏠 Início](../../README.md) · [Próximo ➡️](../../Aula02/Exercicio03/README.md)

</div>
