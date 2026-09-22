<div align="center">

# 📐 Aula 03 · Exercício 04

### Consumo Mensal de Energia

![C](https://img.shields.io/badge/C-00599C?style=flat-square&logo=c&logoColor=white)
![Aula](https://img.shields.io/badge/Aula-03-6f42c1?style=flat-square)
![Tema](https://img.shields.io/badge/Tema-Express%C3%B5es%20e%20Fun%C3%A7%C3%B5es%20Matem%C3%A1ticas-2ea44f?style=flat-square)

[⬅️ Anterior](../../Aula03/Exercicio02/README.md) · [📚 Aula 03](../README.md) · [🏠 Início](../../README.md) · [Próximo ➡️](../../Aula03/Exercicio06/README.md)

</div>

---

## 🎯 Objetivo

Estimar o consumo mensal (em kWh) de um equipamento a partir da sua potência e das horas de uso diárias.

## 🧠 Conceitos aplicados

- Fórmula de consumo elétrico
- Conversão Wh → kWh (÷ 1000)
- Mês considerado com 30 dias

**Bibliotecas:** `stdio.h` · `locale.h`

## 📥 Entradas

| Variável | Tipo | Descrição |
|----------|------|-----------|
| `pont` | `float` | Potência do equipamento em watts (W) |
| `hora_fun` | `float` | Horas de uso por dia |

## 📤 Saídas

| Variável | Tipo | Descrição |
|----------|------|-----------|
| `consumo` | `float` | Consumo mensal em kWh |

## ⚙️ Lógica

```text
consumo = (potencia × horas_por_dia × 30) / 1000
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
 Potência do equipamento (W)? 1000
Horas de uso por dia?2
Consumo mensal: 60.00
```

## 📄 Código-fonte

➡️ [`exercicio04.c`](./exercicio04.c)

---

<div align="center">

[⬅️ Anterior](../../Aula03/Exercicio02/README.md) · [📚 Aula 03](../README.md) · [🏠 Início](../../README.md) · [Próximo ➡️](../../Aula03/Exercicio06/README.md)

</div>
