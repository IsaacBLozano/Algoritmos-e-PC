<div align="center">

# 📐 Aula 03 · Exercício 07

### Média Aritmética de Quatro Valores

![C](https://img.shields.io/badge/C-00599C?style=flat-square&logo=c&logoColor=white)
![Aula](https://img.shields.io/badge/Aula-03-6f42c1?style=flat-square)
![Tema](https://img.shields.io/badge/Tema-Express%C3%B5es%20e%20Fun%C3%A7%C3%B5es%20Matem%C3%A1ticas-2ea44f?style=flat-square)

[⬅️ Anterior](../../Aula03/Exercicio06/README.md) · [📚 Aula 03](../README.md) · [🏠 Início](../../README.md) · [Próximo ➡️](../../Aula03/Exercicio09/README.md)

</div>

---

## 🎯 Objetivo

Ler quatro valores reais e exibir a média aritmética entre eles.

## 🧠 Conceitos aplicados

- Múltiplas leituras
- Média aritmética simples

**Bibliotecas:** `stdio.h` · `locale.h` · `math.h`

## 📥 Entradas

| Variável | Tipo | Descrição |
|----------|------|-----------|
| `num1 … num4` | `float` | Os quatro valores |

## 📤 Saídas

| Variável | Tipo | Descrição |
|----------|------|-----------|
| `media` | `float` | Média aritmética dos quatro valores |

## ⚙️ Lógica

```text
media = (num1 + num2 + num3 + num4) / 4
```

## ▶️ Como executar

```bash
# Compilar
gcc exercicio07.c -o exercicio07 -lm

# Executar (Windows)
.\exercicio07.exe

# Executar (Linux / macOS)
./exercicio07
```

> [!NOTE]
> Este programa utiliza a biblioteca `math.h`. Em Linux/macOS, a flag `-lm` é necessária para vincular a biblioteca matemática. No Windows (MinGW / Code::Blocks) ela é opcional.

## 💻 Exemplo de execução

```text
Digite o primeiro valor: 7
Digite o segundo valor:8
Digite o terceiro valor:9
Digite o quarto valor:10
A média aritmética é 8.50.
```

## 📄 Código-fonte

➡️ [`exercicio07.c`](./exercicio07.c)

---

<div align="center">

[⬅️ Anterior](../../Aula03/Exercicio06/README.md) · [📚 Aula 03](../README.md) · [🏠 Início](../../README.md) · [Próximo ➡️](../../Aula03/Exercicio09/README.md)

</div>
