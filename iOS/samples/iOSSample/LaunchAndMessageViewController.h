//
//  Copyright (c) Microsoft Corporation. All rights reserved.
//

#pragma once

#import <ConnectedDevices/Discovery/MCDRemoteSystem.h>
#import <UIKit/UIKit.h>

@interface LaunchAndMessageViewController : UIViewController

@property MCDRemoteSystemApplication* selectedApplication;
@property(weak, nonatomic) IBOutlet UILabel* applicationNameLabel;
@property(weak, nonatomic) IBOutlet UITextField* uriField;
@property(weak, nonatomic) IBOutlet UILabel* appServiceStatusLabel;
- (IBAction)launchUriButton:(id)sender;
- (IBAction)connectAppServiceButton:(id)sender;
- (IBAction)sendAppServiceButton:(id)sender;

@end
