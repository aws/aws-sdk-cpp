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
    AWS_QBUSINESS_API SourceDetails();
    AWS_QBUSINESS_API SourceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API SourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details specific to image content within the source.</p>
     */
    inline const ImageSourceDetails& GetImageSourceDetails() const{ return m_imageSourceDetails; }
    inline bool ImageSourceDetailsHasBeenSet() const { return m_imageSourceDetailsHasBeenSet; }
    inline void SetImageSourceDetails(const ImageSourceDetails& value) { m_imageSourceDetailsHasBeenSet = true; m_imageSourceDetails = value; }
    inline void SetImageSourceDetails(ImageSourceDetails&& value) { m_imageSourceDetailsHasBeenSet = true; m_imageSourceDetails = std::move(value); }
    inline SourceDetails& WithImageSourceDetails(const ImageSourceDetails& value) { SetImageSourceDetails(value); return *this;}
    inline SourceDetails& WithImageSourceDetails(ImageSourceDetails&& value) { SetImageSourceDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details specific to audio content within the source.</p>
     */
    inline const AudioSourceDetails& GetAudioSourceDetails() const{ return m_audioSourceDetails; }
    inline bool AudioSourceDetailsHasBeenSet() const { return m_audioSourceDetailsHasBeenSet; }
    inline void SetAudioSourceDetails(const AudioSourceDetails& value) { m_audioSourceDetailsHasBeenSet = true; m_audioSourceDetails = value; }
    inline void SetAudioSourceDetails(AudioSourceDetails&& value) { m_audioSourceDetailsHasBeenSet = true; m_audioSourceDetails = std::move(value); }
    inline SourceDetails& WithAudioSourceDetails(const AudioSourceDetails& value) { SetAudioSourceDetails(value); return *this;}
    inline SourceDetails& WithAudioSourceDetails(AudioSourceDetails&& value) { SetAudioSourceDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details specific to video content within the source.</p>
     */
    inline const VideoSourceDetails& GetVideoSourceDetails() const{ return m_videoSourceDetails; }
    inline bool VideoSourceDetailsHasBeenSet() const { return m_videoSourceDetailsHasBeenSet; }
    inline void SetVideoSourceDetails(const VideoSourceDetails& value) { m_videoSourceDetailsHasBeenSet = true; m_videoSourceDetails = value; }
    inline void SetVideoSourceDetails(VideoSourceDetails&& value) { m_videoSourceDetailsHasBeenSet = true; m_videoSourceDetails = std::move(value); }
    inline SourceDetails& WithVideoSourceDetails(const VideoSourceDetails& value) { SetVideoSourceDetails(value); return *this;}
    inline SourceDetails& WithVideoSourceDetails(VideoSourceDetails&& value) { SetVideoSourceDetails(std::move(value)); return *this;}
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
