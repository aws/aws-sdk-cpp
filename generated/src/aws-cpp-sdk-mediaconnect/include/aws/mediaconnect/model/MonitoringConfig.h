/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/ThumbnailState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/model/ContentQualityAnalysisState.h>
#include <aws/mediaconnect/model/AudioMonitoringSetting.h>
#include <aws/mediaconnect/model/VideoMonitoringSetting.h>
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
   * The settings for source monitoring.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/MonitoringConfig">AWS
   * API Reference</a></p>
   */
  class MonitoringConfig
  {
  public:
    AWS_MEDIACONNECT_API MonitoringConfig();
    AWS_MEDIACONNECT_API MonitoringConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API MonitoringConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The state of thumbnail monitoring.
     */
    inline const ThumbnailState& GetThumbnailState() const{ return m_thumbnailState; }
    inline bool ThumbnailStateHasBeenSet() const { return m_thumbnailStateHasBeenSet; }
    inline void SetThumbnailState(const ThumbnailState& value) { m_thumbnailStateHasBeenSet = true; m_thumbnailState = value; }
    inline void SetThumbnailState(ThumbnailState&& value) { m_thumbnailStateHasBeenSet = true; m_thumbnailState = std::move(value); }
    inline MonitoringConfig& WithThumbnailState(const ThumbnailState& value) { SetThumbnailState(value); return *this;}
    inline MonitoringConfig& WithThumbnailState(ThumbnailState&& value) { SetThumbnailState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Contains the settings for audio stream metrics monitoring.
     */
    inline const Aws::Vector<AudioMonitoringSetting>& GetAudioMonitoringSettings() const{ return m_audioMonitoringSettings; }
    inline bool AudioMonitoringSettingsHasBeenSet() const { return m_audioMonitoringSettingsHasBeenSet; }
    inline void SetAudioMonitoringSettings(const Aws::Vector<AudioMonitoringSetting>& value) { m_audioMonitoringSettingsHasBeenSet = true; m_audioMonitoringSettings = value; }
    inline void SetAudioMonitoringSettings(Aws::Vector<AudioMonitoringSetting>&& value) { m_audioMonitoringSettingsHasBeenSet = true; m_audioMonitoringSettings = std::move(value); }
    inline MonitoringConfig& WithAudioMonitoringSettings(const Aws::Vector<AudioMonitoringSetting>& value) { SetAudioMonitoringSettings(value); return *this;}
    inline MonitoringConfig& WithAudioMonitoringSettings(Aws::Vector<AudioMonitoringSetting>&& value) { SetAudioMonitoringSettings(std::move(value)); return *this;}
    inline MonitoringConfig& AddAudioMonitoringSettings(const AudioMonitoringSetting& value) { m_audioMonitoringSettingsHasBeenSet = true; m_audioMonitoringSettings.push_back(value); return *this; }
    inline MonitoringConfig& AddAudioMonitoringSettings(AudioMonitoringSetting&& value) { m_audioMonitoringSettingsHasBeenSet = true; m_audioMonitoringSettings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * Indicates whether content quality analysis is enabled or disabled.
     */
    inline const ContentQualityAnalysisState& GetContentQualityAnalysisState() const{ return m_contentQualityAnalysisState; }
    inline bool ContentQualityAnalysisStateHasBeenSet() const { return m_contentQualityAnalysisStateHasBeenSet; }
    inline void SetContentQualityAnalysisState(const ContentQualityAnalysisState& value) { m_contentQualityAnalysisStateHasBeenSet = true; m_contentQualityAnalysisState = value; }
    inline void SetContentQualityAnalysisState(ContentQualityAnalysisState&& value) { m_contentQualityAnalysisStateHasBeenSet = true; m_contentQualityAnalysisState = std::move(value); }
    inline MonitoringConfig& WithContentQualityAnalysisState(const ContentQualityAnalysisState& value) { SetContentQualityAnalysisState(value); return *this;}
    inline MonitoringConfig& WithContentQualityAnalysisState(ContentQualityAnalysisState&& value) { SetContentQualityAnalysisState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Contains the settings for video stream metrics monitoring.
     */
    inline const Aws::Vector<VideoMonitoringSetting>& GetVideoMonitoringSettings() const{ return m_videoMonitoringSettings; }
    inline bool VideoMonitoringSettingsHasBeenSet() const { return m_videoMonitoringSettingsHasBeenSet; }
    inline void SetVideoMonitoringSettings(const Aws::Vector<VideoMonitoringSetting>& value) { m_videoMonitoringSettingsHasBeenSet = true; m_videoMonitoringSettings = value; }
    inline void SetVideoMonitoringSettings(Aws::Vector<VideoMonitoringSetting>&& value) { m_videoMonitoringSettingsHasBeenSet = true; m_videoMonitoringSettings = std::move(value); }
    inline MonitoringConfig& WithVideoMonitoringSettings(const Aws::Vector<VideoMonitoringSetting>& value) { SetVideoMonitoringSettings(value); return *this;}
    inline MonitoringConfig& WithVideoMonitoringSettings(Aws::Vector<VideoMonitoringSetting>&& value) { SetVideoMonitoringSettings(std::move(value)); return *this;}
    inline MonitoringConfig& AddVideoMonitoringSettings(const VideoMonitoringSetting& value) { m_videoMonitoringSettingsHasBeenSet = true; m_videoMonitoringSettings.push_back(value); return *this; }
    inline MonitoringConfig& AddVideoMonitoringSettings(VideoMonitoringSetting&& value) { m_videoMonitoringSettingsHasBeenSet = true; m_videoMonitoringSettings.push_back(std::move(value)); return *this; }
    ///@}
  private:

    ThumbnailState m_thumbnailState;
    bool m_thumbnailStateHasBeenSet = false;

    Aws::Vector<AudioMonitoringSetting> m_audioMonitoringSettings;
    bool m_audioMonitoringSettingsHasBeenSet = false;

    ContentQualityAnalysisState m_contentQualityAnalysisState;
    bool m_contentQualityAnalysisStateHasBeenSet = false;

    Aws::Vector<VideoMonitoringSetting> m_videoMonitoringSettings;
    bool m_videoMonitoringSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
