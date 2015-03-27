/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@class HDCodableSample;

@interface HDCodableQuantitySample : PBCodable <NSCopying> {
    struct { 
        unsigned int valueInCanonicalUnit : 1; 
    } _has;
    HDCodableSample *_sample;
    double _valueInCanonicalUnit;
}

@property(readonly) BOOL hasSample;
@property BOOL hasValueInCanonicalUnit;
@property(retain) HDCodableSample * sample;
@property double valueInCanonicalUnit;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasSample;
- (BOOL)hasValueInCanonicalUnit;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)sample;
- (void)setHasValueInCanonicalUnit:(BOOL)arg1;
- (void)setSample:(id)arg1;
- (void)setValueInCanonicalUnit:(double)arg1;
- (double)valueInCanonicalUnit;
- (void)writeTo:(id)arg1;

@end