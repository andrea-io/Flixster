//
//  DetailsViewController.h
//  Flixter2
//
//  Created by Andrea Gonzalez on 6/20/22.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface DetailsViewController : UIViewController
@property (nonatomic, strong) NSDictionary *detailDict;
@property (weak, nonatomic) IBOutlet UIImageView *largePosterImage;

@property (weak, nonatomic) IBOutlet UIImageView *miniPosterImage;
@property (weak, nonatomic) IBOutlet UILabel *detailSynopsis;
@property (weak, nonatomic) IBOutlet UILabel *detailTitle;


@end

NS_ASSUME_NONNULL_END
