<div align="center">

# 📐 Aula 03 · Exercício 06

### Orçamento de Revestimento

![C](https://img.shields.io/badge/C-00599C?style=flat-square&logo=c&logoColor=white)
![Aula](https://img.shields.io/badge/Aula-03-6f42c1?style=flat-square)
![Tema](https://img.shields.io/badge/Tema-Express%C3%B5es%20e%20Fun%C3%A7%C3%B5es%20Matem%C3%A1ticas-2ea44f?style=flat-square)

[⬅️ Anterior](../../Aula03/Exercicio04/README.md) · [📚 Aula 03](../README.md) · [🏠 Início](../../README.md) · [Próximo ➡️](../../Aula03/Exercicio07/README.md)

</div>

---

## 🎯 Objetivo

Calcular a área a ser revestida, a quantidade de caixas de piso necessárias (cada caixa cobre 2,5 m²) e o custo total da compra.

## 🧠 Conceitos aplicados

- `ceil` para arredondar para cima (não se compra meia caixa)
- Encadeamento de cálculos

**Bibliotecas:** `stdio.h` · `locale.h` · `math.h`

## 📥 Entradas

| Variável | Tipo | Descrição |
|----------|------|-----------|
| `largura` | `float` | Largura da área em metros |
| `comprimento` | `float` | Comprimento da área em metros |
| `valor` | `float` | Preço de cada caixa (R$) |

## 📤 Saídas

| Variável | Tipo | Descrição |
|----------|------|-----------|
| `area_total` | `float` | Área total em m² |
| `quant_caixa` | `float` | Quantidade de caixas (arredondada para cima) |
| `custo` | `float` | Custo total da compra (R$) |

## ⚙️ Lógica

```text
area_total  = largura × comprimento
quant_caixa = ceil(area_total / 2,5)
custo       = quant_caixa × valor
```

## ▶️ Como executar

```bash
# Compilar
gcc exercicio06.c -o exercicio06 -lm

# Executar (Windows)
.\exercicio06.exe

# Executar (Linux / macOS)
./exercicio06
```

> [!NOTE]
> Este programa utiliza a biblioteca `math.h`. Em Linux/macOS, a flag `-lm` é necessária para vincular a biblioteca matemática. No Windows (MinGW / Code::Blocks) ela é opcional.

## 💻 Exemplo de execução

```text
 Qual é a largura da área (em metros)?3
Qual é o comprimento da área em metros? 4.5
Qual é o valor de cada caixa?45.90
Área total a ser revestida: 13.50 m²
Quantidade de caixas necessárias: 6
Custo total da compra: R$ 275.40
```

## 📄 Código-fonte

➡️ [`exercicio06.c`](./exercicio06.c)

---

<div align="center">

[⬅️ Anterior](../../Aula03/Exercicio04/README.md) · [📚 Aula 03](../README.md) · [🏠 Início](../../README.md) · [Próximo ➡️](../../Aula03/Exercicio07/README.md)

</div>
