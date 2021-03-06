#if defined(UMC_DOWNLOADER_INC)
    #endinput
#endif

#define UMC_DOWNLOADER_INC

#define UMCD_VERSION "1.0.0"
#define UMCD_VERSION_MAJOR 1
#define UMCD_VERSION_MINOR 0
#define UMCD_VERSION_PATCH 0

#define UMCD_DEBUG_FLAG_ENTRY 1
#define UMCD_DEBUG_FLAG_FILE 2
#define UMCD_DEBUG_FLAG_DIRECTORY 4
#define UMCD_DEBUG_FLAG_GROUP 8
#define UMCD_DEBUG_FLAG_SET 16

#define UMCD_DEBUG (UMCD_DEBUG_FLAG_GROUP)
