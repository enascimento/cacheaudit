
// Copyright in this code is held by Dr B. R. Gladman but free direct or
// derivative use is permitted subject to acknowledgement of its origin.
// Dr B. R. Gladman                               .   25th January 2000.

#ifdef  __cplusplus

#   define  TWOFISH(x)  twofish::##x

    class twofish : public AES
    {
    private:
        u4byte  k_len;
        u4byte  l_key[40];
        u4byte  s_key[4];
    public:

#else

#   define  TWOFISH(x)  twofish_##x

    STATIC u4byte  TWOFISH(k_len);
    STATIC u4byte  TWOFISH(l_key)[40];
    STATIC u4byte  TWOFISH(s_key)[4];

#endif

    char* TWOFISH(name(void));
    void  TWOFISH(set_key(const u1byte key[], const u4byte key_len, const enum dir_flag f));
    void  TWOFISH(encrypt(const u1byte in_blk[], u1byte out_blk[]));
    void  TWOFISH(decrypt(const u1byte in_blk[], u1byte out_blk[]));

#ifdef  __cplusplus
    };
#endif
