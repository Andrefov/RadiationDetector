#pragma once
#include "AudioBuzzerInterface.h"
#include "DetectorInterface.h"
#include "../RadiationDetectorTest/AudioBuzzerMock.h"
#include "../RadiationDetectorTest/DetectorInterfaceMock.h"
#include "../RadiationDetectorTest/ElectronicDisplayMock.h"
#include <memory>


class RadiationDetector : public DetectorInterface
{
public:

	RadiationDetector();
	AudioBuzzerMock* audioPtr;
	DetectorInterfaceMock* detectorPtr;
	ElectronicDisplayMock* displayPtr;

};


