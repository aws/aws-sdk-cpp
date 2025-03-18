﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/mediaconnect/model/MediaStreamAttributesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/MediaStreamType.h>
#include <utility>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

  /**
   * The fields that you want to update in the media stream.<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateFlowMediaStreamRequest">AWS
   * API Reference</a></p>
   */
  class UpdateFlowMediaStreamRequest : public MediaConnectRequest
  {
  public:
    AWS_MEDIACONNECT_API UpdateFlowMediaStreamRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFlowMediaStream"; }

    AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * The attributes that you want to assign to the media stream.
     */
    inline const MediaStreamAttributesRequest& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = MediaStreamAttributesRequest>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = MediaStreamAttributesRequest>
    UpdateFlowMediaStreamRequest& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The sample rate (in Hz) for the stream. If the media stream type is video or
     * ancillary data, set this value to 90000. If the media stream type is audio, set
     * this value to either 48000 or 96000.
     */
    inline int GetClockRate() const { return m_clockRate; }
    inline bool ClockRateHasBeenSet() const { return m_clockRateHasBeenSet; }
    inline void SetClockRate(int value) { m_clockRateHasBeenSet = true; m_clockRate = value; }
    inline UpdateFlowMediaStreamRequest& WithClockRate(int value) { SetClockRate(value); return *this;}
    ///@}

    ///@{
    /**
     * Description
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateFlowMediaStreamRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The Amazon Resource Name (ARN) of the flow.
     */
    inline const Aws::String& GetFlowArn() const { return m_flowArn; }
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }
    template<typename FlowArnT = Aws::String>
    void SetFlowArn(FlowArnT&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::forward<FlowArnT>(value); }
    template<typename FlowArnT = Aws::String>
    UpdateFlowMediaStreamRequest& WithFlowArn(FlowArnT&& value) { SetFlowArn(std::forward<FlowArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The name of the media stream that you want to update.
     */
    inline const Aws::String& GetMediaStreamName() const { return m_mediaStreamName; }
    inline bool MediaStreamNameHasBeenSet() const { return m_mediaStreamNameHasBeenSet; }
    template<typename MediaStreamNameT = Aws::String>
    void SetMediaStreamName(MediaStreamNameT&& value) { m_mediaStreamNameHasBeenSet = true; m_mediaStreamName = std::forward<MediaStreamNameT>(value); }
    template<typename MediaStreamNameT = Aws::String>
    UpdateFlowMediaStreamRequest& WithMediaStreamName(MediaStreamNameT&& value) { SetMediaStreamName(std::forward<MediaStreamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The type of media stream.
     */
    inline MediaStreamType GetMediaStreamType() const { return m_mediaStreamType; }
    inline bool MediaStreamTypeHasBeenSet() const { return m_mediaStreamTypeHasBeenSet; }
    inline void SetMediaStreamType(MediaStreamType value) { m_mediaStreamTypeHasBeenSet = true; m_mediaStreamType = value; }
    inline UpdateFlowMediaStreamRequest& WithMediaStreamType(MediaStreamType value) { SetMediaStreamType(value); return *this;}
    ///@}

    ///@{
    /**
     * The resolution of the video.
     */
    inline const Aws::String& GetVideoFormat() const { return m_videoFormat; }
    inline bool VideoFormatHasBeenSet() const { return m_videoFormatHasBeenSet; }
    template<typename VideoFormatT = Aws::String>
    void SetVideoFormat(VideoFormatT&& value) { m_videoFormatHasBeenSet = true; m_videoFormat = std::forward<VideoFormatT>(value); }
    template<typename VideoFormatT = Aws::String>
    UpdateFlowMediaStreamRequest& WithVideoFormat(VideoFormatT&& value) { SetVideoFormat(std::forward<VideoFormatT>(value)); return *this;}
    ///@}
  private:

    MediaStreamAttributesRequest m_attributes;
    bool m_attributesHasBeenSet = false;

    int m_clockRate{0};
    bool m_clockRateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_flowArn;
    bool m_flowArnHasBeenSet = false;

    Aws::String m_mediaStreamName;
    bool m_mediaStreamNameHasBeenSet = false;

    MediaStreamType m_mediaStreamType{MediaStreamType::NOT_SET};
    bool m_mediaStreamTypeHasBeenSet = false;

    Aws::String m_videoFormat;
    bool m_videoFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
