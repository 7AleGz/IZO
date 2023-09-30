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
        Me.btnCalculo = New System.Windows.Forms.Button()
        Me.btnCasa = New System.Windows.Forms.Button()
        Me.btnClose = New System.Windows.Forms.Button()
        Me.SuspendLayout()
        '
        'btnCalculo
        '
        Me.btnCalculo.Location = New System.Drawing.Point(41, 75)
        Me.btnCalculo.Name = "btnCalculo"
        Me.btnCalculo.Size = New System.Drawing.Size(217, 23)
        Me.btnCalculo.TabIndex = 0
        Me.btnCalculo.Text = "CALCULO DE SUPERFICIE DE LOTES"
        Me.btnCalculo.UseVisualStyleBackColor = True
        '
        'btnCasa
        '
        Me.btnCasa.Location = New System.Drawing.Point(41, 151)
        Me.btnCasa.Name = "btnCasa"
        Me.btnCasa.Size = New System.Drawing.Size(217, 23)
        Me.btnCasa.TabIndex = 1
        Me.btnCasa.Text = "CASA DE CAMBIO"
        Me.btnCasa.UseVisualStyleBackColor = True
        '
        'btnClose
        '
        Me.btnClose.Location = New System.Drawing.Point(107, 214)
        Me.btnClose.Name = "btnClose"
        Me.btnClose.Size = New System.Drawing.Size(75, 23)
        Me.btnClose.TabIndex = 2
        Me.btnClose.Text = "SALIR"
        Me.btnClose.UseVisualStyleBackColor = True
        '
        'FrmMain
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(306, 262)
        Me.Controls.Add(Me.btnClose)
        Me.Controls.Add(Me.btnCasa)
        Me.Controls.Add(Me.btnCalculo)
        Me.Name = "FrmMain"
        Me.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen
        Me.Text = "FrmMain"
        Me.ResumeLayout(False)

    End Sub

    Friend WithEvents btnCalculo As Button
    Friend WithEvents btnCasa As Button
    Friend WithEvents btnClose As Button
End Class
