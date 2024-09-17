/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/MediaStreamAttributesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/MediaStreamType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MediaConnect
{
namespace Model
{

  /**
   * The media stream that you want to add to the flow.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AddMediaStreamRequest">AWS
   * API Reference</a></p>
   */
  class AddMediaStreamRequest
  {
  public:
    AWS_MEDIACONNECT_API AddMediaStreamRequest();
    AWS_MEDIACONNECT_API AddMediaStreamRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API AddMediaStreamRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The attributes that you want to assign to the new media stream.
     */
    inline const MediaStreamAttributesRequest& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const MediaStreamAttributesRequest& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(MediaStreamAttributesRequest&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline AddMediaStreamRequest& WithAttributes(const MediaStreamAttributesRequest& value) { SetAttributes(value); return *this;}
    inline AddMediaStreamRequest& WithAttributes(MediaStreamAttributesRequest&& value) { SetAttributes(std::move(value)); return *this;}
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
    inline AddMediaStreamRequest& WithClockRate(int value) { SetClockRate(value); return *this;}
    ///@}

    ///@{
    /**
     * A description that can help you quickly identify what your media stream is used
     * for.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline AddMediaStreamRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline AddMediaStreamRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline AddMediaStreamRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * A unique identifier for the media stream.
     */
    inline int GetMediaStreamId() const{ return m_mediaStreamId; }
    inline bool MediaStreamIdHasBeenSet() const { return m_mediaStreamIdHasBeenSet; }
    inline void SetMediaStreamId(int value) { m_mediaStreamIdHasBeenSet = true; m_mediaStreamId = value; }
    inline AddMediaStreamRequest& WithMediaStreamId(int value) { SetMediaStreamId(value); return *this;}
    ///@}

    ///@{
    /**
     * A name that helps you distinguish one media stream from another.
     */
    inline const Aws::String& GetMediaStreamName() const{ return m_mediaStreamName; }
    inline bool MediaStreamNameHasBeenSet() const { return m_mediaStreamNameHasBeenSet; }
    inline void SetMediaStreamName(const Aws::String& value) { m_mediaStreamNameHasBeenSet = true; m_mediaStreamName = value; }
    inline void SetMediaStreamName(Aws::String&& value) { m_mediaStreamNameHasBeenSet = true; m_mediaStreamName = std::move(value); }
    inline void SetMediaStreamName(const char* value) { m_mediaStreamNameHasBeenSet = true; m_mediaStreamName.assign(value); }
    inline AddMediaStreamRequest& WithMediaStreamName(const Aws::String& value) { SetMediaStreamName(value); return *this;}
    inline AddMediaStreamRequest& WithMediaStreamName(Aws::String&& value) { SetMediaStreamName(std::move(value)); return *this;}
    inline AddMediaStreamRequest& WithMediaStreamName(const char* value) { SetMediaStreamName(value); return *this;}
    ///@}

    ///@{
    /**
     * The type of media stream.
     */
    inline const MediaStreamType& GetMediaStreamType() const{ return m_mediaStreamType; }
    inline bool MediaStreamTypeHasBeenSet() const { return m_mediaStreamTypeHasBeenSet; }
    inline void SetMediaStreamType(const MediaStreamType& value) { m_mediaStreamTypeHasBeenSet = true; m_mediaStreamType = value; }
    inline void SetMediaStreamType(MediaStreamType&& value) { m_mediaStreamTypeHasBeenSet = true; m_mediaStreamType = std::move(value); }
    inline AddMediaStreamRequest& WithMediaStreamType(const MediaStreamType& value) { SetMediaStreamType(value); return *this;}
    inline AddMediaStreamRequest& WithMediaStreamType(MediaStreamType&& value) { SetMediaStreamType(std::move(value)); return *this;}
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
    inline AddMediaStreamRequest& WithVideoFormat(const Aws::String& value) { SetVideoFormat(value); return *this;}
    inline AddMediaStreamRequest& WithVideoFormat(Aws::String&& value) { SetVideoFormat(std::move(value)); return *this;}
    inline AddMediaStreamRequest& WithVideoFormat(const char* value) { SetVideoFormat(value); return *this;}
    ///@}
  private:

    MediaStreamAttributesRequest m_attributes;
    bool m_attributesHasBeenSet = false;

    int m_clockRate;
    bool m_clockRateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_mediaStreamId;
    bool m_mediaStreamIdHasBeenSet = false;

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
