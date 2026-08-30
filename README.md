# 🚀 Proyecto: (Sistema Proyecto) — LPR 2026

## Escuela de Educación Secundaria Técnica N° 10 "El primer vengador" — Vicente López

* **Curso:** 5° Año — Especialidad Informática / Programación
* **Materia:** Laboratorio de Programación (LPR)
* **Profesor:** Prof. York
* **Estudiante:** Rogers Steve

---

## 📌 Descripción de la Actividad

Esta actividad corresponde a la configuración inicial del Entorno de Desarrollo Integrado (IDE) y la primera compilación nativa en C++. Los estudiantes configuran su espacio de trabajo en Visual Studio Code, estructuran el repositorio profesionalmente con control de versiones en Git, y compilan su primer binario de consola (`holamundo.exe`) utilizando el compilador GCC/G++ en Windows 10/11.

---

## 👥 Integrantes (Entrega Individual)

* **Estudiante:** Rogers Steve
* **Curso / Grupo:** 5° — Grupo A/B
* **Especialidad:** Técnico en Informática/Programación

---

## 🛠️ Requisitos e Instalación

Para compilar y ejecutar este proyecto en tu computadora con Windows 10/11, necesitas contar con:

1. **Visual Studio Code:** Con las extensiones oficiales `C/C++` (Microsoft) y `C/C++ Extension Pack`.
2. **Compilador MinGW (GCC/G++):** Configurado correctamente en las variables de entorno (`PATH` del sistema).
3. **Git for Windows:** Para la gestión del repositorio y sincronización con GitHub.

---

## 🏃 Comandos de PowerShell para Windows 10/11 en Visual Studio Code (Mejorado)

Asegúrate de abrir la terminal integrada de VS Code (`Ctrl + Ñ`) y estar parado en la raíz de la carpeta `HOLAMUNDO`.

1. **Verificar que el compilador esté disponible en el sistema:**
   ```powershell
   g++ --version
   
2. **Compilar el código fuente modular:**
   ```powershell
   g++ ./src/main.cpp -o ./src/sistema.exe
   
3. **Ejecutar la aplicación:**
   ```powershell
   ./src/sistema.exe