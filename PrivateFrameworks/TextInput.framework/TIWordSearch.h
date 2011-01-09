/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSOperationQueue, NSMutableArray;



@interface TIWordSearch : NSObject 
{
    NSMutableArray *_candidates;
    NSOperationQueue *_operationQueue;
}


- (void)lastAcceptedCandidateCorrected;
- (void)cancel;
- (void)dealloc;
- (BOOL)isCancelled;
- (id)initTIWordSearch;
- (void)resetPreviousWord;
- (void)completeOperationsInQueue;
- (void)performOperationAsync:(id)arg1;
- (void)acceptCandidate:(id)arg1 isPartial:(BOOL)arg2;
- (void)cancelLastAcceptedCandidate;
- (id)getCandidates:(id)arg1;
- (NSUInteger)getCandidateReadingLength:(id)arg1;
- (void)performAccept:(id)arg1 isPartial:(BOOL)arg2;
- (void)clearLearningDictionary;
- (void)_getCandidatesOnThread:(id)arg1;

@end