//-------------------------------------------------------------------------------------------------------
// VST Plug-Ins SDK
// Version 2.4		$Date: 2006/11/13 09:08:27 $
// � 2006, Steinberg Media Technologies, All Rights Reserved
//-------------------------------------------------------------------------------------------------------

#include <stdio.h>
#include "public.sdk/source/vst2.x/audioeffectx.h"

using namespace std;


//-------------------------------------------------------------------------------------------------------
class MisEfx : public AudioEffectX
{



public:
    
	MisEfx(audioMasterCallback audioMaster);
	~MisEfx();

	// Processing
	virtual void processReplacing(float** inputs, float** outputs, VstInt32 sampleFrames) override;


};


