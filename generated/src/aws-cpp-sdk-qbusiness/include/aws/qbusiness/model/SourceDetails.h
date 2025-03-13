/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/ImageSourceDetails.h>
#include <aws/qbusiness/model/AudioSourceDetails.h>
#include <aws/qbusiness/model/VideoSourceDetails.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Container for details about different types of media sources (image, audio,
   * or video).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/SourceDetails">AWS
   * API Reference</a></p>
   */
  class SourceDetails
  {
  public:
    AWS_QBUSINESS_API SourceDetails() = default;
    AWS_QBUSINESS_API SourceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API SourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details specific to image content within the source.</p>
     */
    inline const ImageSourceDetails& GetImageSourceDetails() const { return m_imageSourceDetails; }
    inline bool ImageSourceDetailsHasBeenSet() const { return m_imageSourceDetailsHasBeenSet; }
    template<typename ImageSourceDetailsT = ImageSourceDetails>
    void SetImageSourceDetails(ImageSourceDetailsT&& value) { m_imageSourceDetailsHasBeenSet = true; m_imageSourceDetails = std::forward<ImageSourceDetailsT>(value); }
    template<typename ImageSourceDetailsT = ImageSourceDetails>
    SourceDetails& WithImageSourceDetails(ImageSourceDetailsT&& value) { SetImageSourceDetails(std::forward<ImageSourceDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details specific to audio content within the source.</p>
     */
    inline const AudioSourceDetails& GetAudioSourceDetails() const { return m_audioSourceDetails; }
    inline bool AudioSourceDetailsHasBeenSet() const { return m_audioSourceDetailsHasBeenSet; }
    template<typename AudioSourceDetailsT = AudioSourceDetails>
    void SetAudioSourceDetails(AudioSourceDetailsT&& value) { m_audioSourceDetailsHasBeenSet = true; m_audioSourceDetails = std::forward<AudioSourceDetailsT>(value); }
    template<typename AudioSourceDetailsT = AudioSourceDetails>
    SourceDetails& WithAudioSourceDetails(AudioSourceDetailsT&& value) { SetAudioSourceDetails(std::forward<AudioSourceDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details specific to video content within the source.</p>
     */
    inline const VideoSourceDetails& GetVideoSourceDetails() const { return m_videoSourceDetails; }
    inline bool VideoSourceDetailsHasBeenSet() const { return m_videoSourceDetailsHasBeenSet; }
    template<typename VideoSourceDetailsT = VideoSourceDetails>
    void SetVideoSourceDetails(VideoSourceDetailsT&& value) { m_videoSourceDetailsHasBeenSet = true; m_videoSourceDetails = std::forward<VideoSourceDetailsT>(value); }
    template<typename VideoSourceDetailsT = VideoSourceDetails>
    SourceDetails& WithVideoSourceDetails(VideoSourceDetailsT&& value) { SetVideoSourceDetails(std::forward<VideoSourceDetailsT>(value)); return *this;}
    ///@}
  private:

    ImageSourceDetails m_imageSourceDetails;
    bool m_imageSourceDetailsHasBeenSet = false;

    AudioSourceDetails m_audioSourceDetails;
    bool m_audioSourceDetailsHasBeenSet = false;

    VideoSourceDetails m_videoSourceDetails;
    bool m_videoSourceDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
