/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/MediaStreamAttributes.h>
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
   * A single track or stream of media that contains video, audio, or ancillary data.
   * After you add a media stream to a flow, you can associate it with sources and
   * outputs on that flow, as long as they use the CDI protocol or the ST 2110 JPEG
   * XS protocol. Each source or output can consist of one or many media
   * streams.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/MediaStream">AWS
   * API Reference</a></p>
   */
  class MediaStream
  {
  public:
    AWS_MEDIACONNECT_API MediaStream() = default;
    AWS_MEDIACONNECT_API MediaStream(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API MediaStream& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Attributes that are related to the media stream.
     */
    inline const MediaStreamAttributes& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = MediaStreamAttributes>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = MediaStreamAttributes>
    MediaStream& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The sample rate for the stream. This value is measured in Hz.
     */
    inline int GetClockRate() const { return m_clockRate; }
    inline bool ClockRateHasBeenSet() const { return m_clockRateHasBeenSet; }
    inline void SetClockRate(int value) { m_clockRateHasBeenSet = true; m_clockRate = value; }
    inline MediaStream& WithClockRate(int value) { SetClockRate(value); return *this;}
    ///@}

    ///@{
    /**
     * A description that can help you quickly identify what your media stream is used
     * for.
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    MediaStream& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The format type number (sometimes referred to as RTP payload type) of the media
     * stream. MediaConnect assigns this value to the media stream. For ST 2110 JPEG XS
     * outputs, you need to provide this value to the receiver.
     */
    inline int GetFmt() const { return m_fmt; }
    inline bool FmtHasBeenSet() const { return m_fmtHasBeenSet; }
    inline void SetFmt(int value) { m_fmtHasBeenSet = true; m_fmt = value; }
    inline MediaStream& WithFmt(int value) { SetFmt(value); return *this;}
    ///@}

    ///@{
    /**
     * A unique identifier for the media stream.
     */
    inline int GetMediaStreamId() const { return m_mediaStreamId; }
    inline bool MediaStreamIdHasBeenSet() const { return m_mediaStreamIdHasBeenSet; }
    inline void SetMediaStreamId(int value) { m_mediaStreamIdHasBeenSet = true; m_mediaStreamId = value; }
    inline MediaStream& WithMediaStreamId(int value) { SetMediaStreamId(value); return *this;}
    ///@}

    ///@{
    /**
     * A name that helps you distinguish one media stream from another.
     */
    inline const Aws::String& GetMediaStreamName() const { return m_mediaStreamName; }
    inline bool MediaStreamNameHasBeenSet() const { return m_mediaStreamNameHasBeenSet; }
    template<typename MediaStreamNameT = Aws::String>
    void SetMediaStreamName(MediaStreamNameT&& value) { m_mediaStreamNameHasBeenSet = true; m_mediaStreamName = std::forward<MediaStreamNameT>(value); }
    template<typename MediaStreamNameT = Aws::String>
    MediaStream& WithMediaStreamName(MediaStreamNameT&& value) { SetMediaStreamName(std::forward<MediaStreamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The type of media stream.
     */
    inline MediaStreamType GetMediaStreamType() const { return m_mediaStreamType; }
    inline bool MediaStreamTypeHasBeenSet() const { return m_mediaStreamTypeHasBeenSet; }
    inline void SetMediaStreamType(MediaStreamType value) { m_mediaStreamTypeHasBeenSet = true; m_mediaStreamType = value; }
    inline MediaStream& WithMediaStreamType(MediaStreamType value) { SetMediaStreamType(value); return *this;}
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
    MediaStream& WithVideoFormat(VideoFormatT&& value) { SetVideoFormat(std::forward<VideoFormatT>(value)); return *this;}
    ///@}
  private:

    MediaStreamAttributes m_attributes;
    bool m_attributesHasBeenSet = false;

    int m_clockRate{0};
    bool m_clockRateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_fmt{0};
    bool m_fmtHasBeenSet = false;

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
