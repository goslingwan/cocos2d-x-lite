#pragma once

NS_CC_BEGIN

class CCMTLFrameBuffer : public GFXFramebuffer
{
public:
    CCMTLFrameBuffer(GFXDevice* device);
    ~CCMTLFrameBuffer();
    
    virtual bool initialize(const GFXFramebufferInfo& info) override;
    virtual void destroy() override;
};

NS_CC_END