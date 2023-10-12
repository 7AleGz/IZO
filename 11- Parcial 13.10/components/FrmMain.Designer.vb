<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class FrmMain
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
        Me.BtnCalculo = New System.Windows.Forms.Button()
        Me.BtnCasa = New System.Windows.Forms.Button()
        Me.BtnClose = New System.Windows.Forms.Button()
        Me.Label1 = New System.Windows.Forms.Label()
        Me.SuspendLayout()
        '
        'BtnCalculo
        '
        Me.BtnCalculo.Location = New System.Drawing.Point(43, 76)
        Me.BtnCalculo.Name = "BtnCalculo"
        Me.BtnCalculo.Size = New System.Drawing.Size(217, 47)
        Me.BtnCalculo.TabIndex = 0
        Me.BtnCalculo.TabStop = False
        Me.BtnCalculo.Text = "CALCULO DE SUPERFICIE DE LOTES"
        Me.BtnCalculo.UseVisualStyleBackColor = True
        '
        'BtnCasa
        '
        Me.BtnCasa.Location = New System.Drawing.Point(43, 148)
        Me.BtnCasa.Name = "BtnCasa"
        Me.BtnCasa.Size = New System.Drawing.Size(217, 45)
        Me.BtnCasa.TabIndex = 1
        Me.BtnCasa.TabStop = False
        Me.BtnCasa.Text = "CASA DE CAMBIO"
        Me.BtnCasa.UseVisualStyleBackColor = True
        '
        'BtnClose
        '
        Me.BtnClose.Location = New System.Drawing.Point(115, 227)
        Me.BtnClose.Name = "BtnClose"
        Me.BtnClose.Size = New System.Drawing.Size(75, 23)
        Me.BtnClose.TabIndex = 2
        Me.BtnClose.TabStop = False
        Me.BtnClose.Text = "SALIR"
        Me.BtnClose.UseVisualStyleBackColor = True
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Font = New System.Drawing.Font("Microsoft Sans Serif", 9.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label1.Location = New System.Drawing.Point(43, 29)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(216, 15)
        Me.Label1.TabIndex = 3
        Me.Label1.Text = "Para continuar, seleccione una opción"
        '
        'FrmMain
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(306, 262)
        Me.Controls.Add(Me.Label1)
        Me.Controls.Add(Me.BtnClose)
        Me.Controls.Add(Me.BtnCasa)
        Me.Controls.Add(Me.BtnCalculo)
        Me.Name = "FrmMain"
        Me.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen
        Me.Text = "FrmMain"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents BtnCalculo As Button
    Friend WithEvents BtnCasa As Button
    Friend WithEvents BtnClose As Button
    Friend WithEvents Label1 As Label
End Class
