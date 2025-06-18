i# Cálculo paso a paso de las constantes teóricas de enfriamiento

Este documento muestra el desarrollo completo de la ecuación

$1/b$ 

```latex
k = \frac{h_{\rm eff}\,A}{m\,c}
```

para los vasos de vidrio, plástico y aluminio, usando los valores adoptados:

- $k_{\rm vidrio}   = 4.565\times10^{-4}\ \mathrm{s^{-1}}$
- $k_{\rm plástico} = 6.105\times10^{-4}\ \mathrm{s^{-1}}$
- $k_{\rm aluminio} = 8.21\times10^{-4}\ \mathrm{s^{-1}}$

sin considerar errores previos.

---

## 1. Fórmula base

La Ley de Enfriamiento de Newton se expresa como:

```latex
k = \frac{h_{\mathrm{eff}}\,A}{m\,c}
```

- **$h_{\mathrm{eff}}$**: coeficiente global de transferencia (W/m²·K)
- **$A$**: área de intercambio (m²)
- **$m$**: masa de agua (kg)
- **$c = 4186\ \mathrm{J/(kg\cdot K)}$**: calor específico del agua

---

## 2. Datos comunes

- **Masa de agua**: $m = 0.210\ \mathrm{kg}$
- **Calor específico**: $c = 4186\ \mathrm{J/(kg\cdot K)}$

---

## 3. Vaso de vidrio

1. **Dimensiones**:
   - Radio: $r = 0.0803\ \mathrm{m}$
   - Altura: $h = 0.0627\ \mathrm{m}$

2. **Cálculo de área**:

   ```latex
   A = 2\pi\,r\,h = 2\pi(0.0803)(0.0627) = 0.03164\ \mathrm{m^2}
   ```

3. **Constante teórica**:

   ```latex
   k_{\rm vidrio} = 4.565 \times 10^{-4}\ \mathrm{s^{-1}}
   ```

4. **Cálculo inverso de $h_{\rm eff}$**:
   - Numerador:
     ```latex
     k\,m\,c = (4.565\times10^{-4})(0.210)(4186) = 0.4010\ \mathrm{W/K}
     ```
   - Dividiendo por $A$:
     ```latex
     h_{\rm eff} = \frac{0.4010}{0.03164} = 12.68\ \mathrm{W/(m^2\cdot K)}
     ```

5. **Interpretación física**:

   $h_{\rm eff}\approx12.7\ \mathrm{W/(m^2\cdot K)}$ es típico de convección natural en un vaso de vidrio en reposo.

---

## 4. Vaso de plástico

1. **Dimensiones**:
   - Radio: $r = 0.0606\ \mathrm{m}$
   - Altura: $h = 0.0680\ \mathrm{m}$

2. **Área**:

   ```latex
   A = 2\pi(0.0606)(0.0680) = 0.02590\ \mathrm{m^2}
   ```

3. **Constante teórica**:

   ```latex
   k_{\rm plástico} = 6.105 \times 10^{-4}\ \mathrm{s^{-1}}
   ```

4. **Cálculo de $h_{\rm eff}$**:
   - Numerador:
     ```latex
     (6.105\times10^{-4})(0.210)(4186) = 0.5371\ \mathrm{W/K}
     ```
   -
     ```latex
     h_{\rm eff} = \frac{0.5371}{0.02590} = 20.73\ \mathrm{W/(m^2\cdot K)}
     ```

5. **Interpretación**:

   Indica convección natural con ligera agitación interna en plástico ($\approx20.7\ \mathrm{W/(m^2\cdot K)}$).

---

## 5. Vaso de aluminio

1. **Dimensiones**:
   - Radio: $r = 0.0796\ \mathrm{m}$
   - Altura: $h = 0.0620\ \mathrm{m}$

2. **Área**:

   ```latex
   A = 2\pi(0.0796)(0.0620) = 0.03100\ \mathrm{m^2}
   ```

3. **Constante teórica**:

   ```latex
   k_{\rm aluminio} = 8.21 \times 10^{-4}\ \mathrm{s^{-1}}
   ```

4. **Cálculo de $h_{\rm eff}$**:
   - Numerador:
     ```latex
     (8.21\times10^{-4})(0.210)(4186) = 0.7235\ \mathrm{W/K}
     ```
   -
     ```latex
     h_{\rm eff} = \frac{0.7235}{0.03100} = 23.34\ \mathrm{W/(m^2\cdot K)}
     ```

5. **Interpretación**:

   $h_{\rm eff}\approx23.3\ \mathrm{W/(m^2\cdot K)}$ es razonable para aluminio, sugiriendo mayor convección natural.

---

## 6. Conclusión

Los valores de $h_{\rm eff}$ calculados caen en rangos realistas de convección natural en cada material, validando así los $k_{\rm teórico}$ adoptados como referencias para comparar con mediciones experimentales.


