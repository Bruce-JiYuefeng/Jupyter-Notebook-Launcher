#include <windows.h>

int main() {
    // Use ShellExecute to start Jupyter Notebook in a hidden window
    ShellExecute(NULL, "open", "jupyter", "notebook", NULL, SW_HIDE);
    return 0;
}
