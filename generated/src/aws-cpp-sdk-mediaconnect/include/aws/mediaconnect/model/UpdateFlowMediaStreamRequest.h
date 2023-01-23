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


    /**
     * The attributes that you want to assign to the media stream.
     */
    inline const MediaStreamAttributesRequest& GetAttributes() const{ return m_attributes; }

    /**
     * The attributes that you want to assign to the media stream.
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * The attributes that you want to assign to the media stream.
     */
    inline void SetAttributes(const MediaStreamAttributesRequest& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * The attributes that you want to assign to the media stream.
     */
    inline void SetAttributes(MediaStreamAttributesRequest&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * The attributes that you want to assign to the media stream.
     */
    inline UpdateFlowMediaStreamRequest& WithAttributes(const MediaStreamAttributesRequest& value) { SetAttributes(value); return *this;}

    /**
     * The attributes that you want to assign to the media stream.
     */
    inline UpdateFlowMediaStreamRequest& WithAttributes(MediaStreamAttributesRequest&& value) { SetAttributes(std::move(value)); return *this;}


    /**
     * The sample rate (in Hz) for the stream. If the media stream type is video or
     * ancillary data, set this value to 90000. If the media stream type is audio, set
     * this value to either 48000 or 96000.
     */
    inline int GetClockRate() const{ return m_clockRate; }

    /**
     * The sample rate (in Hz) for the stream. If the media stream type is video or
     * ancillary data, set this value to 90000. If the media stream type is audio, set
     * this value to either 48000 or 96000.
     */
    inline bool ClockRateHasBeenSet() const { return m_clockRateHasBeenSet; }

    /**
     * The sample rate (in Hz) for the stream. If the media stream type is video or
     * ancillary data, set this value to 90000. If the media stream type is audio, set
     * this value to either 48000 or 96000.
     */
    inline void SetClockRate(int value) { m_clockRateHasBeenSet = true; m_clockRate = value; }

    /**
     * The sample rate (in Hz) for the stream. If the media stream type is video or
     * ancillary data, set this value to 90000. If the media stream type is audio, set
     * this value to either 48000 or 96000.
     */
    inline UpdateFlowMediaStreamRequest& WithClockRate(int value) { SetClockRate(value); return *this;}


    /**
     * Description
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * Description
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * Description
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * Description
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * Description
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * Description
     */
    inline UpdateFlowMediaStreamRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * Description
     */
    inline UpdateFlowMediaStreamRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * Description
     */
    inline UpdateFlowMediaStreamRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * The Amazon Resource Name (ARN) of the flow.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }

    /**
     * The Amazon Resource Name (ARN) of the flow.
     */
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }

    /**
     * The Amazon Resource Name (ARN) of the flow.
     */
    inline void SetFlowArn(const Aws::String& value) { m_flowArnHasBeenSet = true; m_flowArn = value; }

    /**
     * The Amazon Resource Name (ARN) of the flow.
     */
    inline void SetFlowArn(Aws::String&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) of the flow.
     */
    inline void SetFlowArn(const char* value) { m_flowArnHasBeenSet = true; m_flowArn.assign(value); }

    /**
     * The Amazon Resource Name (ARN) of the flow.
     */
    inline UpdateFlowMediaStreamRequest& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the flow.
     */
    inline UpdateFlowMediaStreamRequest& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the flow.
     */
    inline UpdateFlowMediaStreamRequest& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}


    /**
     * The name of the media stream that you want to update.
     */
    inline const Aws::String& GetMediaStreamName() const{ return m_mediaStreamName; }

    /**
     * The name of the media stream that you want to update.
     */
    inline bool MediaStreamNameHasBeenSet() const { return m_mediaStreamNameHasBeenSet; }

    /**
     * The name of the media stream that you want to update.
     */
    inline void SetMediaStreamName(const Aws::String& value) { m_mediaStreamNameHasBeenSet = true; m_mediaStreamName = value; }

    /**
     * The name of the media stream that you want to update.
     */
    inline void SetMediaStreamName(Aws::String&& value) { m_mediaStreamNameHasBeenSet = true; m_mediaStreamName = std::move(value); }

    /**
     * The name of the media stream that you want to update.
     */
    inline void SetMediaStreamName(const char* value) { m_mediaStreamNameHasBeenSet = true; m_mediaStreamName.assign(value); }

    /**
     * The name of the media stream that you want to update.
     */
    inline UpdateFlowMediaStreamRequest& WithMediaStreamName(const Aws::String& value) { SetMediaStreamName(value); return *this;}

    /**
     * The name of the media stream that you want to update.
     */
    inline UpdateFlowMediaStreamRequest& WithMediaStreamName(Aws::String&& value) { SetMediaStreamName(std::move(value)); return *this;}

    /**
     * The name of the media stream that you want to update.
     */
    inline UpdateFlowMediaStreamRequest& WithMediaStreamName(const char* value) { SetMediaStreamName(value); return *this;}


    /**
     * The type of media stream.
     */
    inline const MediaStreamType& GetMediaStreamType() const{ return m_mediaStreamType; }

    /**
     * The type of media stream.
     */
    inline bool MediaStreamTypeHasBeenSet() const { return m_mediaStreamTypeHasBeenSet; }

    /**
     * The type of media stream.
     */
    inline void SetMediaStreamType(const MediaStreamType& value) { m_mediaStreamTypeHasBeenSet = true; m_mediaStreamType = value; }

    /**
     * The type of media stream.
     */
    inline void SetMediaStreamType(MediaStreamType&& value) { m_mediaStreamTypeHasBeenSet = true; m_mediaStreamType = std::move(value); }

    /**
     * The type of media stream.
     */
    inline UpdateFlowMediaStreamRequest& WithMediaStreamType(const MediaStreamType& value) { SetMediaStreamType(value); return *this;}

    /**
     * The type of media stream.
     */
    inline UpdateFlowMediaStreamRequest& WithMediaStreamType(MediaStreamType&& value) { SetMediaStreamType(std::move(value)); return *this;}


    /**
     * The resolution of the video.
     */
    inline const Aws::String& GetVideoFormat() const{ return m_videoFormat; }

    /**
     * The resolution of the video.
     */
    inline bool VideoFormatHasBeenSet() const { return m_videoFormatHasBeenSet; }

    /**
     * The resolution of the video.
     */
    inline void SetVideoFormat(const Aws::String& value) { m_videoFormatHasBeenSet = true; m_videoFormat = value; }

    /**
     * The resolution of the video.
     */
    inline void SetVideoFormat(Aws::String&& value) { m_videoFormatHasBeenSet = true; m_videoFormat = std::move(value); }

    /**
     * The resolution of the video.
     */
    inline void SetVideoFormat(const char* value) { m_videoFormatHasBeenSet = true; m_videoFormat.assign(value); }

    /**
     * The resolution of the video.
     */
    inline UpdateFlowMediaStreamRequest& WithVideoFormat(const Aws::String& value) { SetVideoFormat(value); return *this;}

    /**
     * The resolution of the video.
     */
    inline UpdateFlowMediaStreamRequest& WithVideoFormat(Aws::String&& value) { SetVideoFormat(std::move(value)); return *this;}

    /**
     * The resolution of the video.
     */
    inline UpdateFlowMediaStreamRequest& WithVideoFormat(const char* value) { SetVideoFormat(value); return *this;}

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
