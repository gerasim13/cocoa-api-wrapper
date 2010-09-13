//
//  SCSoundCloudConnection.h
//  SoundCloudAPI
//
//  Created by Ullrich Schäfer on 03.09.10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>


@class NXOAuth2Client, NXOAuth2Connection;

@class SCSoundCloudAPI;
@protocol SCSoundCloudConnectionDelegate;


/*!
 * A wrapper arond NXOAuth2Connection
 */
@interface SCSoundCloudConnection : NSObject {
@private
	NXOAuth2Connection	*connection;
	NSObject<SCSoundCloudConnectionDelegate>*	delegate;	// retained!!!
	SCSoundCloudAPI		*soundCloudAPI;	// assigned
}

+ (SCSoundCloudConnection *)connectionFromSoundCloudAPI:(SCSoundCloudAPI *)soundCloudAPI
												request:(NSURLRequest *)request
											oauthClient:(NXOAuth2Client *)oauthClient
												context:(id)context
									 connectionDelegate:(NSObject<SCSoundCloudConnectionDelegate> *)connectionDelegate;

- (id)initWithSoundCloudAPI:(SCSoundCloudAPI *)soundCloudAPI
					request:(NSURLRequest *)request
				oauthClient:(NXOAuth2Client *)oauthClient
					context:(id)context
		 connectionDelegate:(NSObject<SCSoundCloudConnectionDelegate> *)connectionDelegate;

- (void)cancel;

@end