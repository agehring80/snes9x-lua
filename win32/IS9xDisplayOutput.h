/*****************************************************************************\
     Snes9x - Portable Super Nintendo Entertainment System (TM) emulator.
                This file is licensed under the Snes9x License.
   For further information, consult the LICENSE file in the root directory.
\*****************************************************************************/

#ifndef IS9XDISPLAYOUTPUT_H
#define IS9XDISPLAYOUTPUT_H
#include "../port.h"
#include "wsnes9x.h"
#include "render.h"
#include <vector>
#include <functional>

/* IS9xDisplayOutput
	Interface for display driver.
*/
class IS9xDisplayOutput
{
private:

public:
	virtual bool Initialize(HWND hWnd)=0;
	virtual void DeInitialize()=0;
	virtual void Render(SSurface Src)=0;
	virtual bool ChangeRenderSize(unsigned int newWidth, unsigned int newHeight)=0;
	virtual bool ApplyDisplayChanges(void)=0;
	virtual bool SetFullscreen(bool fullscreen)=0;
	virtual void SetSnes9xColorFormat()=0;
	virtual void EnumModes(std::vector<dMode> *modeVector)=0;
	virtual std::vector<ShaderParam>* GetShaderParameters(void) { return nullptr; }
	virtual std::function<void(const char *)> GetShaderParametersSaveFunction() { return std::function<void(const char*)>(); }
};


#endif
