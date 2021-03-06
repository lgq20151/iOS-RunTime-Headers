/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPCryptoComponentWriteChannel : NSObject <TSPComponentWriteChannel> {
    char * _buffer;
    struct { 
        unsigned int ctx[96]; 
    }  _ccHmacContext;
    struct _CCCryptor { } * _cryptor;
    unsigned long  _decryptedBlockLength;
    unsigned long  _encodedBlockLength;
    <TSPMutableCryptoInfo> * _encryptionInfo;
    <TSPComponentWriteChannel> * _writeChannel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_finalizeBlockForClosing:(BOOL)arg1;
- (BOOL)_initializeBlock;
- (void)_writeData:(id)arg1 isDecryptedData:(BOOL)arg2;
- (void)close;
- (void)dealloc;
- (id)initWithWriteChannel:(id)arg1 encryptionInfo:(id)arg2;
- (void)writeData:(id)arg1;

@end
