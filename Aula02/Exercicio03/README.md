<div align="center">

# 🧮 Aula 02 · Exercício 03

### Tempo de Gestação em Meses

![C](https://img.shields.io/badge/C-00599C?style=flat-square&logo=c&logoColor=white)
![Aula](https://img.shields.io/badge/Aula-02-6f42c1?style=flat-square)
![Tema](https://img.shields.io/badge/Tema-Entrada%2C%20Sa%C3%ADda%20e%20Opera%C3%A7%C3%B5es%20Aritm%C3%A9ticas-2ea44f?style=flat-square)

[⬅️ Anterior](../../Aula02/Exercicio02/README.md) · [📚 Aula 02](../README.md) · [🏠 Início](../../README.md) · [Próximo ➡️](../../Aula02/Exercicio04/README.md)

</div>

---

## 🎯 Objetivo

Converter a quantidade de semanas de gestação em um valor aproximado de meses.

## 🧠 Conceitos aplicados

- Conversão de unidades
- Precisão de saída com `%.1f`

**Bibliotecas:** `stdio.h` · `locale.h`

## 📥 Entradas

| Variável | Tipo | Descrição |
|----------|------|-----------|
| `semanas` | `float` | Quantidade de semanas de gestação |

## 📤 Saídas

| Variável | Tipo | Descrição |
|----------|------|-----------|
| `meses` | `float` | Tempo aproximado de gestação em meses |

## ⚙️ Lógica

```text
meses = (semanas × 7) / 30
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
Qual a quantidade de semanas de gestação? 40
tempo de gestação aproximado:
9.3 meses
```

## 📄 Código-fonte

➡️ [`exercicio03.c`](./exercicio03.c)

---

<div align="center">

[⬅️ Anterior](../../Aula02/Exercicio02/README.md) · [📚 Aula 02](../README.md) · [🏠 Início](../../README.md) · [Próximo ➡️](../../Aula02/Exercicio04/README.md)

</div>
