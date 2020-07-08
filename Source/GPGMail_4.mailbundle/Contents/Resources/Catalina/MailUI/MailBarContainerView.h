//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <AppKit/NSView.h>

//#import "NSAccessibilityGroup-Protocol.h"

@class FavoritesBarView, MailBarContainerButton, MessageViewer, NSButton, NSLayoutConstraint, NSStackView, NSString;

@interface MailBarContainerView : NSView <NSAccessibilityGroup>
{
    BOOL _isVisible;
    BOOL _barWasHiddenBeforeSearch;
    BOOL _isShowingSearchResults;
    MessageViewer *_messageViewer;
    long long _searchTarget;
    FavoritesBarView *_favoritesBarView;
    NSStackView *_stackView;
    NSStackView *_searchScopeView;
    NSView *_searchScopeClipView;
    MailBarContainerButton *_sidebarButton;
    NSButton *_saveButton;
    MailBarContainerButton *_primaryErrorButton;
    NSLayoutConstraint *_animationConstraint;
    MailBarContainerButton *_allButton;
    MailBarContainerButton *_extraButton;
}

@property(nonatomic) __weak MailBarContainerButton *extraButton; // @synthesize extraButton=_extraButton;
@property(nonatomic) __weak MailBarContainerButton *allButton; // @synthesize allButton=_allButton;
@property(retain, nonatomic) NSLayoutConstraint *animationConstraint; // @synthesize animationConstraint=_animationConstraint;
@property(nonatomic) __weak MailBarContainerButton *primaryErrorButton; // @synthesize primaryErrorButton=_primaryErrorButton;
@property(nonatomic) __weak NSButton *saveButton; // @synthesize saveButton=_saveButton;
@property(nonatomic) __weak MailBarContainerButton *sidebarButton; // @synthesize sidebarButton=_sidebarButton;
@property(nonatomic) __weak NSView *searchScopeClipView; // @synthesize searchScopeClipView=_searchScopeClipView;
@property(nonatomic) __weak NSStackView *searchScopeView; // @synthesize searchScopeView=_searchScopeView;
@property(nonatomic) __weak NSStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) __weak FavoritesBarView *favoritesBarView; // @synthesize favoritesBarView=_favoritesBarView;
@property(nonatomic) BOOL isShowingSearchResults; // @synthesize isShowingSearchResults=_isShowingSearchResults;
@property(nonatomic) long long searchTarget; // @synthesize searchTarget=_searchTarget;
@property(nonatomic) BOOL barWasHiddenBeforeSearch; // @synthesize barWasHiddenBeforeSearch=_barWasHiddenBeforeSearch;
@property(nonatomic) BOOL isVisible; // @synthesize isVisible=_isVisible;
@property(nonatomic) __weak MessageViewer *messageViewer; // @synthesize messageViewer=_messageViewer;
//- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)accessibilityChildren;
- (BOOL)isAccessibilityElement;
@property(readonly, nonatomic) BOOL extraButtonsSelected;
- (void)scopeToAllMailboxes;
- (void)_saveButtonAction:(id)arg1;
- (void)_scopeChanged;
- (void)_scopeWillChange;
- (void)setCanSearchSelectedMailbox:(BOOL)arg1;
- (void)setCanSaveSearch:(BOOL)arg1;
- (void)clearSearchButtons;
- (void)_tearDown;
- (void)finishedShowHideAnimation;
- (void)_animateSearchScopeView:(BOOL)arg1;
- (void)_appearSearchScopeView:(BOOL)arg1;
- (void)setSearchScopeViewVisible:(BOOL)arg1 animate:(BOOL)arg2;
- (id)_extraSearchButtonTitle;
- (void)_setupSearchScopeViewUI;
- (void)scopeButtonClicked:(id)arg1;
- (void)primaryErrorButtonClicked:(id)arg1;
- (void)_updatePrimaryErrorButton;
- (void)_accountOfflineStatusChanged:(id)arg1;
- (void)_networkStatusChanged:(id)arg1;
- (BOOL)isFlipped;
- (void)dealloc;
- (void)awakeFromNib;
- (void)_mailBarContainerViewCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

