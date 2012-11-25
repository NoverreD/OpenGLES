//
//  OpenGLView.h
//  Tutorial01
//
//  Created by kesalin on 12-11-24.
//  Copyright (c) 2012年 kesalin@gmail.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#include <OpenGLES/ES2/gl.h>
#include <OpenGLES/ES2/glext.h>

@interface OpenGLView : UIView {
    CAEAGLLayer* _eaglLayer;
    EAGLContext* _context;
    GLuint _colorRenderBuffer;
    GLuint _frameBuffer;
}
@end
