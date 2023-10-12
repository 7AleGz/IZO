<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class ModalUSDValue
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
        Me.Done = New System.Windows.Forms.Button()
        Me.Title = New System.Windows.Forms.Label()
        Me.Price = New System.Windows.Forms.TextBox()
        Me.SuspendLayout()
        '
        'Done
        '
        Me.Done.Location = New System.Drawing.Point(212, 193)
        Me.Done.Name = "Done"
        Me.Done.Size = New System.Drawing.Size(75, 23)
        Me.Done.TabIndex = 0
        Me.Done.Text = "Continuar"
        Me.Done.UseVisualStyleBackColor = True
        '
        'Title
        '
        Me.Title.AutoSize = True
        Me.Title.Location = New System.Drawing.Point(151, 61)
        Me.Title.Name = "Title"
        Me.Title.Size = New System.Drawing.Size(197, 13)
        Me.Title.TabIndex = 1
        Me.Title.Text = "Ingrese la cotización del dólar a la fecha"
        '
        'Price
        '
        Me.Price.Location = New System.Drawing.Point(199, 128)
        Me.Price.Name = "Price"
        Me.Price.Size = New System.Drawing.Size(100, 20)
        Me.Price.TabIndex = 0
        '
        'ModalUSDValue
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(499, 276)
        Me.Controls.Add(Me.Price)
        Me.Controls.Add(Me.Title)
        Me.Controls.Add(Me.Done)
        Me.Name = "ModalUSDValue"
        Me.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen
        Me.Text = "Cotizacion"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents Done As Button
    Friend WithEvents Title As Label
    Friend WithEvents Price As TextBox
End Class
