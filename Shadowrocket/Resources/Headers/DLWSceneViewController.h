//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DLWViewController.h"

@class DLWRadioItem, NSArray, NSMutableDictionary, RERadioItem, RETextItem, UIButton;
@protocol DLWSceneViewControllerDelegate;

@interface DLWSceneViewController : DLWViewController
{
    NSMutableDictionary *_scene;
    id <DLWSceneViewControllerDelegate> _delegate;
    UIButton *_saveButton;
    RETextItem *_remarkTextItem;
    RETextItem *_valueTextItem;
    DLWRadioItem *_routingTextItem;
    RERadioItem *_serverRadioItem;
    RERadioItem *_groupRadioItem;
    RERadioItem *_typeRadioItem;
    RERadioItem *_nameRadioItem;
    RERadioItem *_ruleRadioItem;
    NSArray *_sceneNames;
}

@property(retain, nonatomic) NSArray *sceneNames; // @synthesize sceneNames=_sceneNames;
@property(retain, nonatomic) RERadioItem *ruleRadioItem; // @synthesize ruleRadioItem=_ruleRadioItem;
@property(retain, nonatomic) RERadioItem *nameRadioItem; // @synthesize nameRadioItem=_nameRadioItem;
@property(retain, nonatomic) RERadioItem *typeRadioItem; // @synthesize typeRadioItem=_typeRadioItem;
@property(retain, nonatomic) RERadioItem *groupRadioItem; // @synthesize groupRadioItem=_groupRadioItem;
@property(retain, nonatomic) RERadioItem *serverRadioItem; // @synthesize serverRadioItem=_serverRadioItem;
@property(retain, nonatomic) DLWRadioItem *routingTextItem; // @synthesize routingTextItem=_routingTextItem;
@property(retain, nonatomic) RETextItem *valueTextItem; // @synthesize valueTextItem=_valueTextItem;
@property(retain, nonatomic) RETextItem *remarkTextItem; // @synthesize remarkTextItem=_remarkTextItem;
@property(retain, nonatomic) UIButton *saveButton; // @synthesize saveButton=_saveButton;
@property(nonatomic) __weak id <DLWSceneViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableDictionary *scene; // @synthesize scene=_scene;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 willLayoutCellSubviews:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)saveButtonTouched;
- (void)presentGroupOptionsViewController:(id)arg1;
- (void)presentGroupViewController:(id)arg1;
- (void)setupSaveButton;
- (id)lookupSSID;
- (void)setupTableViewManager;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)arg1;

@end

