/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSPObject, TSWPColumnStyle, TSWPListStyle, TSWPParagraphStyle, TSWPStorage;

@interface TSWPStoragePasteRules : NSObject {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    struct { 
        TSWPParagraphStyle *parStyle; 
        TSPObject *section; 
        TSWPColumnStyle *columnStyle; 
        TSWPListStyle *listStyle; 
        struct { 
            union { 
                struct { 
                    unsigned int listStart; 
                } ; 
                struct { 
                    unsigned short level; 
                    unsigned short flags; 
                } ; 
                struct { 
                    unsigned short row; 
                    unsigned short column; 
                } ; 
                struct { 
                    int writingDirection; 
                } ; 
                struct { 
                    unsigned int _singleValue; 
                } ; 
                struct { 
                    unsigned short _first; 
                    unsigned short _second; 
                } ; 
            } ; 
        } parData; 
        struct { 
            union { 
                struct { 
                    unsigned int listStart; 
                } ; 
                struct { 
                    unsigned short level; 
                    unsigned short flags; 
                } ; 
                struct { 
                    unsigned short row; 
                    unsigned short column; 
                } ; 
                struct { 
                    int writingDirection; 
                } ; 
                struct { 
                    unsigned int _singleValue; 
                } ; 
                struct { 
                    unsigned short _first; 
                    unsigned short _second; 
                } ; 
            } ; 
        } parStartData; 
        struct { 
            union { 
                struct { 
                    unsigned int listStart; 
                } ; 
                struct { 
                    unsigned short level; 
                    unsigned short flags; 
                } ; 
                struct { 
                    unsigned short row; 
                    unsigned short column; 
                } ; 
                struct { 
                    int writingDirection; 
                } ; 
                struct { 
                    unsigned int _singleValue; 
                } ; 
                struct { 
                    unsigned short _first; 
                    unsigned short _second; 
                } ; 
            } ; 
        } parBidiData; 
    unsigned int _actionFlags[4];
    TSWPStorage *_destStorage;
    unsigned int _flags;
    unsigned int _lastFlag;
    BOOL _mapDestTrailCS;
    } _paragraphs[4];
    unsigned int _sourceColumnStyleCount;
    unsigned int _sourceSectionCount;
    } _srcLeadRange;
    } _srcTrailRange;
}

- (id).cxx_construct;
- (void)addActionFlag:(int)arg1;
- (void)applyParagraph:(int)arg1 toCharIndex:(unsigned int)arg2 ioTransaction:(struct TSWPStorageTransaction { struct vector<TSWPStorageTransactionObject, std::__1::allocator<TSWPStorageTransactionObject> > { struct TSWPStorageTransactionObject {} *x_1_1_1; struct TSWPStorageTransactionObject {} *x_1_1_2; struct __compressed_pair<TSWPStorageTransactionObject *, std::__1::allocator<TSWPStorageTransactionObject> > { struct TSWPStorageTransactionObject {} *x_3_2_1; } x_1_1_3; } x1; unsigned int x2; unsigned int x3; }*)arg3;
- (void)dealloc;
- (void)didPasteWithIOTransaction:(struct TSWPStorageTransaction { struct vector<TSWPStorageTransactionObject, std::__1::allocator<TSWPStorageTransactionObject> > { struct TSWPStorageTransactionObject {} *x_1_1_1; struct TSWPStorageTransactionObject {} *x_1_1_2; struct __compressed_pair<TSWPStorageTransactionObject *, std::__1::allocator<TSWPStorageTransactionObject> > { struct TSWPStorageTransactionObject {} *x_3_2_1; } x_1_1_3; } x1; unsigned int x2; unsigned int x3; }*)arg1 atDestRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)mapCharacterStyleProperties:(id)arg1 toRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 ioTransaction:(struct TSWPStorageTransaction { struct vector<TSWPStorageTransactionObject, std::__1::allocator<TSWPStorageTransactionObject> > { struct TSWPStorageTransactionObject {} *x_1_1_1; struct TSWPStorageTransactionObject {} *x_1_1_2; struct __compressed_pair<TSWPStorageTransactionObject *, std::__1::allocator<TSWPStorageTransactionObject> > { struct TSWPStorageTransactionObject {} *x_3_2_1; } x_1_1_3; } x1; unsigned int x2; unsigned int x3; }*)arg3;
- (void)mapCharacterStyles:(int)arg1 toRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 ioTransaction:(struct TSWPStorageTransaction { struct vector<TSWPStorageTransactionObject, std::__1::allocator<TSWPStorageTransactionObject> > { struct TSWPStorageTransactionObject {} *x_1_1_1; struct TSWPStorageTransactionObject {} *x_1_1_2; struct __compressed_pair<TSWPStorageTransactionObject *, std::__1::allocator<TSWPStorageTransactionObject> > { struct TSWPStorageTransactionObject {} *x_3_2_1; } x_1_1_3; } x1; unsigned int x2; unsigned int x3; }*)arg3;
- (void)setupFlagsForPastingSrcStorage:(id)arg1 intoDestStorage:(id)arg2 atDestRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)willPasteStorage:(id)arg1 intoDestStorage:(id)arg2 atDestRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;

@end