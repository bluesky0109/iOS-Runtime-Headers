/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVWeakReference, NSMutableArray, NSObject<OS_dispatch_queue>;

@interface AVFigAssetTrackInspector : AVAssetTrackInspector {
    NSObject<OS_dispatch_queue> *_completionHandlerQueue;
    struct OpaqueFigAsset { } *_figAsset;
    struct OpaqueFigAssetTrack { } *_figAssetTrack;
    struct OpaqueFigFormatReader { } *_figFormatReader;
    struct OpaqueFigTrackReader { } *_figTrackReader;
    NSMutableArray *_loadingBatches;
    struct OpaqueFigSimpleMutex { } *_loadingMutex;
    AVWeakReference *_weakReferenceToAsset;
}

- (void)_addFigNotifications;
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg1;
- (struct OpaqueFigAssetTrack { }*)_figAssetTrack;
- (unsigned long)_figMediaType;
- (struct OpaqueFigTrackReader { }*)_figTrackReader;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long)arg3;
- (void)_invokeCompletionHandlerForLoadingBatches:(id)arg1;
- (int)_loadStatusForFigAssetTrackProperty:(id)arg1 returningError:(int*)arg2;
- (id)_loadingBatches;
- (struct OpaqueFigSimpleMutex { }*)_loadingMutex;
- (void)_removeFigNotifications;
- (id)_trackReferences;
- (void*)_valueAsCFTypeForProperty:(struct __CFString { }*)arg1;
- (int)alternateGroupID;
- (id)asset;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (void)dealloc;
- (struct CGSize { float x1; float x2; })dimensions;
- (float)estimatedDataRate;
- (id)extendedLanguageTag;
- (void)finalize;
- (id)formatDescriptions;
- (BOOL)hasProtectedContent;
- (unsigned int)hash;
- (BOOL)isEnabled;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExcludedFromAutoselectionInTrackGroup;
- (BOOL)isPlayable;
- (BOOL)isSelfContained;
- (id)languageCode;
- (int)layer;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id)arg2;
- (id)loudnessInfo;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })mediaDecodeTimeRange;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })mediaPresentationTimeRange;
- (id)mediaType;
- (id)metadataForFormat:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minSampleDuration;
- (struct CGSize { float x1; float x2; })naturalSize;
- (int)naturalTimeScale;
- (float)nominalFrameRate;
- (long)playabilityValidationResult;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })preferredTransform;
- (float)preferredVolume;
- (BOOL)requiresFrameReordering;
- (id)segmentForTrackTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)segments;
- (int)statusOfValueForKey:(id)arg1 error:(id*)arg2;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (long long)totalSampleDataLength;
- (int)trackID;

@end