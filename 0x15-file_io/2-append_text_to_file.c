#include "main.h"
/**
* append_text_to_file - function that appends text at the end of a file.
* @filename: name of file.
* @text_content: string to add at the end of the file.
* Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
int add, new, lett;

if (!filename)
return (-1);

if (text_content != NULL)
{

for (new = 0; text_content[new];)
new++;
}
add = open(filename, O_WRONLY | O_APPEND);
lett = write(add, text_content, new);

if (add == -1 || lett == -1)
return (-1);
close(add);
return (1);
}
