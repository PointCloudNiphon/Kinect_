/********--------------------彩色流------------------------------------------------------***********/
		//IColorFrame* pColorFrame = NULL;
		//hResult = pColorReader->AcquireLatestFrame(&pColorFrame);
		//ColorImageFormat imageFormat = ColorImageFormat_None;
		//if (SUCCEEDED(hResult)){
		//	ColorImageFormat imageFormat = ColorImageFormat_None;
		//	if (SUCCEEDED(hResult))
		//	{
		//		hResult = pColorFrame->get_RawColorImageFormat(&imageFormat);
		//	}
		//	if (SUCCEEDED(hResult))
		//	{
		//		hResult = pColorFrame->get_RawColorImageFormat(&imageFormat);
		//	}
		//	if (SUCCEEDED(hResult))
		//	{
		//		if (imageFormat == ColorImageFormat_Bgra)//这里有两个format，不知道具体含义，大概一个预先分配内存，一个需要自己开空间吧
		//		{
		//			hResult = pColorFrame->AccessRawUnderlyingBuffer(&nBufferSize_coloar, reinterpret_cast<BYTE**>(&pBuffer_color));
		//		}
		//		else if (m_pColorRGBX)
		//		{
		//			pBuffer_color = m_pColorRGBX;
		//			nBufferSize_coloar = color_widht * color_height * sizeof(RGBQUAD);
		//			hResult = pColorFrame->CopyConvertedFrameDataToArray(nBufferSize_coloar, reinterpret_cast<BYTE*>(pBuffer_color), ColorImageFormat_Bgra);
		//		}
		//		else
		//		{
		//			hResult = E_FAIL;
		//		}
		//		colorImg = ConvertMat(pBuffer_color, color_widht, color_height);
		//	}
		//}
		//SafeRelease(pColorFrame);
		//Mat image;
		//Size size((int)colorImg.cols*0.5, (int)colorImg.rows*0.5);
		//resize(colorImg, image, size);
		//Mat imageROI, imageOri;
		//imageROI = image(Rect(400, 0, image.cols - 400, image.rows));
		//cv::imshow("color", image);
