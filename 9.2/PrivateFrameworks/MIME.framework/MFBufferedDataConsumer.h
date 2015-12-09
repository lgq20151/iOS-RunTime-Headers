/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFBufferedDataConsumer : NSObject <MFGuaranteedCollectingDataConsumer> {
    NSMutableData * _data;
    int  _fd;
    NSString * _path;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (int)appendData:(id)arg1;
- (id)data;
- (void)dealloc;
- (void)done;
- (id)init;

@end