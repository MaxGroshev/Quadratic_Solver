#if defined(DEBUG)
#define ASSERT(condition) \
        if(!(condition))  \
        {fprintf(stderr, "ERROR IN FILE %s, FUNCTION %s, LINE %d\n", __FILE__, __FUNCTION__, __LINE__);}

#else
#define ASSERT(condition);

#endif

