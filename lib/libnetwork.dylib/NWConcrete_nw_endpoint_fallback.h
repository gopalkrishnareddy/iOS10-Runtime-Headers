/* Generated by RuntimeBrowser
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_endpoint_fallback : NSObject <OS_nw_endpoint_fallback> {
    bool  fallback_based_on_interface_type;
    NWConcrete_nw_endpoint_handler * fallback_child;
    NSObject<OS_nw_interface> * fallback_interface;
    void * fallback_timer;
    NWConcrete_nw_endpoint_handler * primary_child;
    NSObject<OS_nw_interface> * primary_interface;
    int  result;
    bool  started_fallback;
    bool  weak_fallback;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)applyWithHandler:(id)arg1 toChildren:(id /* block */)arg2;
- (void)cancelWithHandler:(id)arg1 forced:(bool)arg2;
- (void)dealloc;
- (id)init;
- (void)startWithHandler:(id)arg1;
- (void)updatePathWithHandler:(id)arg1;

@end