//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <objc/NSObject.h>

#import "FavoriteHoverViewDirectionProtocol-Protocol.h"
//#import "NSOutlineViewDataSource-Protocol.h"
//#import "NSOutlineViewDelegate-Protocol.h"

@class FavoritesMenuOutlineView, NSScrollView, NSString, NSTimer, NSWindow, _FavoriteMenuScrollHoverView;
@protocol FavoritesMenuDelegateProtocol, MFUIMailbox;

@interface FavoritesMenuController : NSObject <FavoriteHoverViewDirectionProtocol, NSOutlineViewDataSource, NSOutlineViewDelegate>
{
    BOOL _isScrolling;
    BOOL _isOpeningMenu;
    BOOL _needsScrollers;
    id /*<FavoritesMenuDelegateProtocol>*/ _delegate;
    NSWindow *_window;
    NSWindow *_parentWindow;
    id /*<MFUIMailbox>*/ _mailbox;
    NSScrollView *_scrollView;
    FavoritesMenuOutlineView *_outlineView;
    id _mouseClickedMonitor;
    _FavoriteMenuScrollHoverView *_upScrollHoverView;
    _FavoriteMenuScrollHoverView *_downScrollHoverView;
    NSTimer *_scrollTimer;
}

+ (void)closeExitingMenu;
@property(retain, nonatomic) NSTimer *scrollTimer; // @synthesize scrollTimer=_scrollTimer;
@property(nonatomic) BOOL needsScrollers; // @synthesize needsScrollers=_needsScrollers;
@property(retain, nonatomic) _FavoriteMenuScrollHoverView *downScrollHoverView; // @synthesize downScrollHoverView=_downScrollHoverView;
@property(retain, nonatomic) _FavoriteMenuScrollHoverView *upScrollHoverView; // @synthesize upScrollHoverView=_upScrollHoverView;
@property(nonatomic) BOOL isOpeningMenu; // @synthesize isOpeningMenu=_isOpeningMenu;
@property(retain, nonatomic) id mouseClickedMonitor; // @synthesize mouseClickedMonitor=_mouseClickedMonitor;
@property(retain, nonatomic) FavoritesMenuOutlineView *outlineView; // @synthesize outlineView=_outlineView;
@property(retain, nonatomic) NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) id /*<MFUIMailbox>*/ mailbox; // @synthesize mailbox=_mailbox;
@property(readonly, nonatomic) NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
@property(retain, nonatomic) NSWindow *window; // @synthesize window=_window;
@property(nonatomic) BOOL isScrolling; // @synthesize isScrolling=_isScrolling;
@property(nonatomic) __weak id /*<FavoritesMenuDelegateProtocol>*/ delegate; // @synthesize delegate=_delegate;
//- (void).cxx_destruct;
- (void)stopScrolling:(long long)arg1;
- (void)stopScrolling;
- (void)startScrolling:(long long)arg1;
- (void)updateScrollArrows;
- (void)_scrollToNextPoint:(id)arg1;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (BOOL)_canDragMessageIntoMailbox:(id)arg1;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (unsigned long long)_dragOperationForCurrentEvent;
- (BOOL)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2;
- (id)outlineView:(id)arg1 rowViewForItem:(id)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (id)_nibForFavoriteMenuItemView;
- (id)_titleForTopLevelMailbox:(id)arg1;
- (void)presentPopupAtLocation:(struct CGPoint)arg1;
- (void)_insertOutlineViewInScrollView;
- (void)_constrainWindowToScreen;
- (void)_sizeWindowToFitCells;
- (struct CGSize)_windowSizeForOutlineViewSize:(struct CGSize)arg1;
- (void)_mouseClickedInApplicationWithEvent:(id)arg1;
- (void)_dragEnded:(id)arg1;
- (void)_applicationShouldClosePopup:(id)arg1;
- (void)closePopup;
- (void)_cleanupMenu;
- (void)dealloc;
- (id)init;
- (id)initWithMailbox:(id)arg1 atWindow:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

