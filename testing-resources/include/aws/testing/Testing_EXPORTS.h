#pragma once

#if defined (_MSC_VER)
    #pragma warning(disable : 4251)
    #ifdef USE_IMPORT_EXPORT
        #ifdef AWS_TESTING_EXPORTS
            #define  AWS_TESTING_API __declspec(dllexport)
        #else
            #define  AWS_TESTING_API __declspec(dllimport)
        #endif /* AWS_TESTING_EXPORTS */
    #else
        #define AWS_TESTING_API
    #endif // USE_IMPORT_EXPORT
#else /* defined (_WIN32) */
    #define AWS_TESTING_API
#endif

