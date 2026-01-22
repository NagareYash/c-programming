## Downloading Xcode

1. On your Mac computer, open the app store.

2. Next, in the top left corner of the App Store, there is a search engine. Search for [Xcode](https://apps.apple.com/us/app/xcode/id497799835?mt=12).

3. Select the Xcode application from the search results.

4. Review the available Xcode version.

5. If the Xcode version you require is higher than the Xcode version available in the App Store, you need to update your computer.

6. Select download. Be patient; depending on your download speeds, this could take a couple of hours.

![Screenshot: App Store](https://triodocs.org/install/build/mac/img/xc-appstore.png)


7. the Xcode application will be available from your Launchpad or Applications file once the download is complete.

## Creating Project

1. Open Xcode from your Applications folder or Launchpad.

2. From the menu bar, select **File → New → Project**.

![[xcode menu.png]]

3. In the template selection window, choose **macOS**.

4. Select **Command Line Tool** from the available templates.​

![[xcode template.png]]
3. Click **Next**.

4. Configure your project settings:
	- **Product Name**: Enter your project name (e.g., "c-programming-lab")
	- **Language**: Select **C** from the dropdown menu​
	- **Organization Identifier**: Enter any identifier (e.g., com.yourname)

![[xcode configurations.png]]

5. Choose location where to save your project

6. Click **Create** to finish.

## Writing and Running Your Code

1. Once the project is created, you will see **main.c** in the left side panel (project navigator).​

2. Click on **main.c** to open it in the editor.

![[xcode main.c.png]]

3. Write or edit your C code in the main editor window.

4. To create a new C file, select **File → New → Empty File**, then rename the file to `filename.c` (e.g., "myprogram.c").

![[xcode newfile.png]]

5. Press **⌘ + R** to compile and run your program.​

6. Alternatively, click the triangular Play button in the top-left corner.​

![[xcode run.png]]

7. Your program output will appear in the console at the bottom of the Xcode window.​

8. To compile without running, press **⌘ + B**.
