# Study-Cpp-CalculationChecker.

- First QT Graphical interface.
- Calculation checker.
- Multiplication, sum, subtraction.

&nbsp;

# Button Click Event

```c++
void MainWindow::on_ObjectName_clicked()
{
    //Action
}
```

# setText() and setNum() Methods.

```C++
ui->ObjectName->setText("Text");
ui->ObjectName->setNum("Text");
```

- setText("Text")
  - receives QString as argument and set objects text.

&nbsp;

- setNum(num)
  - receives a number and converts it to string to set objects text.

&nbsp;

# Label Text

```C++
ui->label->setText("Text");
```

- **ui** is a user interface pointer.

&nbsp;

- **label** is the label object from the interface.
  - "label" is the previously set objectName.

&nbsp;

- **setText** sets the the "**label**" text.

&nbsp;

# Get Text From Input (Line Edit)

```c++
QString str = ui->input->text();
```

- . . .->**text()**
  - Returns the text available in "Line Edit".
  - Returns text as a "**QString**";
- **QString** str = . . .
  - **QString** is a "string" class from QT.
  - "_QString str;_" creates a QString called str.
