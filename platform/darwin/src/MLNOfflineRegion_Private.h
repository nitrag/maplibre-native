#import <Foundation/Foundation.h>

#import "MLNOfflineRegion.h"

#include <mbgl/storage/offline.hpp>

NS_ASSUME_NONNULL_BEGIN

@protocol MLNOfflineRegion_Private <MLNOfflineRegion>

/**
 Creates and returns a C++ offline region definition corresponding to the
 receiver.
 */
- (const mbgl::OfflineRegionDefinition)offlineRegionDefinition;

/**
 Attributes to be passed into the offline download start event
 */
@property (nonatomic, readonly) NSDictionary *offlineStartEventAttributes;

/**
 The unique identifier of the offline region, redeclared as readwrite for
 internal use.
 */
@property (nonatomic, readwrite) int64_t id;

@end

NS_ASSUME_NONNULL_END
