/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSleepAlarmAWDSleepAlarmStatistics : PBCodable <NSCopying> {
    struct { 
        unsigned int mean : 1; 
        unsigned int median : 1; 
        unsigned int percentile25 : 1; 
        unsigned int percentile75 : 1; 
        unsigned int stddev : 1; 
    }  _has;
    int  _mean;
    int  _median;
    int  _percentile25;
    int  _percentile75;
    int  _stddev;
}

@property (nonatomic) BOOL hasMean;
@property (nonatomic) BOOL hasMedian;
@property (nonatomic) BOOL hasPercentile25;
@property (nonatomic) BOOL hasPercentile75;
@property (nonatomic) BOOL hasStddev;
@property (nonatomic) int mean;
@property (nonatomic) int median;
@property (nonatomic) int percentile25;
@property (nonatomic) int percentile75;
@property (nonatomic) int stddev;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasMean;
- (BOOL)hasMedian;
- (BOOL)hasPercentile25;
- (BOOL)hasPercentile75;
- (BOOL)hasStddev;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)mean;
- (int)median;
- (void)mergeFrom:(id)arg1;
- (int)percentile25;
- (int)percentile75;
- (BOOL)readFrom:(id)arg1;
- (void)setHasMean:(BOOL)arg1;
- (void)setHasMedian:(BOOL)arg1;
- (void)setHasPercentile25:(BOOL)arg1;
- (void)setHasPercentile75:(BOOL)arg1;
- (void)setHasStddev:(BOOL)arg1;
- (void)setMean:(int)arg1;
- (void)setMedian:(int)arg1;
- (void)setPercentile25:(int)arg1;
- (void)setPercentile75:(int)arg1;
- (void)setStddev:(int)arg1;
- (int)stddev;
- (void)writeTo:(id)arg1;

@end