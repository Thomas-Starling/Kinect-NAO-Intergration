/*******************************************************************************
*                                                                              *
*   PrimeSense NiTE 2.0 - User Viewer Sample                                   *
*   Copyright (C) 2012 PrimeSense Ltd.                                         *
*                                                                              *
*******************************************************************************/

//############################################################################
//############################################################################
// THE ORIGINAL SOURCE CODE OF THIS FILE WAS TAKEN FROM THE "UserViewer"
// PROJECT AND MODIFIED BY THOMAS STARLING ON 26/08/2017.
// MODIFIED, ADDED OR REMOVED PARTS ARE CLEARLY MARKED.
//############################################################################
//############################################################################

#include "Viewer.h"

int main(int argc, char** argv)
{
	openni::Status rc = openni::STATUS_OK;
	// ----Renamed window title
	SampleViewer sampleViewer("Kinect Sensor(Modified) - Thomas Starling");

	rc = sampleViewer.Init(argc, argv);
	if (rc != openni::STATUS_OK)
	{
		return 1;
	}

	sampleViewer.Run();
}
