/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKSQLJournal : NSObject {
    NSMutableData * _currentFileData;
    NSString * _directoryPath;
    unsigned int  _filesCount;
    NSObject<OS_dispatch_queue> * _journalQueue;
}

@property (nonatomic, retain) NSMutableData *currentFileData;
@property (nonatomic, retain) NSString *directoryPath;
@property (nonatomic) unsigned int filesCount;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *journalQueue;

- (void).cxx_destruct;
- (unsigned int)_currentFilesCount;
- (void)_flush;
- (id)_nextFilePath;
- (id)_sortedJournalFiles;
- (void)appendSQLStatement:(id)arg1;
- (id)currentFileData;
- (id)directoryPath;
- (unsigned int)filesCount;
- (void)flushIfNeeded;
- (id)initWithPath:(id)arg1;
- (id)journalQueue;
- (void)mergeUsingBlock:(id /* block */)arg1;
- (void)setCurrentFileData:(id)arg1;
- (void)setDirectoryPath:(id)arg1;
- (void)setFilesCount:(unsigned int)arg1;
- (void)setJournalQueue:(id)arg1;

@end