# Sistemas Informáticos Industriales

![UPM](https://img.shields.io/badge/UPM-ETSIDI-red)
![Curso](https://img.shields.io/badge/Curso-2026--2027-blue)
![Lenguaje](https://img.shields.io/badge/C-Programming-00599C?logo=c)
![Linux](https://img.shields.io/badge/Linux-Ubuntu-E95420?logo=ubuntu)
![Git](https://img.shields.io/badge/Git-Version%20Control-F05032?logo=git)

Material docente de la asignatura **Sistemas Informáticos Industriales** de la **Escuela Técnica Superior de Ingeniería y Diseño Industrial (ETSIDI)** de la **Universidad Politécnica de Madrid (UPM)**.

---


## 📖 Descripción

# Sistemas Informáticos Industriales

**Asignatura:** Sistemas Informáticos Industriales
**Autor:** Pablo Muñoz Moreno

## Descripción

Este repositorio contiene el código de un juego de tenis interactivo en modo local para dos jugadores, desarrollado en C++ con las bibliotecas gráficas OpenGL y GLUT. El proyecto se desarrolla de forma incremental a lo largo de las prácticas de la asignatura, trabajando con el sistema operativo Linux, la compilación con CMake/Make, el control de versiones con Git y la comunicación entre procesos.

## Práctica 1: Entorno de desarrollo bajo Linux

- Familiarización con Linux y sus comandos básicos.
- Uso de Git (control de versiones), CMake (configuración de la compilación) y Make (compilación).
- Movimiento de las raquetas y de la esfera, haciendo el juego interactivo.
- Controles: raqueta izquierda con `w` / `s`, raqueta derecha con `o` / `l`.

## Práctica 2: Comunicación mediante tuberías con nombre (FIFO)

- Nuevo programa **logger**, que crea la tubería con nombre (`mkfifo`), la abre en modo lectura y muestra por pantalla los datos recibidos. Al terminar, la cierra y la destruye (`close` y `unlink`).
- El juego **tenis** abre la tubería en modo escritura (en `Init()` de `Mundo`) y envía al logger el jugador y su puntuación total cada vez que se marca un punto (en `OnTimer()`). La tubería se cierra en el destructor de `Mundo`.
- Tanto `tenis` como `logger` terminan cuando un jugador alcanza 3 puntos.
- Se ha añadido el ejecutable `logger` en el `CMakeLists.txt`.

### Compilación y ejecución

    mkdir build && cd build
    cmake ..
    make

Primero se debe ejecutar el logger y, en otra terminal, el juego:

    ./logger
    ./tenis

### Ejemplo de salida del logger

    Jugador 1 marca 1 punto, lleva un total de 1 puntos.
    Jugador 2 marca 1 punto, lleva un total de 1 puntos.
    Jugador 2 marca 1 punto, lleva un total de 2 puntos.

---

## 📚 Wiki

La documentación detallada de cada una de las prácticas se encuentra en la Wiki del repositorio.

➡️ **Acceso a la Wiki:**  
https://github.com/raquelcedazo/sistemas-informaticos-industriales/wiki

---

## 🎓 Profesorado

Asignatura impartida por el **Departamento de Ingeniería Eléctrica, Electrónica, Automática y Física Aplicada** de la **Universidad Politécnica de Madrid**:

- **Raquel Cedazo** *(coordinadora de las prácticas)*
- **David Álvarez**
- **Imanol Izcara**

---

## 🤝 Contribuciones

Este repositorio tiene finalidad exclusivamente docente.

Si detectas algún error o tienes alguna sugerencia de mejora, puedes comunicarlo al profesorado de la asignatura.
