/*
 * Copyright 2010 Ullrich Schäfer, Gernot Poetsch for SoundCloud Ltd.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License"); you may not
 * use this file except in compliance with the License. You may obtain a copy of
 * the License at
 * 
 * http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 * License for the specific language governing permissions and limitations under
 * the License.
 *
 * For more information and documentation refer to
 * http://soundcloud.com/api
 * 
 */

#include "SCAPI.h"

@interface iPhoneTestAppViewController : UIViewController <SCSoundCloudAPIDelegate> {
    IBOutlet UIProgressView *progresBar;
    IBOutlet UITextField *trackNameField;
	IBOutlet UIButton *postButton;
    IBOutlet UILabel *trackNumberLabel;
    IBOutlet UILabel *usernameLabel;
	
	SCSoundCloudAPI *scAPI;
	id uploadConnectionId;
}
@property (nonatomic, retain) IBOutlet UIButton *postButton;
@property (nonatomic, retain) IBOutlet UITextField *trackNameField;

- (IBAction)sendRequest:(id)sender;

-(void)requestUserInfo;

@end

