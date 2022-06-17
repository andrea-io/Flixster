//
//  DetailTableViewCell.h
//  Flixter2
//
//  Created by Andrea Gonzalez on 6/17/22.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface DetailTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *detailTitleLabel;
@property (weak, nonatomic) IBOutlet UILabel *detailSynopsisLabel;
@property (weak, nonatomic) IBOutlet UIImageView *detailMoviePoster;
@property (weak, nonatomic) IBOutlet UIImageView *largePosterBackground;

@end

NS_ASSUME_NONNULL_END
