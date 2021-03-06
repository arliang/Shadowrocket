//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DLWTableViewController.h"

#import "UISearchControllerDelegate-Protocol.h"

@class DLWConfigKeyValuesSearchController, DLWConfigReader, NSMutableArray, NSString, UISearchController;

@interface DLWConfigKeyValuesViewController : DLWTableViewController <UISearchControllerDelegate>
{
    _Bool _loadMoreAvailable;
    NSString *_section;
    NSMutableArray *_data;
    UISearchController *_searchController;
    long long _indexPathRow;
    DLWConfigReader *_configReader;
    DLWConfigKeyValuesSearchController *_searchResultController;
}

@property(retain, nonatomic) DLWConfigKeyValuesSearchController *searchResultController; // @synthesize searchResultController=_searchResultController;
@property(retain, nonatomic) DLWConfigReader *configReader; // @synthesize configReader=_configReader;
@property(nonatomic) long long indexPathRow; // @synthesize indexPathRow=_indexPathRow;
@property(nonatomic) _Bool loadMoreAvailable; // @synthesize loadMoreAvailable=_loadMoreAvailable;
@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) NSMutableArray *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *section; // @synthesize section=_section;
- (void).cxx_destruct;
- (void)configItemWillChangeNotification:(id)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)loadMoreData;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithConfigReader:(id)arg1 section:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

