Public Class ModalUSDValue
    Private Sub Done_Click(sender As Object, e As EventArgs) Handles Done.Click
        FrmConvert.Show()
        Me.Close()
    End Sub

    Public ReadOnly Property USDValue() As Double
        Get
            Dim dolarValue As Double
            If Double.TryParse(Price.Text, dolarValue) Then
                Return dolarValue.ToString()
            Else
                MessageBox.Show("Por favor, ingresa una cantidad válida para comprar.")
                Return 0
            End If
        End Get
    End Property
End Class