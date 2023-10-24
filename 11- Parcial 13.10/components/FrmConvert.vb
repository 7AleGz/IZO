Public Class FrmConvert
    Private Sub BtnClose_Click(sender As Object, e As EventArgs) Handles BtnClose.Click
        Me.Close()
        FrmMain.Show()
    End Sub

    Dim USDValue As String = ModalUSDValue.USDValue
    Dim cantidadCompraUSD As Double
    Dim cantidadCompraARS As Double

    Private Sub BtnConvert_Click(sender As Object, e As EventArgs) Handles BtnConvert.Click
        If Double.TryParse(usdCant.Text, cantidadCompraUSD) Then
            Dim dateNow As DateTime = DateTime.Now
            Dim formatDate As String = dateNow.ToString("dd/MM/yyyy")
            Dim formatHour As String = dateNow.ToString("HH:mm:ss")
            Dim resultado As Double = USDValue * cantidadCompraUSD
            Dim arsPrice As Double = Math.Round(resultado, 2)
            arsCant.Text = arsPrice.ToString()
            My.Computer.FileSystem.WriteAllText("..\..\data\history.txt",
            formatDate & " " & formatHour & " ARS $" & resultado & vbCrLf, True)
        ElseIf Double.TryParse(arsCant.Text, cantidadCompraARS) Then
            Dim dateNow As DateTime = DateTime.Now
            Dim formatDate As String = dateNow.ToString("dd/MM/yyyy")
            Dim formatHour As String = dateNow.ToString("HH:mm:ss")
            Dim resultado As Double = cantidadCompraARS / USDValue
            Dim usdPrice As Double = Math.Round(resultado, 2)
            usdCant.Text = usdPrice.ToString()
            My.Computer.FileSystem.WriteAllText("..\..\data\history.txt",
            formatDate & " " & formatHour & " USD $" & resultado & vbCrLf, True)
        Else
            MessageBox.Show("Por favor, ingresa una cantidad válida para comprar.")
            usdCant.Text = ""
            arsCant.Text = ""
            usdCant.Focus()
        End If
    End Sub

    Private Sub FormCotizacion_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        USDPrice.Text = USDValue.ToString()
    End Sub

    Private Sub BtnReset_Click(sender As Object, e As EventArgs) Handles BtnReset.Click
        arsCant.Text = ""
        usdCant.Text = ""
    End Sub
End Class
