Public Class FrmMain
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles btnCalculo.Click
        modalCasa.Show()
        Me.Hide()
    End Sub

    Private Sub btnCasa_Click(sender As Object, e As EventArgs) Handles btnCasa.Click
        modalCalculo.Show()
        Me.Hide()
    End Sub

    Private Sub btnClose_Click(sender As Object, e As EventArgs) Handles btnClose.Click
        Me.Close()
    End Sub
End Class