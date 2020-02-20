int main(int argc, char argv[]){
    int iTotalSectorCount = 1024;
    int iSectorNumber = 2;
    int iHeadNumber = 0;
    int iTrackNumber = 0;
    char* pcTragetAddress= (char *) 0x10000;
    while(1){
        if (!iTotalSectorCount)
        {
            break;
        }
        iTotalSectorCount--;
        //if(BIOSReadOneSector(iSectorNumber,iHeadNumber,iTrackNumber,pcTragetAddress)==ERROR)
        //{
          //  HandleDiskError();
        //}
        pcTragetAddress = pcTragetAddress + 0x200;

        iSectorNumber++;
        if (iSectorNumber<19){
            continue;
        }
        iHeadNumber = iHeadNumber ^ 0x1;
        iSectorNumber = 1;
        if(iHeadNumber!=0){
            continue;
        }
        iTrackNumber++;
    }
    return 0;
}

void HandleDiskError(){
    printf("Disk ERROR");
    while(1);
}