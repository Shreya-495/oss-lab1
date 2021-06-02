
# include <stdio.h>
# include <string.h>

int main( )
{
	FILE *filePointer ;
	char text[50]
		= "Open source software lab assignment 1";

	filePointer = fopen("hello.c", "w") ;

	if ( filePointer == NULL )
	{
		printf( "hello.c file failed to open." ) ;
	}
	else
	{
		printf("The file is now opened.\n") ;

		if ( strlen ( text ) > 0 )
		{
			fputs(text , filePointer) ;
			fputs("\n", filePointer) ;
		}
		fclose(filePointer) ;
    printf("Data successfully written in file GfgTest.c\n");
    printf("The file is now closed.") ;

    filePointer = fopen("hello.c", "r") ;
    if ( filePointer == NULL )
        {
            printf( "hello.c file failed to open." ) ;
        }
	else
        {
            printf("The file is now opened.\n") ;

        }
        while( fgets ( text, 50, filePointer ) != NULL )
        {
            printf( "%s" , text ) ;
         }
        fclose(filePointer) ;

        printf("Data successfully read from file hello.c\n");
        printf("The file is now closed.") ;
    }
	return 0;
}
