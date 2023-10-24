<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class FrmConvert
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
        Me.Title = New System.Windows.Forms.Label()
        Me.USDPrice = New System.Windows.Forms.TextBox()
        Me.usdCant = New System.Windows.Forms.TextBox()
        Me.arsCant = New System.Windows.Forms.TextBox()
        Me.Label1 = New System.Windows.Forms.Label()
        Me.Label2 = New System.Windows.Forms.Label()
        Me.Label3 = New System.Windows.Forms.Label()
        Me.BtnConvert = New System.Windows.Forms.Button()
        Me.operationStatus = New System.Windows.Forms.Label()
        Me.BtnReset = New System.Windows.Forms.Button()
        Me.SuspendLayout()
        '
        'BtnClose
        '
        Me.BtnClose.Location = New System.Drawing.Point(293, 290)
        Me.BtnClose.Name = "BtnClose"
        Me.BtnClose.Size = New System.Drawing.Size(75, 23)
        Me.BtnClose.TabIndex = 5
        Me.BtnClose.Text = "SALIR"
        Me.BtnClose.UseVisualStyleBackColor = True
        '
        'Title
        '
        Me.Title.AutoSize = True
        Me.Title.Location = New System.Drawing.Point(244, 37)
        Me.Title.Name = "Title"
        Me.Title.Size = New System.Drawing.Size(172, 13)
        Me.Title.TabIndex = 1
        Me.Title.Text = "Conversión Dólar a Peso Argentino"
        '
        'USDPrice
        '
        Me.USDPrice.Location = New System.Drawing.Point(582, 15)
        Me.USDPrice.Name = "USDPrice"
        Me.USDPrice.ReadOnly = True
        Me.USDPrice.Size = New System.Drawing.Size(66, 20)
        Me.USDPrice.TabIndex = 10
        '
        'usdCant
        '
        Me.usdCant.Location = New System.Drawing.Point(225, 147)
        Me.usdCant.Name = "usdCant"
        Me.usdCant.Size = New System.Drawing.Size(100, 20)
        Me.usdCant.TabIndex = 0
        '
        'arsCant
        '
        Me.arsCant.Location = New System.Drawing.Point(336, 147)
        Me.arsCant.Name = "arsCant"
        Me.arsCant.Size = New System.Drawing.Size(100, 20)
        Me.arsCant.TabIndex = 1
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Location = New System.Drawing.Point(490, 18)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(86, 13)
        Me.Label1.TabIndex = 5
        Me.Label1.Text = "Valor Dólar Blue "
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.Location = New System.Drawing.Point(260, 127)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(30, 13)
        Me.Label2.TabIndex = 6
        Me.Label2.Text = "USD"
        '
        'Label3
        '
        Me.Label3.AutoSize = True
        Me.Label3.Location = New System.Drawing.Point(372, 128)
        Me.Label3.Name = "Label3"
        Me.Label3.Size = New System.Drawing.Size(29, 13)
        Me.Label3.TabIndex = 7
        Me.Label3.Text = "ARS"
        '
        'BtnConvert
        '
        Me.BtnConvert.Location = New System.Drawing.Point(293, 189)
        Me.BtnConvert.Name = "BtnConvert"
        Me.BtnConvert.Size = New System.Drawing.Size(75, 23)
        Me.BtnConvert.TabIndex = 3
        Me.BtnConvert.Text = "Convertir"
        Me.BtnConvert.UseVisualStyleBackColor = True
        '
        'operationStatus
        '
        Me.operationStatus.AutoSize = True
        Me.operationStatus.Location = New System.Drawing.Point(588, 174)
        Me.operationStatus.Name = "operationStatus"
        Me.operationStatus.Size = New System.Drawing.Size(0, 13)
        Me.operationStatus.TabIndex = 10
        '
        'BtnReset
        '
        Me.BtnReset.Location = New System.Drawing.Point(453, 136)
        Me.BtnReset.Name = "BtnReset"
        Me.BtnReset.Size = New System.Drawing.Size(43, 40)
        Me.BtnReset.TabIndex = 4
        Me.BtnReset.Text = "R"
        Me.BtnReset.UseVisualStyleBackColor = True
        '
        'FrmConvert
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(663, 344)
        Me.Controls.Add(Me.BtnReset)
        Me.Controls.Add(Me.operationStatus)
        Me.Controls.Add(Me.BtnConvert)
        Me.Controls.Add(Me.Label3)
        Me.Controls.Add(Me.Label2)
        Me.Controls.Add(Me.Label1)
        Me.Controls.Add(Me.arsCant)
        Me.Controls.Add(Me.usdCant)
        Me.Controls.Add(Me.USDPrice)
        Me.Controls.Add(Me.Title)
        Me.Controls.Add(Me.BtnClose)
        Me.Name = "FrmConvert"
        Me.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen
        Me.Text = "g"
        Me.WindowState = System.Windows.Forms.FormWindowState.Maximized
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents BtnClose As Button
    Friend WithEvents Title As Label
    Friend WithEvents USDPrice As TextBox
    Friend WithEvents usdCant As TextBox
    Friend WithEvents arsCant As TextBox
    Friend WithEvents Label1 As Label
    Friend WithEvents Label2 As Label
    Friend WithEvents Label3 As Label
    Friend WithEvents BtnConvert As Button
    Friend WithEvents operationStatus As Label
    Friend WithEvents BtnReset As Button
End Class
