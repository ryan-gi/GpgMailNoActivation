//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebHTMLView.h>

@class NSArray;

@interface MessageWebHTMLView : WebHTMLView
{
    NSArray *_attachmentsForContextualMenu;
}

//- (void).cxx_destruct;
- (void)setSelectionFloat:(id)arg1 undoTitle:(id)arg2;
- (BOOL)canFloatSelectedElement;
- (void)floatNone:(id)arg1;
- (void)floatRight:(id)arg1;
- (void)floatLeft:(id)arg1;
- (id)_documentFragmentFromPasteboard:(id)arg1 inContext:(id)arg2 allowPlainText:(BOOL)arg3;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)quickLookWithEvent:(id)arg1;
- (void)keyDown:(id)arg1;
- (id)messageViewer;
- (void)fixWebArchiveAndRTFDDataOnPasteboard:(id)arg1;
- (void)writeSelectionWithPasteboardTypes:(id)arg1 toPasteboard:(id)arg2;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)insertList:(id)arg1;
- (void)decreaseListNestingLevel:(id)arg1;
- (void)increaseListNestingLevel:(id)arg1;
- (void)convertToBulletedList:(id)arg1;
- (void)convertToNumberedList:(id)arg1;
- (void)insertNumberedList:(id)arg1;
- (void)insertBulletedList:(id)arg1;
- (void)exportAttachmentsToIPhoto:(id)arg1;
- (void)importInvitations:(id)arg1;
- (void)chooseApplicationToOpenAttachment:(id)arg1;
- (void)openAttachmentWithApplication:(id)arg1;
- (void)viewAttachmentInline:(id)arg1;
- (id)editingDelegate;
- (void)saveAttachmentToDownloadsDirectory:(id)arg1;
- (void)saveAttachment:(id)arg1;
- (void)quickLookAttachment:(id)arg1;
- (void)quickLookSelectedAttachments:(id)arg1;
- (void)openAttachment:(id)arg1;
- (id)attachmentForEvent:(id)arg1;
- (BOOL)moreThanOneAttachmentSelected;
- (BOOL)allSelectedAttachmentsArePhotos;
- (BOOL)selectionIsOneAttachment;
@property(readonly, copy, nonatomic) NSArray *selectedAttachments;
- (void)willShowContextualMenuForAttachment:(id)arg1;
- (void)_setAttachmentsForContextualMenu:(id)arg1;
- (id)_attachmentsForContextualMenu;
- (id)selectedAttributedString;
- (void)_updateFontPanel;
- (void)paste:(id)arg1;

@end

