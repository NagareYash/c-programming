**Compiling a multi-file project in your IDE:**

**Code::Blocks (Windows):**
- Go to `File → New → Project → Console Application → C`
- After the project is created, right-click the project in the left panel → `Add files...`
- Add all three files: `main.c`, `calc.c`, and `calc.h`
- Press `F9` (Build and Run) — Code::Blocks compiles and links all `.c` files automatically

**Xcode (Mac):**
- Go to `File → New → Project → macOS → Command Line Tool → Language: C`
- In the project navigator on the left, right-click your project folder → `New File...` → `Header File` for `calc.h`, and `C File` for `calc.c`
- Replace the default `main.c` content with your version
- Press `Cmd + R` (Build and Run) — Xcode compiles all source files in the project together

In both IDEs, you **do not** need to manually compile or link anything — the IDE handles everything as long as all three files are part of the project. The `#include "calc.h"` line in your `.c` files tells the preprocessor where to find the declarations.