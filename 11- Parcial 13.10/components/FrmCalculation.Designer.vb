<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class FrmCalculation
    Inherits System.Windows.Forms.Form

    'Form reemplaza a Dispose para limpiar la lista de componentes.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Requerido por el Diseñador de Windows Forms
    Private components As System.ComponentModel.IContainer

    'NOTA: el Diseñador de Windows Forms necesita el siguiente procedimiento
    'Se puede modificar usando el Diseñador de Windows Forms.  
    'No lo modifique con el editor de código.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.BtnClose = New System.Windows.Forms.Button()
        Me.Label1 = New System.Windows.Forms.Label()
        Me.Label2 = New System.Windows.Forms.Label()
        Me.LongSize = New System.Windows.Forms.TextBox()
        Me.WideSize = New System.Windows.Forms.TextBox()
        Me.BtnCalculate = New System.Windows.Forms.Button()
        Me.Result = New System.Windows.Forms.TextBox()
        Me.Label3 = New System.Windows.Forms.Label()
        Me.SuspendLayout()
        '
        'BtnClose
        '
        Me.BtnClose.Location = New System.Drawing.Point(337, 260)
        Me.BtnClose.Name = "BtnClose"
        Me.BtnClose.Size = New System.Drawing.Size(75, 23)
        Me.BtnClose.TabIndex = 3
        Me.BtnClose.Text = "SALIR"
        Me.BtnClose.UseVisualStyleBackColor = True
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Location = New System.Drawing.Point(287, 86)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(75, 13)
        Me.Label1.TabIndex = 1
        Me.Label1.Text = "Ancho del lote"
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.Location = New System.Drawing.Point(183, 86)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(71, 13)
        Me.Label2.TabIndex = 2
        Me.Label2.Text = "Largo del lote"
        '
        'LongSize
        '
        Me.LongSize.Location = New System.Drawing.Point(168, 102)
        Me.LongSize.Name = "LongSize"
        Me.LongSize.Size = New System.Drawing.Size(100, 20)
        Me.LongSize.TabIndex = 0
        '
        'WideSize
        '
        Me.WideSize.Location = New System.Drawing.Point(274, 102)
        Me.WideSize.Name = "WideSize"
        Me.WideSize.Size = New System.Drawing.Size(100, 20)
        Me.WideSize.TabIndex = 1
        '
        'BtnCalculate
        '
        Me.BtnCalculate.Location = New System.Drawing.Point(505, 101)
        Me.BtnCalculate.Name = "BtnCalculate"
        Me.BtnCalculate.Size = New System.Drawing.Size(75, 22)
        Me.BtnCalculate.TabIndex = 2
        Me.BtnCalculate.Text = "Calcular"
        Me.BtnCalculate.UseVisualStyleBackColor = True
        '
        'Result
        '
        Me.Result.Location = New System.Drawing.Point(398, 102)
        Me.Result.Name = "Result"
        Me.Result.Size = New System.Drawing.Size(100, 20)
        Me.Result.TabIndex = 10
        '
        'Label3
        '
        Me.Label3.AutoSize = True
        Me.Label3.Location = New System.Drawing.Point(380, 105)
        Me.Label3.Name = "Label3"
        Me.Label3.Size = New System.Drawing.Size(13, 13)
        Me.Label3.TabIndex = 8
        Me.Label3.Text = "="
        '
        'FrmCalculation
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(748, 313)
        Me.Controls.Add(Me.Label3)
        Me.Controls.Add(Me.Result)
        Me.Controls.Add(Me.BtnCalculate)
        Me.Controls.Add(Me.WideSize)
        Me.Controls.Add(Me.LongSize)
        Me.Controls.Add(Me.Label2)
        Me.Controls.Add(Me.Label1)
        Me.Controls.Add(Me.BtnClose)
        Me.Name = "FrmCalculation"
        Me.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen
        Me.Text = "Calculo de lotes"
        Me.WindowState = System.Windows.Forms.FormWindowState.Maximized
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents BtnClose As Button
    Friend WithEvents Label1 As Label
    Friend WithEvents Label2 As Label
    Friend WithEvents LongSize As TextBox
    Friend WithEvents WideSize As TextBox
    Friend WithEvents BtnCalculate As Button
    Friend WithEvents Result As TextBox
    Friend WithEvents Label3 As Label
End Class
