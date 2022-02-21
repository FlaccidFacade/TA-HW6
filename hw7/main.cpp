#include <stdio.h>
#include <fstream>

int main()
{
    //open file streams
    std::ofstream output;
    output.open("output.txt");
    FILE *handle = popen("../helloworld/./main", "r");

    if (handle == NULL) {
        return 1;
    }

    char buf[64];
    size_t readn;
    while ((readn = fread(buf, 1, sizeof(buf), handle)) > 0) {
            fwrite(buf, 1, readn, stdout);
            //write from buffer
            output.write(buf, readn);
    }

    pclose(handle);
    output.close();

    return 0;
}