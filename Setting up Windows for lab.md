## Downloading CodeBlocks

1. On your Windows computer, open your web browser.

2. Navigate to the Code::Blocks [download](https://www.codeblocks.org/downloads/binaries/) page or use this [direct link](https://sourceforge.net/projects/codeblocks/files/Binaries/25.03/Windows/codeblocks-25.03mingw-setup.exe).​

3. Download the installer with MinGW included: **codeblocks-25.03mingw-setup.exe**. This version includes the GCC compiler needed to compile C programs.

![codeblock download](images/codeblock%20download.png)

4. Click the download link on SourceForge to begin the download.​

5. Wait for the download to complete. Once the download is complete, locate and open the Code::Blocks setup file in your Downloads folder.

6. Double-click on the installer. If prompted, click **Yes** to grant administrative privileges.

7. Click **Next** when the installer window appears.

![codeblock setup](images/codeblock%20setup.png)

4. Click **I Agree** to accept the license agreement.

5. Click **Next** (**Make sure MinGW Compiler Suite is checked** ✅) and Select your destination folder (the default location is recommended) and then click **Install**.

![codeblock mingw](images/codeblock%20mingw.png)

6. Wait for the installation to complete. Once installation is finished, check the box that says **Run Code::Blocks now**.

7. Click **Next** and then click **Finish**.

8. On first launch, Code::Blocks will display a compiler auto-detection window.

9. Scroll down and verify that **GNU GCC Compiler** shows "Detected" status.

10. Click **OK** to confirm 

## Creating Project

1. Open Code::Blocks from the Start Menu or desktop.

2. From the menu bar, select **File → New → Project**.​

![codeblock project](images/codeblock%20project.png)

3. In the project wizard window, select **Console Application** from the available templates.​​

![codeblock template](images/codeblock%20template.png)

4. Click **Go**.​

5. The console application wizard will appear. Click **Next**.

6. Select **C** as your programming language (not C++).​

![codeblock language c](images/codeblock%20language%20c.png)

7. Click **Next**.

8. Configure your project settings:
    
    - **Project title**: Enter your project name (e.g., "c-programming-lab")
    - **Folder to create project in**: Click **Browse** and choose where to save your project​​
    - Code::Blocks will automatically fill in the project filename

![codeblock configurations](images/codeblock%20configurations.png)

9. Click **Next**.

10. Leave the default compiler settings (GNU GCC Compiler) and click **Finish**.​

## Writing and Running Your Code

1. Once the project is created, you will see your project name in the left side panel.

2. Expand the project folder by clicking the **+** sign.

3. Expand the **Sources** subfolder to see **main.c**.​

4. Double-click on **main.c** to open it in the editor.​

![codeblock sidepanel](images/codeblock%20sidepanel.png)

5. Write or edit your C code in the main editor window.

6. To create a new C file, select **File → New → Empty File**, then save it with a `.c` extension (e.g., "myprogram.c").​

![codeblock new file](images/codeblock%20new%20file.png)

7. To compile and run your program, click the **Build and Run** button (yellow gear with green play button) in the toolbar.​

![codeblock build and run](images/codeblock%20build%20and%20run.png)

8. Alternatively, press **F9** to build and run.​

9. Your program output will appear in a separate console window.

10. To compile without running, click the **Build** button (yellow gear icon) or press **Ctrl + F9**.