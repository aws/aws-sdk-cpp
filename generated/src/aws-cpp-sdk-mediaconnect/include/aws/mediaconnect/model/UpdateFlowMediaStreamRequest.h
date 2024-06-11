/**
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
    AWS_MEDIACONNECT_API UpdateFlowMediaStreamRequest();

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
    inline const MediaStreamAttributesRequest& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const MediaStreamAttributesRequest& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(MediaStreamAttributesRequest&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline UpdateFlowMediaStreamRequest& WithAttributes(const MediaStreamAttributesRequest& value) { SetAttributes(value); return *this;}
    inline UpdateFlowMediaStreamRequest& WithAttributes(MediaStreamAttributesRequest&& value) { SetAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The sample rate (in Hz) for the stream. If the media stream type is video or
     * ancillary data, set this value to 90000. If the media stream type is audio, set
     * this value to either 48000 or 96000.
     */
    inline int GetClockRate() const{ return m_clockRate; }
    inline bool ClockRateHasBeenSet() const { return m_clockRateHasBeenSet; }
    inline void SetClockRate(int value) { m_clockRateHasBeenSet = true; m_clockRate = value; }
    inline UpdateFlowMediaStreamRequest& WithClockRate(int value) { SetClockRate(value); return *this;}
    ///@}

    ///@{
    /**
     * Description
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateFlowMediaStreamRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateFlowMediaStreamRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateFlowMediaStreamRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * The Amazon Resource Name (ARN) of the flow.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }
    inline void SetFlowArn(const Aws::String& value) { m_flowArnHasBeenSet = true; m_flowArn = value; }
    inline void SetFlowArn(Aws::String&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::move(value); }
    inline void SetFlowArn(const char* value) { m_flowArnHasBeenSet = true; m_flowArn.assign(value); }
    inline UpdateFlowMediaStreamRequest& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}
    inline UpdateFlowMediaStreamRequest& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}
    inline UpdateFlowMediaStreamRequest& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The name of the media stream that you want to update.
     */
    inline const Aws::String& GetMediaStreamName() const{ return m_mediaStreamName; }
    inline bool MediaStreamNameHasBeenSet() const { return m_mediaStreamNameHasBeenSet; }
    inline void SetMediaStreamName(const Aws::String& value) { m_mediaStreamNameHasBeenSet = true; m_mediaStreamName = value; }
    inline void SetMediaStreamName(Aws::String&& value) { m_mediaStreamNameHasBeenSet = true; m_mediaStreamName = std::move(value); }
    inline void SetMediaStreamName(const char* value) { m_mediaStreamNameHasBeenSet = true; m_mediaStreamName.assign(value); }
    inline UpdateFlowMediaStreamRequest& WithMediaStreamName(const Aws::String& value) { SetMediaStreamName(value); return *this;}
    inline UpdateFlowMediaStreamRequest& WithMediaStreamName(Aws::String&& value) { SetMediaStreamName(std::move(value)); return *this;}
    inline UpdateFlowMediaStreamRequest& WithMediaStreamName(const char* value) { SetMediaStreamName(value); return *this;}
    ///@}

    ///@{
    /**
     * The type of media stream.
     */
    inline const MediaStreamType& GetMediaStreamType() const{ return m_mediaStreamType; }
    inline bool MediaStreamTypeHasBeenSet() const { return m_mediaStreamTypeHasBeenSet; }
    inline void SetMediaStreamType(const MediaStreamType& value) { m_mediaStreamTypeHasBeenSet = true; m_mediaStreamType = value; }
    inline void SetMediaStreamType(MediaStreamType&& value) { m_mediaStreamTypeHasBeenSet = true; m_mediaStreamType = std::move(value); }
    inline UpdateFlowMediaStreamRequest& WithMediaStreamType(const MediaStreamType& value) { SetMediaStreamType(value); return *this;}
    inline UpdateFlowMediaStreamRequest& WithMediaStreamType(MediaStreamType&& value) { SetMediaStreamType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The resolution of the video.
     */
    inline const Aws::String& GetVideoFormat() const{ return m_videoFormat; }
    inline bool VideoFormatHasBeenSet() const { return m_videoFormatHasBeenSet; }
    inline void SetVideoFormat(const Aws::String& value) { m_videoFormatHasBeenSet = true; m_videoFormat = value; }
    inline void SetVideoFormat(Aws::String&& value) { m_videoFormatHasBeenSet = true; m_videoFormat = std::move(value); }
    inline void SetVideoFormat(const char* value) { m_videoFormatHasBeenSet = true; m_videoFormat.assign(value); }
    inline UpdateFlowMediaStreamRequest& WithVideoFormat(const Aws::String& value) { SetVideoFormat(value); return *this;}
    inline UpdateFlowMediaStreamRequest& WithVideoFormat(Aws::String&& value) { SetVideoFormat(std::move(value)); return *this;}
    inline UpdateFlowMediaStreamRequest& WithVideoFormat(const char* value) { SetVideoFormat(value); return *this;}
    ///@}
  private:

    MediaStreamAttributesRequest m_attributes;
    bool m_attributesHasBeenSet = false;

    int m_clockRate;
    bool m_clockRateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_flowArn;
    bool m_flowArnHasBeenSet = false;

    Aws::String m_mediaStreamName;
    bool m_mediaStreamNameHasBeenSet = false;

    MediaStreamType m_mediaStreamType;
    bool m_mediaStreamTypeHasBeenSet = false;

    Aws::String m_videoFormat;
    bool m_videoFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
