Public Class ModalUSDValue

    Public Shared Property USDValue As Decimal
    Private Sub Done_Click(sender As Object, e As EventArgs) Handles Done.Click

        If Not IsNumeric(Price.Text) Then
            Price.Text = ""
            Price.Focus()
            MsgBox("Ingresa un valor válido")
        Else
            USDValue = Price.Text
            FrmConvert.Show()
            Me.Close()
        End If

    End Sub

End Class