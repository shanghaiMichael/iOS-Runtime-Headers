/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FactoryTest.framework/FactoryTest
 */

@class NSString, NSDictionary;

@interface Device : NSObject  {
    NSString *_deviceName;
    NSDictionary *_versionDict;
}

+ (id)productBuildVersion;
+ (BOOL)hasBaseband;
+ (BOOL)hasGyro;
+ (BOOL)hasCompass;
+ (BOOL)hasWiFi;
+ (id)sharedInstance;

- (id)versionDict;
- (id)modelName;
- (void)dealloc;
- (id)init;
- (id)deviceName;

@end