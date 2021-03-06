//
//  Character.h
//  CharacterGenerator
//
//  Created by Henna on 8/2/15.
//  Copyright (c) 2015 Mike Kavouras. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface Character : NSObject

//user generated
@property (nonatomic) NSString * name;
@property (nonatomic) int pushupLimit;
@property (nonatomic) BOOL canFight;
@property (nonatomic) int beerLimit;
@property (nonatomic) UIImage * image;

//we can determine this
@property (nonatomic) NSString * superPower;

//Method
//- (void) determineSuperPower;
- (void) initializeName: (NSString *) name pushups: (int) pushupLimit fighter: (BOOL) canFight andBeer: (int) beerLimit withImage: (UIImage*) image;




@end
