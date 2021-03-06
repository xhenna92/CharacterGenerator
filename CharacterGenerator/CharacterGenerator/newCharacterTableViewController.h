//
//  newCharacterTableViewController.h
//  CharacterGenerator
//
//  Created by Henna on 8/2/15.
//  Copyright (c) 2015 Mike Kavouras. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "characterModel.h"
#import "Character.h"

@interface newCharacterTableViewController : UITableViewController <UIPickerViewDelegate, UIPickerViewDataSource, UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    UIImagePickerController *imagePicker1;
    UIImagePickerController *imagePicker2;
    UIImage *image;
    IBOutlet UIImageView *imageView;
}

//- (IBAction)TakePhoto;
//- (IBAction)ChooseExisting;

- (IBAction)TakePhoto;
- (IBAction)ChooseExisting;

// numeric keyboard
@property (nonatomic)UIKeyboardType keyboardType;
// Data Picker 
@property (weak, nonatomic) IBOutlet UIPickerView *yesOrNoPicker;



//checks if they added an image
@property (nonatomic) BOOL addedImage;
@end
