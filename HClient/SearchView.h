//
//  SearchView.h
//  HClient
//
//  Created by 강희찬 on 2017. 6. 11..
//  Copyright © 2017년 mario-kang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <SafariServices/SafariServices.h>
#import "String.h"
#import "InfoDetail.h"

@interface SearchView : UITableViewController <UIViewControllerPreviewingDelegate>

@property (strong) UIActivityIndicatorView *activityController;
@property (strong) NSString *type;
@property (strong) NSString *tag;
@property (strong) NSMutableArray *arr;
@property (strong) NSMutableArray *arr2;
@property (strong) NSMutableArray *arr3;
@property (strong) NSMutableArray *celllist;
@property (strong) NSString *hitomiNumber;
@property (strong) NSMutableDictionary *numberDic;
@property bool pages;
@property bool numbered;
@property NSInteger page;

@property (strong) id previewingContext;

@end

@interface SearchCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIImageView *DJImage;
@property (weak, nonatomic) IBOutlet UILabel *DJTitle;
@property (weak, nonatomic) IBOutlet UILabel *DJArtist;
@property (weak, nonatomic) IBOutlet UILabel *DJLang;
@property (weak, nonatomic) IBOutlet UILabel *DJTag;
@property (weak, nonatomic) IBOutlet UILabel *DJSeries;

@end
