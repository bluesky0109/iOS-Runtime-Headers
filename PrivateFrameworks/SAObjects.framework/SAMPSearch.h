/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray;

@interface SAMPSearch : SADomainCommand {
}

@property(copy) NSArray * constraints;
@property int maxResults;
@property(copy) NSArray * searchTypes;
@property BOOL strict;

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;

- (id)constraints;
- (id)encodedClassName;
- (id)groupIdentifier;
- (int)maxResults;
- (BOOL)requiresResponse;
- (id)searchTypes;
- (void)setConstraints:(id)arg1;
- (void)setMaxResults:(int)arg1;
- (void)setSearchTypes:(id)arg1;
- (void)setStrict:(BOOL)arg1;
- (BOOL)strict;

@end