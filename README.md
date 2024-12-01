# Jupyter Notebook Launcher

**Jupyter Notebook Launcher** is a lightweight utility designed to simplify the process of starting Jupyter Notebook on Windows. It provides a seamless way to launch Jupyter Notebook without needing to open a command prompt or terminal. The launcher runs silently without popping up any command line window, offering a clean user experience.

---

## Features
- **No Command Line Popup**: The launcher is built with a Windows GUI subsystem, ensuring that no terminal window appears when it runs.
- **Custom Icon**: The `.exe` file includes a custom Jupyter Notebook icon for better aesthetics.
- **Convenient Deployment**: Use the source code to customize your launcher or download the precompiled executable from the releases.

---

## How to Use

### Option 1: Download the Executable
1. Navigate to the [Releases](https://github.com/Bruce-JiYuefeng/Jupyter-Notebook-Launcher/releases) section of this repository.
2. Download the precompiled `.exe` file (e.g., `jupyter notebook.exe`).
3. Double-click the executable to start Jupyter Notebook in your default web browser.

---

### Option 2: Deploy Locally from Source
1. Clone the repository:
   ```bash
   git clone https://github.com/Bruce-JiYuefeng/Jupyter-Notebook-Launcher.git
   cd Jupyter-Notebook-Launcher
2. If you want to create a new exe file. run the command: 
    ```bash
    windres resource.rc -O coff -o resource.o
    g++ "jupyter notebook.cpp" resource.o -o "jupyter notebook.exe" -mwindows
