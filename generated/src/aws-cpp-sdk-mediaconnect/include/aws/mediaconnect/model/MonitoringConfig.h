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
   * <p> The settings for source monitoring. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/MonitoringConfig">AWS
   * API Reference</a></p>
   */
  class MonitoringConfig
  {
  public:
    AWS_MEDIACONNECT_API MonitoringConfig() = default;
    AWS_MEDIACONNECT_API MonitoringConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API MonitoringConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Indicates whether thumbnails are enabled or disabled.</p>
     */
    inline ThumbnailState GetThumbnailState() const { return m_thumbnailState; }
    inline bool ThumbnailStateHasBeenSet() const { return m_thumbnailStateHasBeenSet; }
    inline void SetThumbnailState(ThumbnailState value) { m_thumbnailStateHasBeenSet = true; m_thumbnailState = value; }
    inline MonitoringConfig& WithThumbnailState(ThumbnailState value) { SetThumbnailState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Contains the settings for audio stream metrics monitoring.</p>
     */
    inline const Aws::Vector<AudioMonitoringSetting>& GetAudioMonitoringSettings() const { return m_audioMonitoringSettings; }
    inline bool AudioMonitoringSettingsHasBeenSet() const { return m_audioMonitoringSettingsHasBeenSet; }
    template<typename AudioMonitoringSettingsT = Aws::Vector<AudioMonitoringSetting>>
    void SetAudioMonitoringSettings(AudioMonitoringSettingsT&& value) { m_audioMonitoringSettingsHasBeenSet = true; m_audioMonitoringSettings = std::forward<AudioMonitoringSettingsT>(value); }
    template<typename AudioMonitoringSettingsT = Aws::Vector<AudioMonitoringSetting>>
    MonitoringConfig& WithAudioMonitoringSettings(AudioMonitoringSettingsT&& value) { SetAudioMonitoringSettings(std::forward<AudioMonitoringSettingsT>(value)); return *this;}
    template<typename AudioMonitoringSettingsT = AudioMonitoringSetting>
    MonitoringConfig& AddAudioMonitoringSettings(AudioMonitoringSettingsT&& value) { m_audioMonitoringSettingsHasBeenSet = true; m_audioMonitoringSettings.emplace_back(std::forward<AudioMonitoringSettingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Indicates whether content quality analysis is enabled or disabled.</p>
     */
    inline ContentQualityAnalysisState GetContentQualityAnalysisState() const { return m_contentQualityAnalysisState; }
    inline bool ContentQualityAnalysisStateHasBeenSet() const { return m_contentQualityAnalysisStateHasBeenSet; }
    inline void SetContentQualityAnalysisState(ContentQualityAnalysisState value) { m_contentQualityAnalysisStateHasBeenSet = true; m_contentQualityAnalysisState = value; }
    inline MonitoringConfig& WithContentQualityAnalysisState(ContentQualityAnalysisState value) { SetContentQualityAnalysisState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Contains the settings for video stream metrics monitoring.</p>
     */
    inline const Aws::Vector<VideoMonitoringSetting>& GetVideoMonitoringSettings() const { return m_videoMonitoringSettings; }
    inline bool VideoMonitoringSettingsHasBeenSet() const { return m_videoMonitoringSettingsHasBeenSet; }
    template<typename VideoMonitoringSettingsT = Aws::Vector<VideoMonitoringSetting>>
    void SetVideoMonitoringSettings(VideoMonitoringSettingsT&& value) { m_videoMonitoringSettingsHasBeenSet = true; m_videoMonitoringSettings = std::forward<VideoMonitoringSettingsT>(value); }
    template<typename VideoMonitoringSettingsT = Aws::Vector<VideoMonitoringSetting>>
    MonitoringConfig& WithVideoMonitoringSettings(VideoMonitoringSettingsT&& value) { SetVideoMonitoringSettings(std::forward<VideoMonitoringSettingsT>(value)); return *this;}
    template<typename VideoMonitoringSettingsT = VideoMonitoringSetting>
    MonitoringConfig& AddVideoMonitoringSettings(VideoMonitoringSettingsT&& value) { m_videoMonitoringSettingsHasBeenSet = true; m_videoMonitoringSettings.emplace_back(std::forward<VideoMonitoringSettingsT>(value)); return *this; }
    ///@}
  private:

    ThumbnailState m_thumbnailState{ThumbnailState::NOT_SET};
    bool m_thumbnailStateHasBeenSet = false;

    Aws::Vector<AudioMonitoringSetting> m_audioMonitoringSettings;
    bool m_audioMonitoringSettingsHasBeenSet = false;

    ContentQualityAnalysisState m_contentQualityAnalysisState{ContentQualityAnalysisState::NOT_SET};
    bool m_contentQualityAnalysisStateHasBeenSet = false;

    Aws::Vector<VideoMonitoringSetting> m_videoMonitoringSettings;
    bool m_videoMonitoringSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
