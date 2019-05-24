//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSDictionary, UIButton, UITextView;

@interface DLWConfigKeyValueViewController : UIViewController
{
    NSDictionary *_data;
    UIButton *_saveButton;
    UITextView *_textView;
}

@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIButton *saveButton; // @synthesize saveButton=_saveButton;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)UIKeyboardWillHideNotification:(id)arg1;
- (void)UIKeyboardDidShowNotification:(id)arg1;
- (_Bool)shouldAutorotate;
- (void)viewWillLayoutSubviews;
- (void)saveButtonTouched;
- (void)setupSaveButton;
- (void)setupTextView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithData:(id)arg1;

@end
