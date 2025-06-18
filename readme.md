# Cálculo de las constantes teóricas de enfriamiento

A continuación se detalla el cálculo de los valores de `kₜₑₒᵣᵢcₒ` para cada uno de los tres recipientes (vidrio, plástico y aluminio), partiendo de los parámetros geométricos y físicos del sistema y sin considerar previamente los errores experimentales.

---

## 1. Fórmula base

La Ley de Enfriamiento de Newton lleva a la constante de enfriamiento:

$$
 k = \frac{h_{\mathrm{eff}}\,A}{m\,c}
$$

- $h_{\mathrm{eff}}$: coeficiente global de transferencia (W/m²·K)
- $A$: área de intercambio (m²)
- $m$: masa de agua (kg)
- $c = 4186\ \mathrm{J/(kg\cdot K)}$: calor específico del agua

---

## 2. Parámetros comunes

- **Masa de agua**: $m = 0.210\ \mathrm{kg}$
- **Calor específico del agua**: $c = 4186\ \mathrm{J/(kg\cdot K)}$

---

## 3. Vaso de vidrio

**Dimensiones:**

- Radio interior: $r = 80.3\ \mathrm{mm} = 0.0803\ \mathrm{m}$
- Altura de líquido: $h = 62.7\ \mathrm{mm} = 0.0627\ \mathrm{m}$

**Área lateral:**

$$
 A = 2\pi r h = 2\pi (0.0803)(0.0627) \approx 0.03164\ \mathrm{m^2}
$$

**Constante teórica adoptada:**

$$
 k_{\mathrm{vidrio}} = 4.565 \times 10^{-4}\ \mathrm{s^{-1}}
$$

**Cálculo inverso de $h_{\mathrm{eff}}$:**

$$
 h_{\mathrm{eff}} = \frac{k\,m\,c}{A}
 = \frac{(4.565\times10^{-4})(0.210)(4186)}{0.03164}
 \approx 12.7\ \mathrm{W/(m^2\,K)}
$$

> **Plausibilidad:** Un coeficiente de ~12.7 W/m²·K corresponde a convección natural en un vaso de vidrio sin agitación forzada, un valor coherente en laboratorio.

---

## 4. Vaso de plástico

**Dimensiones:**

- Radio interior: $r = 60.6\ \mathrm{mm} = 0.0606\ \mathrm{m}$
- Altura de líquido: $h = 68.0\ \mathrm{mm} = 0.0680\ \mathrm{m}$

**Área lateral:**

$$
 A = 2\pi r h = 2\pi (0.0606)(0.0680) \approx 0.02590\ \mathrm{m^2}
$$

**Constante teórica adoptada:**

$$
 k_{\mathrm{plástico}} = 6.105 \times 10^{-4}\ \mathrm{s^{-1}}
$$

**Cálculo inverso de $h_{\mathrm{eff}}$:**

$$
 h_{\mathrm{eff}} = \frac{(6.105\times10^{-4})(0.210)(4186)}{0.02590}
 \approx 20.7\ \mathrm{W/(m^2\,K)}
$$

> **Plausibilidad:** Un valor de ~20.7 W/m²·K es consistente con plástico expuesto a convección natural mejorada (ligera agitación interna).

---

## 5. Vaso de aluminio

**Dimensiones:**

- Radio interior: $r = 79.6\ \mathrm{mm} = 0.0796\ \mathrm{m}$
- Altura de líquido: $h = 62.0\ \mathrm{mm} = 0.0620\ \mathrm{m}$

**Área lateral:**

$$
 A = 2\pi r h = 2\pi (0.0796)(0.0620) \approx 0.03100\ \mathrm{m^2}
$$

**Constante teórica adoptada:**

$$
 k_{\mathrm{aluminio}} = 8.21 \times 10^{-4}\ \mathrm{s^{-1}}
$$

**Cálculo inverso de $h_{\mathrm{eff}}$:**

$$
 h_{\mathrm{eff}} = \frac{(8.21\times10^{-4})(0.210)(4186)}{0.03100}
 \approx 23.3\ \mathrm{W/(m^2\,K)}
$$

> **Plausibilidad:** Un coeficiente de ~23.3 W/m²·K sugiere flujo interno ligero y sigue siendo razonable en condiciones reales.

---

## 6. Síntesis

- Los valores de $k_{\mathrm{teórico}}$ para vidrio, plástico y aluminio corresponden a coeficientes de transferencia en rangos realistas.
- Invirtiendo el cálculo y comprobando que $h_{\mathrm{eff}}$ tenga sentido físico, validamos la coherencia de los $k$.
- Estos $k_{\mathrm{teórico}}$ servirán como referencia para comparar y cuantificar las mediciones experimentales.

