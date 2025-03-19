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
   * <p> The media stream that you want to add to the flow. </p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AddMediaStreamRequest">AWS
   * API Reference</a></p>
   */
  class AddMediaStreamRequest
  {
  public:
    AWS_MEDIACONNECT_API AddMediaStreamRequest() = default;
    AWS_MEDIACONNECT_API AddMediaStreamRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API AddMediaStreamRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The attributes that you want to assign to the new media stream.</p>
     */
    inline const MediaStreamAttributesRequest& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = MediaStreamAttributesRequest>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = MediaStreamAttributesRequest>
    AddMediaStreamRequest& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The sample rate (in Hz) for the stream. If the media stream type is video or
     * ancillary data, set this value to 90000. If the media stream type is audio, set
     * this value to either 48000 or 96000.</p>
     */
    inline int GetClockRate() const { return m_clockRate; }
    inline bool ClockRateHasBeenSet() const { return m_clockRateHasBeenSet; }
    inline void SetClockRate(int value) { m_clockRateHasBeenSet = true; m_clockRate = value; }
    inline AddMediaStreamRequest& WithClockRate(int value) { SetClockRate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A description that can help you quickly identify what your media stream is
     * used for.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AddMediaStreamRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A unique identifier for the media stream. </p>
     */
    inline int GetMediaStreamId() const { return m_mediaStreamId; }
    inline bool MediaStreamIdHasBeenSet() const { return m_mediaStreamIdHasBeenSet; }
    inline void SetMediaStreamId(int value) { m_mediaStreamIdHasBeenSet = true; m_mediaStreamId = value; }
    inline AddMediaStreamRequest& WithMediaStreamId(int value) { SetMediaStreamId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A name that helps you distinguish one media stream from another.</p>
     */
    inline const Aws::String& GetMediaStreamName() const { return m_mediaStreamName; }
    inline bool MediaStreamNameHasBeenSet() const { return m_mediaStreamNameHasBeenSet; }
    template<typename MediaStreamNameT = Aws::String>
    void SetMediaStreamName(MediaStreamNameT&& value) { m_mediaStreamNameHasBeenSet = true; m_mediaStreamName = std::forward<MediaStreamNameT>(value); }
    template<typename MediaStreamNameT = Aws::String>
    AddMediaStreamRequest& WithMediaStreamName(MediaStreamNameT&& value) { SetMediaStreamName(std::forward<MediaStreamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of media stream.</p>
     */
    inline MediaStreamType GetMediaStreamType() const { return m_mediaStreamType; }
    inline bool MediaStreamTypeHasBeenSet() const { return m_mediaStreamTypeHasBeenSet; }
    inline void SetMediaStreamType(MediaStreamType value) { m_mediaStreamTypeHasBeenSet = true; m_mediaStreamType = value; }
    inline AddMediaStreamRequest& WithMediaStreamType(MediaStreamType value) { SetMediaStreamType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The resolution of the video.</p>
     */
    inline const Aws::String& GetVideoFormat() const { return m_videoFormat; }
    inline bool VideoFormatHasBeenSet() const { return m_videoFormatHasBeenSet; }
    template<typename VideoFormatT = Aws::String>
    void SetVideoFormat(VideoFormatT&& value) { m_videoFormatHasBeenSet = true; m_videoFormat = std::forward<VideoFormatT>(value); }
    template<typename VideoFormatT = Aws::String>
    AddMediaStreamRequest& WithVideoFormat(VideoFormatT&& value) { SetVideoFormat(std::forward<VideoFormatT>(value)); return *this;}
    ///@}
  private:

    MediaStreamAttributesRequest m_attributes;
    bool m_attributesHasBeenSet = false;

    int m_clockRate{0};
    bool m_clockRateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_mediaStreamId{0};
    bool m_mediaStreamIdHasBeenSet = false;

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
