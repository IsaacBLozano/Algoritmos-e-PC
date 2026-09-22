<div align="center">

# 📐 Aula 03 · Exercício 02

### Minutos Desde o Início do Dia

![C](https://img.shields.io/badge/C-00599C?style=flat-square&logo=c&logoColor=white)
![Aula](https://img.shields.io/badge/Aula-03-6f42c1?style=flat-square)
![Tema](https://img.shields.io/badge/Tema-Express%C3%B5es%20e%20Fun%C3%A7%C3%B5es%20Matem%C3%A1ticas-2ea44f?style=flat-square)

[⬅️ Anterior](../../Aula03/Exercicio01/README.md) · [📚 Aula 03](../README.md) · [🏠 Início](../../README.md) · [Próximo ➡️](../../Aula03/Exercicio04/README.md)

</div>

---

## 🎯 Objetivo

Ler um horário (horas e minutos) e informar quantos minutos já se passaram desde a meia-noite.

## 🧠 Conceitos aplicados

- Aritmética com inteiros
- Conversão horas → minutos

**Bibliotecas:** `stdio.h` · `locale.h`

## 📥 Entradas

| Variável | Tipo | Descrição |
|----------|------|-----------|
| `horas` | `int` | Hora atual (0 a 23) |
| `min` | `int` | Minutos atuais (0 a 59) |

## 📤 Saídas

| Variável | Tipo | Descrição |
|----------|------|-----------|
| `total_min` | `int` | Minutos decorridos desde 00:00 |

## ⚙️ Lógica

```text
total_min = (horas × 60) + min
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
Hora? 14
Minutos? 30
Já se passaram 870 minutos desde o início do dia.
```

## 📄 Código-fonte

➡️ [`exercicio02.c`](./exercicio02.c)

---

<div align="center">

[⬅️ Anterior](../../Aula03/Exercicio01/README.md) · [📚 Aula 03](../README.md) · [🏠 Início](../../README.md) · [Próximo ➡️](../../Aula03/Exercicio04/README.md)

</div>
