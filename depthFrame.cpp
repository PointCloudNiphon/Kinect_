
		/********------------------------深度流--------------------------------------------------***********/

		//获取Frame
		IDepthFrame* pDepthFrame = nullptr;
		hResult = pDepthReader->AcquireLatestFrame(&pDepthFrame);
		if (SUCCEEDED(hResult))
		{
			hResult = pDepthFrame->AccessUnderlyingBuffer(&bufferSize,
				reinterpret_cast<UINT16**>(&bufferMat.data));
			if (SUCCEEDED(hResult))
			{
				bufferMat.convertTo(depthMat, CV_8U, -255.0f / MaxDitance, 255.0f);	//16位转换为8位
			}
		}
		SafeRelease(pDepthFrame);
