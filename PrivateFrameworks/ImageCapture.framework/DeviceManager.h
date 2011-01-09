/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class NSMutableDictionary, DeviceManagerThread, NSDictionary;



@interface DeviceManager : NSObject <ICDeviceManagerProtocol>
{
    DeviceManagerThread *_thread;
    NSDictionary *_deviceMatchingInfo;
    NSMutableDictionary *_devices;
}


- (void)postNotification:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)startRunning;
- (void)stopRunning;
- (void)closeSessionImp:(id)arg1;
- (void)syncClockImp:(id)arg1;
- (void)deleteFileImp:(id)arg1;
- (void)postCommandCompletionNotification:(id)arg1;
- (void)getThumbnailOfFileImp:(id)arg1;
- (NSInteger)syncClock:(id)arg1 contextInfo:(void*)arg2;
- (NSInteger)downloadFile:(id)arg1 fromDevice:(id)arg2 options:(id)arg3 contextInfo:(void*)arg4;
- (void)openDeviceImp:(id)arg1;
- (void)closeDeviceImp:(id)arg1;
- (void)openSessionImp:(id)arg1;
- (void)getMetadataOfFileImp:(id)arg1;
- (void)downloadFileImp:(id)arg1;
- (void)ejectImp:(id)arg1;
- (NSInteger)openDevice:(id)arg1 contextInfo:(void*)arg2;
- (NSInteger)closeDevice:(id)arg1 contextInfo:(void*)arg2;
- (NSInteger)openSession:(id)arg1 contextInfo:(void*)arg2;
- (NSInteger)closeSession:(id)arg1 contextInfo:(void*)arg2;
- (NSInteger)deleteFile:(id)arg1 fromDevice:(id)arg2 contextInfo:(void*)arg3;
- (NSInteger)eject:(id)arg1;
- (NSInteger)getThumbnailOfFile:(id)arg1 fromDevice:(id)arg2 contextInfo:(void*)arg3;
- (NSInteger)getMetadataOfFile:(id)arg1 fromDevice:(id)arg2 contextInfo:(void*)arg3;

@end