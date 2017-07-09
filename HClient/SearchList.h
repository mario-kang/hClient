//
//  SearchList.h
//  HClient
//
//  Created by 강희찬 on 2017. 6. 11..
//  Copyright © 2017년 mario-kang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SearchView.h"

@interface SearchList : UITableViewController<UISearchBarDelegate, UIViewControllerPreviewingDelegate>

@property (weak, nonatomic) IBOutlet UISearchBar *Search;

@property (strong) NSMutableArray *allList;
@property (strong) NSArray *allList2;
@property (strong) UIActivityIndicatorView *activityController;
@property (strong) NSString *searchWord;

@property (strong) id previewingContext;

@property bool tags;

@end
