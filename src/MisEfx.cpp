//-------------------------------------------------------------------------------------------------------
// VST Plug-Ins SDK
// Version 2.4		$Date: 2006/11/13 09:08:27 $
// 2006, Steinberg Media Technologies, All Rights Reserved
//-------------------------------------------------------------------------------------------------------

#include "MisEfx.h"


//-------------------------------------------------------------------------------------------------------
AudioEffect* createEffectInstance(audioMasterCallback audioMaster)
{
    return new MisEfx(audioMaster);
}

//-------------------------------------------------------------------------------------------------------
MisEfx::MisEfx(audioMasterCallback audioMaster)
: AudioEffectX(audioMaster, 0, 0)	// n program, n parameters
{
    setNumInputs(2);		// stereo in
    setNumOutputs(2);		// stereo out
    setUniqueID('vMis');	// identify
    
}

//-----------------------------------------------------------------------------------------
void MisEfx::processReplacing(float** inputs, float** outputs, VstInt32 sampleFrames)
{
    // PROCESS SINGLE PRECISION
    
    float *inL = inputs[0]; // buffer input left
    float *inR = inputs[1]; // buffer input right
    
    float *outL = outputs[0]; // buffer output left
    float *outR = outputs[1]; // buffer output right
    
}


//-------------------------------------------------------------------------------------------------------
MisEfx::~MisEfx()
{
    
}


