//
//  FriendsTimelineController.h
//  TwitterFon
//
//  Created by kaz on 10/29/08.
//  Copyright 2008 naan studio. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TimeUtils.h"
#import "TimelineViewDataSource.h"

@interface TimelineViewController : UITableViewController {
    Stopwatch*              stopwatch;
    int                     tag;
    int                     unread;
    TimelineViewDataSource* timelineDataSource;

}

- (IBAction)reload:(id)sender;

@end
