#import <UIKit/UIKit.h>
#import <Preferences/PSListController.h>
#import <Preferences/PSListItemsController.h>
#import <Preferences/PSSpecifier.h>
#import <CepheiPrefs/HBListController.h>
#import <CepheiPrefs/HBAppearanceSettings.h>

@interface CPAAppearanceSettings : HBAppearanceSettings
@end

@interface CPAContributorsSubPrefsListController : HBListController
@property(nonatomic, retain)UILabel* titleLabel;
@end