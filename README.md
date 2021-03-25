
# JAVA BY DURGA SIR 
### 1. Java Source File Structure 
- 	Java file contain any number of class but only but atmost one can be decleared as public.
- 	If there is no public class the we can use any name for java program .
- 	If there is a public class name of the program should be a class name.
- 	Java file name is depend on the name of the public class.
- 	We can use 0 or 1 public class in java file.

IMAGE 1

### 2. Java Source File Structure [Import Statement ](https://www.youtube.com/watch?v=5NQjLBuNL0I&list=RDCMUCbjozK_PYCTLEluFlrJ8UZg&t=1461s "Import Statement ")
There is two types of import statement.
-Implicit import 
`import java.util*`
-Explicit import 
`import java.util.ArrayList`

- java.lang package is already imported in program .
- Default package are not need to import like self directory package.
- Using Explicit import is a good practice for writing a code.
- Whenever we import a package all the all the classes and interfaces present in that packege is by default avalible but not a sub package class.
- If you want to use any class in sub package then complesary we have to write import statement until subpackage level. 

if there is class is java -> util -> regex -> Pattern 
- then you have to import `import java.util.regx.*`

### 3.Java Source File Structure Package
- Package is the encapsulation/groping mechanism to group related calsses and interfaces into a single unit.
- With the help of package we can avoid naming conflict.
- Maintainability
- Security

##### Writing Package in java
- package is keyword in java.
- To declear the package we write in header of package `package com.mech2it.ocja`
- This is the universal naming conventation that is used to name the package.
- We use domain name because it has its own unique identity 
- For compiling the java package we cannot use `javac filename.java`.
- We use `javac -d . filename.java`
- -d is stand for the destination where you want to save the .class file.
- So the class file will save in /com/mech2it/ocja 
- And for run the code `java com.mech2it.ocja.ClassName`
- In any java program only 1 package statement is allow.
- If you want to import package, package must be decleared in the first line of program. 
    Order for import and package 
```java
    package com.mech2it.ocja		// Atmost 1 //
    import java.util.*				
    // Any Number //
    class/interface/enum			// Any Number //
```
### 4. Class level Modifiers: public and default

