
//  Created by Yahia El-Dow on 2/18/15.


#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@protocol SoapRequestDelegate <NSObject>

-(void) SoapRequest:(id) Request didFinishWithData:(NSMutableDictionary*) dict;
@optional
-(void) SoapRequest:(id)Request didFinishWithError:(int) ErrorCode;

@end


@interface SoapRequest : NSObject <NSXMLParserDelegate>

@property (strong,nonatomic) NSString *function;
@property (strong,nonatomic) NSString *att;
@property (strong,nonatomic) NSMutableArray *Dicts;
@property (strong,nonatomic) NSMutableArray *Keys;

@property (strong,nonatomic) NSMutableArray *values;
@property (strong,nonatomic) NSMutableDictionary *dict;
@property (strong,nonatomic) id<SoapRequestDelegate> delegate;
@property (strong,nonatomic) NSURLConnection *connect;
@property BOOL add;
-(id) initWithFunction:(NSString*) fun;
-(void) sendRequestWithAttributes:(NSDictionary*) dict;

@end
