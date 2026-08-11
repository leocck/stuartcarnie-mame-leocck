#include <Foundation/Foundation.h>
#import "oecommon.h"

OE_EXPORTED_CLASS
@interface Options : NSObject

// macros

#define PATH_PROPERTY(OPT, SET, GET) @property (nonatomic) NSString *GET##Path;
#define DIRECTORY_PROPERTY(OPT, SET, GET) @property (nonatomic) NSString *GET##Directory;
#define BOOL_PROPERTY(OPT, SET, GET) @property (nonatomic) BOOL GET
#define INT_PROPERTY(OPT, SET, GET) @property (nonatomic) NSInteger GET
#define FLOAT_PROPERTY(OPT, SET, GET) @property (nonatomic) float GET

#pragma mark - paths

PATH_PROPERTY(MEDIAPATH, Roms, roms)
PATH_PROPERTY(HASHPATH, Hash, hash)
PATH_PROPERTY(SAMPLEPATH, Samples, samples)
PATH_PROPERTY(ARTPATH, Art, art)
PATH_PROPERTY(CTRLRPATH, Controller, controller)
PATH_PROPERTY(CHEATPATH, Cheat, cheat)
PATH_PROPERTY(CROSSHAIRPATH, CrossHair, crossHair)
PATH_PROPERTY(PLUGINSPATH, Plugins, plugins)
PATH_PROPERTY(LANGUAGEPATH, Language, language)

#pragma mark - directories

DIRECTORY_PROPERTY(CFG, CFG, CFG)
DIRECTORY_PROPERTY(NVRAM, NVRAM, NVRAM)
DIRECTORY_PROPERTY(INPUT, Input, input)
DIRECTORY_PROPERTY(STATE, State, state)
DIRECTORY_PROPERTY(SNAPSHOT, Snapshot, snapshot)
DIRECTORY_PROPERTY(DIFF, Diff, diff)
DIRECTORY_PROPERTY(COMMENT, Comment, comment)

/*! Sets a common base path for option paths
 *
 * @param path the common base path
 */
- (void)setBasePath:(NSString *)path;

#pragma mark - core performance options

BOOL_PROPERTY(AUTOFRAMESKIP, AutoFrameskip, autoFrameskip);
BOOL_PROPERTY(FRAMESKIP, Frameskip, frameskip);
FLOAT_PROPERTY(SPEED, Speed, speed);

#pragma mark - core render options

BOOL_PROPERTY(KEEPASPECT, KeepAspect, keepAspect);
BOOL_PROPERTY(UNEVENSTRETCH, UnevenStretch, unevenStretch);
BOOL_PROPERTY(UNEVENSTRETCHX, UnevenStretchX, unevenStretchX);
BOOL_PROPERTY(UNEVENSTRETCHY, UnevenStretchY, unevenStretchY);
BOOL_PROPERTY(AUTOSTRETCHXY, AutoStretchXY, autoStretchXY);
BOOL_PROPERTY(INTOVERSCAN, IntOverscan, intOverscan);
INT_PROPERTY(INTSCALEX, IntScaleX, intScaleX);
INT_PROPERTY(INTSCALEY, IntScaleY, intScaleY);

#pragma mark - core rotation options

BOOL_PROPERTY(ROTATE, Rotate, rotate);
BOOL_PROPERTY(ROR, ROR, ROR);
BOOL_PROPERTY(ROL, ROL, ROL);
BOOL_PROPERTY(AUTOROR, AutoROR, autoROR);
BOOL_PROPERTY(AUTOROL, AutoROL, autoROL);
BOOL_PROPERTY(FLIPX, FlipX, flipX);
BOOL_PROPERTY(FLIPY, FlipY, flipY);

#pragma mark - core artwork options

BOOL_PROPERTY(ARTWORK_CROP, ArtworkCrop, artworkCrop);

#pragma mark - core misc options

BOOL_PROPERTY(CHEAT, Cheat, cheat);

#undef PATH_PROPERTY
#undef DIRECTORY_PROPERTY
#undef BOOL_PROPERTY
#undef INT_PROPERTY
#undef FLOAT_PROPERTY

@end
