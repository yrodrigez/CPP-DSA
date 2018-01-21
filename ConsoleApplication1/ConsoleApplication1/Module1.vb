Module Module1

    Sub Main()

        Dim col As New System.Collections.Specialized.StringCollection
        Dim strCol As String()

        col.Add("dos")
        col.Add("dos")
        col.Add("tres")
        col.RemoveAt(0)
        col.Insert(0, "uno")


        For Each str As String In col
            Debug.WriteLine(str)
        Next
    End Sub

End Module
