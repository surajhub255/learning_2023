/*3. Data Viewer*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ENTRIES 100
#define MAX_LINE_LENGTH 100

struct LogEntry
{
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char timestamp[10];
};
typedef struct LogEntry LogEntry;

int readLogEntries(LogEntry entries[])
{
    FILE *file;
    char line[MAX_LINE_LENGTH];
    int numEntries = 0;
    file = fopen("data.csv", "r");
    if (file == NULL)
    {
        printf("Unable to open the file.\n");
        return 0;
    }
    fgets(line, sizeof(line), file);
    while (fgets(line, sizeof(line), file) != NULL)
    {
        char *token;
        int i = 0;

        token = strtok(line, ",");
        entries[numEntries].entryNo = atoi(token);

        while (token != NULL)
        {
            token = strtok(NULL, ",");
            switch (i)
            {
                case 0:
                    strncpy(entries[numEntries].sensorNo, token, sizeof(entries[numEntries].sensorNo));
                    break;
                case 1:
                    entries[numEntries].temperature = atof(token);
                    break;
                case 2:
                    entries[numEntries].humidity = atoi(token);
                    break;
                case 3:
                    entries[numEntries].light = atoi(token);
                    break;
                case 4:
                    strncpy(entries[numEntries].timestamp, token, sizeof(entries[numEntries].timestamp));
                    break;
            }
            i++;
        }

        numEntries++;
    }
    fclose(file);
    return numEntries;
}

void displayLogEntries(LogEntry entries[], int numEntries)
{
    printf("EntryNo  SensorNo  Temperature  Humidity  Light  Timestamp\n");
    for (int i = 0; i < numEntries; i++)
    {
        printf("%-8d %-9s %-12.2f %-8d %-6d %s\n", entries[i].entryNo, entries[i].sensorNo,
               entries[i].temperature, entries[i].humidity, entries[i].light, entries[i].timestamp);
    }
}


int main()
{
    LogEntry entries[MAX_ENTRIES];
    int numEntries;
    numEntries = readLogEntries(entries);
    displayLogEntries(entries, numEntries);

    return 0;
}
