//
//  DocumentScannerView.h
//



#import "DocumentDetectionController.h"
#import <React/RCTViewManager.h>

@interface DocumentScannerView : DocumentDetectionController

@property (nonatomic, copy) RCTDirectEventBlock onDeviceSetup;
@property (nonatomic, copy) RCTDirectEventBlock onTorchChanged;
@property (nonatomic, copy) RCTDirectEventBlock onPictureTaken;
@property (nonatomic, copy) RCTDirectEventBlock onPictureProcessed;
@property (nonatomic, copy) RCTDirectEventBlock onErrorProcessingImage;
@property (nonatomic, copy) RCTDirectEventBlock onRectangleDetected;

@property (nonatomic, assign) float capturedQuality;

- (void) capture;
- (void) startCamera;
- (void) stopCamera;
- (void) cleanup;

@end
