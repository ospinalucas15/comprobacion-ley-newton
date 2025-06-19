import numpy as np
import matplotlib.pyplot as plt

# Datos experimentales para el vaso de aluminio
t_meas = np.arange(0, 601, 10)
T_meas = np.array([
    80.62, 80.12, 79.56, 78.87, 78.31, 77.87, 77.37, 76.87, 76.37, 75.75,
    75.25, 74.75, 74.37, 73.87, 73.44, 73.00, 72.56, 72.06, 71.69, 71.25,
    70.87, 70.50, 70.25, 69.87, 69.44, 68.94, 68.75, 68.44, 67.94, 67.50,
    66.87, 66.50, 66.25, 66.31, 66.06, 65.75, 65.44, 65.12, 64.81, 64.50,
    64.19, 63.81, 63.63, 63.31, 63.00, 62.69, 62.38, 62.13, 61.69, 61.44,
    61.25, 60.88, 60.56, 60.31, 60.00, 59.81, 59.56, 59.44, 59.25, 58.94,
    58.69
])

# Parámetros teóricos
material = "Aluminio"
T_amb = 25.0             # Temperatura ambiente (°C)
T0 = T_meas[0]           # Temperatura inicial (°C)
k_t = 8.21e-4            # Constante teórica para aluminio (1/s)

# Curva teórica
t_th = np.linspace(0, t_meas.max(), 300)
T_th = T_amb + (T0 - T_amb) * np.exp(-k_t * t_th)

# Gráfico teórico
plt.figure()
plt.plot(t_th, T_th, label=f'{material} - Teórico (kₜ = {k_t:.3e} s⁻¹)')
plt.title('Curva Teórica de Enfriamiento')
plt.xlabel('Tiempo (s)')
plt.ylabel('Temperatura (°C)')
plt.legend()
plt.grid(True)
plt.show()

# Gráfico experimental
plt.figure()
plt.scatter(t_meas, T_meas, label=f'{material} - Experimental')
plt.title('Datos Experimentales de Enfriamiento')
plt.xlabel('Tiempo (s)')
plt.ylabel('Temperatura (°C)')
plt.legend()
plt.grid(True)
plt.show()

