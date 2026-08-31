### Calculator program

This program should be invoked by running:
`./calculator <num> <operation> <num>`

For example, you can run:
`./calculator 4 + 5`

Supported operations are addition(`+`), subtraction (`-`), multiplication (`*`) and 
division (`/`). You can also use the `-q` flag to silence the output.

**Note:** The command line interprets `*` as a special character used for [globbing](https://man7.org/linux/man-pages/man7/glob.7.html)
which means that if you try to run something like `./calculator 4 * 3`, you will get an incorrect result. To override the special meaning
of `*`, you can: 1) use the `noglob` command before invoking the calculator (i.e `noglob ./calculator 4 * 3`) or you can encapsulate the
asterisk in single quotes (i.e. `./calculator 4 '*' 3`).

