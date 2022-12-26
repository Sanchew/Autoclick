//
//  Clicker.h
//  Autoclick
//

#import <Foundation/Foundation.h>

@interface Clicker : NSObject {
    BOOL isClicking;
    BOOL isWaiting;
    BOOL fnPressed;
    NSInteger clicks;
    
    NSTimer* waitingTimer;
    NSInteger stationarySeconds;
    NSTimeInterval lastMoved; // Mouse
    NSTextField* statusLabel;
    
    NSDictionary* params; // for keeping the parameters between threads and timers
    NSThread* clickThread;
}

@property (assign) BOOL isClicking;

- (void)stopClicking;
- (void)startClicking:(int)button rate:(NSInteger)rate
                clickTimes:(NSInteger)times randomMilliSecond:(NSInteger) milliSecond
                startAfter:(NSInteger)start stopAfter:(NSInteger)stop
              ifStationaryFor:(NSInteger)stationary;

@end
