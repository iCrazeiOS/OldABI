void *patchfind_seek_back(void *startPtr, uint32_t toInstruction, uint32_t mask, unsigned int maxSearch);
void *patchfind_find(int imageIndex, unsigned char *bytesToSearch, unsigned char *byteMask, size_t byteCount);
