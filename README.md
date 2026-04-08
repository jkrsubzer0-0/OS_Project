# 🖥️ Bare Metal OS - Hello World

## 📌 Project Overview

This project demonstrates a simple **Bare Metal Operating System** that runs directly on hardware without using any existing OS.

It uses a **bootloader written in Assembly** and a **kernel written in C** to display *"Hello World"* on the screen.

---

## ⚙️ How It Works

1. BIOS loads the bootloader into memory (0x7C00)
2. Bootloader executes and initializes the system
3. Kernel is loaded into memory
4. Kernel directly writes to video memory (0xB8000)
5. Output is displayed on the screen

---

## 📂 Project Structure

* `bootloader.s` → Bootloader (Assembly code)
* `kernel.c` → Kernel (C code)
* `Makefile` → Automates build and run process
* `linker.ld` → Defines memory layout

---

## 🧰 Tools Used

* NASM → Assembler
* GCC → Compiler
* LD → Linker
* QEMU → Emulator

---

## 🚀 How to Run

### Step 1: Build the OS

make

### Step 2: Run the OS

make run

---

## 🧹 Clean Build Files

make clean

---

## 🖥️ Output

Displays:
Hello World

---

## 📚 Concepts Covered

* Booting process
* BIOS interrupts
* Memory addressing
* Assembly and C integration
* Direct hardware interaction

---

## ⚠️ Limitations

* No multitasking
* No file system
* No user interface

---

## 🚀 Future Improvements

* Add keyboard input
* Implement simple shell
* Switch to graphics mode

---

## 👨‍💻 Author

Vignesh R.S
Dharun S.V
Kanishwar.S

---

## ⭐ Note

This project is created for learning purposes to understand how operating systems work at a low level.
