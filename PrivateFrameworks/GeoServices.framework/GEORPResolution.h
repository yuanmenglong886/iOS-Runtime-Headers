/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOMapRegion, NSMutableArray;

@interface GEORPResolution : PBCodable <NSCopying> {
    struct { 
        unsigned int resolutionDate : 1; 
    GEOMapRegion *_displayRegion;
    } _has;
    NSMutableArray *_localizedChangeLists;
    double _resolutionDate;
    NSMutableArray *_updatedPlaces;
}

@property(retain) GEOMapRegion * displayRegion;
@property(readonly) BOOL hasDisplayRegion;
@property BOOL hasResolutionDate;
@property(retain) NSMutableArray * localizedChangeLists;
@property double resolutionDate;
@property(retain) NSMutableArray * updatedPlaces;

- (void)addLocalizedChangeList:(id)arg1;
- (void)addUpdatedPlace:(id)arg1;
- (void)clearLocalizedChangeLists;
- (void)clearUpdatedPlaces;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayRegion;
- (BOOL)hasDisplayRegion;
- (BOOL)hasResolutionDate;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)localizedChangeListAtIndex:(unsigned int)arg1;
- (id)localizedChangeLists;
- (unsigned int)localizedChangeListsCount;
- (BOOL)readFrom:(id)arg1;
- (double)resolutionDate;
- (void)setDisplayRegion:(id)arg1;
- (void)setHasResolutionDate:(BOOL)arg1;
- (void)setLocalizedChangeLists:(id)arg1;
- (void)setResolutionDate:(double)arg1;
- (void)setUpdatedPlaces:(id)arg1;
- (id)updatedPlaceAtIndex:(unsigned int)arg1;
- (id)updatedPlaces;
- (unsigned int)updatedPlacesCount;
- (void)writeTo:(id)arg1;

@end