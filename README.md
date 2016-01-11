# Objective-C-
to use SoapRequest class follow this steps 
    1-Copy SoapRequest.h & SoapRequest.m in ur project 
    2-Import on Header Class SoapRequest >>   #import "SoapRequest.h"
    3-Trying to Implement Delegate <SoapRequestDelegate>
    4-useing  
    SoapRequest *soapR = [[SoapRequest alloc] initWithFunction:FUNCTION_NAME];
        soapR.delegate=self;
        NSDictionary *par = @{@"username":@"TestUsername" , @"password":@"TestPassword"};
        [soapR sendRequestWithAttributes:par];
        
    5- Call Delegate Methods 
    -(void) SoapRequest:(id)Request didFinishWithData:(NSMutableDictionary *)dict  {
        
             SoapRequest *s = Request;  
             for (NSDictionary *d in s.Dicts)
             NSLog(@"Data  >>>> %@",d);
       
        
}
   
      -(void)SoapRequest:(id)Request didFinishWithError:(int)ErrorCode{
         SoapRequest *s = Request;
         NSLog(@"error %@",s);
}


// if need any more helping send mail to me >> yahia.eldow@gmail.com
//   Enjoy
