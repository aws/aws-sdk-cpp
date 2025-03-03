/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/ImageExtractionConfiguration.h>
#include <aws/qbusiness/model/AudioExtractionConfiguration.h>
#include <aws/qbusiness/model/VideoExtractionConfiguration.h>
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
   * <p>The configuration for extracting information from media in
   * documents.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/MediaExtractionConfiguration">AWS
   * API Reference</a></p>
   */
  class MediaExtractionConfiguration
  {
  public:
    AWS_QBUSINESS_API MediaExtractionConfiguration();
    AWS_QBUSINESS_API MediaExtractionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API MediaExtractionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration for extracting semantic meaning from images in documents.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/extracting-meaning-from-images.html">Extracting
     * semantic meaning from images and visuals</a>. </p>
     */
    inline const ImageExtractionConfiguration& GetImageExtractionConfiguration() const{ return m_imageExtractionConfiguration; }
    inline bool ImageExtractionConfigurationHasBeenSet() const { return m_imageExtractionConfigurationHasBeenSet; }
    inline void SetImageExtractionConfiguration(const ImageExtractionConfiguration& value) { m_imageExtractionConfigurationHasBeenSet = true; m_imageExtractionConfiguration = value; }
    inline void SetImageExtractionConfiguration(ImageExtractionConfiguration&& value) { m_imageExtractionConfigurationHasBeenSet = true; m_imageExtractionConfiguration = std::move(value); }
    inline MediaExtractionConfiguration& WithImageExtractionConfiguration(const ImageExtractionConfiguration& value) { SetImageExtractionConfiguration(value); return *this;}
    inline MediaExtractionConfiguration& WithImageExtractionConfiguration(ImageExtractionConfiguration&& value) { SetImageExtractionConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration settings for extracting and processing audio content from media
     * files.</p>
     */
    inline const AudioExtractionConfiguration& GetAudioExtractionConfiguration() const{ return m_audioExtractionConfiguration; }
    inline bool AudioExtractionConfigurationHasBeenSet() const { return m_audioExtractionConfigurationHasBeenSet; }
    inline void SetAudioExtractionConfiguration(const AudioExtractionConfiguration& value) { m_audioExtractionConfigurationHasBeenSet = true; m_audioExtractionConfiguration = value; }
    inline void SetAudioExtractionConfiguration(AudioExtractionConfiguration&& value) { m_audioExtractionConfigurationHasBeenSet = true; m_audioExtractionConfiguration = std::move(value); }
    inline MediaExtractionConfiguration& WithAudioExtractionConfiguration(const AudioExtractionConfiguration& value) { SetAudioExtractionConfiguration(value); return *this;}
    inline MediaExtractionConfiguration& WithAudioExtractionConfiguration(AudioExtractionConfiguration&& value) { SetAudioExtractionConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration settings for extracting and processing video content from media
     * files.</p>
     */
    inline const VideoExtractionConfiguration& GetVideoExtractionConfiguration() const{ return m_videoExtractionConfiguration; }
    inline bool VideoExtractionConfigurationHasBeenSet() const { return m_videoExtractionConfigurationHasBeenSet; }
    inline void SetVideoExtractionConfiguration(const VideoExtractionConfiguration& value) { m_videoExtractionConfigurationHasBeenSet = true; m_videoExtractionConfiguration = value; }
    inline void SetVideoExtractionConfiguration(VideoExtractionConfiguration&& value) { m_videoExtractionConfigurationHasBeenSet = true; m_videoExtractionConfiguration = std::move(value); }
    inline MediaExtractionConfiguration& WithVideoExtractionConfiguration(const VideoExtractionConfiguration& value) { SetVideoExtractionConfiguration(value); return *this;}
    inline MediaExtractionConfiguration& WithVideoExtractionConfiguration(VideoExtractionConfiguration&& value) { SetVideoExtractionConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    ImageExtractionConfiguration m_imageExtractionConfiguration;
    bool m_imageExtractionConfigurationHasBeenSet = false;

    AudioExtractionConfiguration m_audioExtractionConfiguration;
    bool m_audioExtractionConfigurationHasBeenSet = false;

    VideoExtractionConfiguration m_videoExtractionConfiguration;
    bool m_videoExtractionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
