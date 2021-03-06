/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface NWAWDLibnetcoreTCPConnectionReport : PBCodable <NSCopying> {
    NWAWDLibnetcoreCellularFallbackReport * _cellularFallbackReport;
    NSString * _clientIdentifier;
    NSMutableArray * _connectionAttemptStatisticsReports;
    NWAWDLibnetcoreConnectionStatisticsReport * _connectionStatisticsReport;
    BOOL  _delegated;
    struct { 
        unsigned int iPAddressAttemptCount : 1; 
        unsigned int timestamp : 1; 
        unsigned int reportReason : 1; 
        unsigned int delegated : 1; 
    }  _has;
    unsigned long long  _iPAddressAttemptCount;
    int  _reportReason;
    NSString * _sourceAppIdentifier;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NWAWDLibnetcoreCellularFallbackReport *cellularFallbackReport;
@property (nonatomic, retain) NSString *clientIdentifier;
@property (nonatomic, retain) NSMutableArray *connectionAttemptStatisticsReports;
@property (nonatomic, retain) NWAWDLibnetcoreConnectionStatisticsReport *connectionStatisticsReport;
@property (nonatomic) BOOL delegated;
@property (nonatomic, readonly) BOOL hasCellularFallbackReport;
@property (nonatomic, readonly) BOOL hasClientIdentifier;
@property (nonatomic, readonly) BOOL hasConnectionStatisticsReport;
@property (nonatomic) BOOL hasDelegated;
@property (nonatomic) BOOL hasIPAddressAttemptCount;
@property (nonatomic) BOOL hasReportReason;
@property (nonatomic, readonly) BOOL hasSourceAppIdentifier;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long iPAddressAttemptCount;
@property (nonatomic) int reportReason;
@property (nonatomic, retain) NSString *sourceAppIdentifier;
@property (nonatomic) unsigned long long timestamp;

+ (Class)connectionAttemptStatisticsReportsType;

- (void).cxx_destruct;
- (int)StringAsReportReason:(id)arg1;
- (void)addConnectionAttemptStatisticsReports:(id)arg1;
- (id)cellularFallbackReport;
- (void)clearConnectionAttemptStatisticsReports;
- (id)clientIdentifier;
- (id)connectionAttemptStatisticsReports;
- (id)connectionAttemptStatisticsReportsAtIndex:(unsigned int)arg1;
- (unsigned int)connectionAttemptStatisticsReportsCount;
- (id)connectionStatisticsReport;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)delegated;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCellularFallbackReport;
- (BOOL)hasClientIdentifier;
- (BOOL)hasConnectionStatisticsReport;
- (BOOL)hasDelegated;
- (BOOL)hasIPAddressAttemptCount;
- (BOOL)hasReportReason;
- (BOOL)hasSourceAppIdentifier;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (unsigned long long)iPAddressAttemptCount;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)reportReason;
- (id)reportReasonAsString:(int)arg1;
- (void)setCellularFallbackReport:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setConnectionAttemptStatisticsReports:(id)arg1;
- (void)setConnectionStatisticsReport:(id)arg1;
- (void)setDelegated:(BOOL)arg1;
- (void)setHasDelegated:(BOOL)arg1;
- (void)setHasIPAddressAttemptCount:(BOOL)arg1;
- (void)setHasReportReason:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setIPAddressAttemptCount:(unsigned long long)arg1;
- (void)setReportReason:(int)arg1;
- (void)setSourceAppIdentifier:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)sourceAppIdentifier;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
