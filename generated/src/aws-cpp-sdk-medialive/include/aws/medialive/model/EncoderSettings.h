/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/AvailBlanking.h>
#include <aws/medialive/model/AvailConfiguration.h>
#include <aws/medialive/model/BlackoutSlate.h>
#include <aws/medialive/model/FeatureActivations.h>
#include <aws/medialive/model/GlobalConfiguration.h>
#include <aws/medialive/model/MotionGraphicsConfiguration.h>
#include <aws/medialive/model/NielsenConfiguration.h>
#include <aws/medialive/model/TimecodeConfig.h>
#include <aws/medialive/model/ThumbnailConfiguration.h>
#include <aws/medialive/model/ColorCorrectionSettings.h>
#include <aws/medialive/model/AudioDescription.h>
#include <aws/medialive/model/CaptionDescription.h>
#include <aws/medialive/model/OutputGroup.h>
#include <aws/medialive/model/VideoDescription.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Encoder Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/EncoderSettings">AWS
   * API Reference</a></p>
   */
  class EncoderSettings
  {
  public:
    AWS_MEDIALIVE_API EncoderSettings() = default;
    AWS_MEDIALIVE_API EncoderSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API EncoderSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::Vector<AudioDescription>& GetAudioDescriptions() const { return m_audioDescriptions; }
    inline bool AudioDescriptionsHasBeenSet() const { return m_audioDescriptionsHasBeenSet; }
    template<typename AudioDescriptionsT = Aws::Vector<AudioDescription>>
    void SetAudioDescriptions(AudioDescriptionsT&& value) { m_audioDescriptionsHasBeenSet = true; m_audioDescriptions = std::forward<AudioDescriptionsT>(value); }
    template<typename AudioDescriptionsT = Aws::Vector<AudioDescription>>
    EncoderSettings& WithAudioDescriptions(AudioDescriptionsT&& value) { SetAudioDescriptions(std::forward<AudioDescriptionsT>(value)); return *this;}
    template<typename AudioDescriptionsT = AudioDescription>
    EncoderSettings& AddAudioDescriptions(AudioDescriptionsT&& value) { m_audioDescriptionsHasBeenSet = true; m_audioDescriptions.emplace_back(std::forward<AudioDescriptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Settings for ad avail blanking.
     */
    inline const AvailBlanking& GetAvailBlanking() const { return m_availBlanking; }
    inline bool AvailBlankingHasBeenSet() const { return m_availBlankingHasBeenSet; }
    template<typename AvailBlankingT = AvailBlanking>
    void SetAvailBlanking(AvailBlankingT&& value) { m_availBlankingHasBeenSet = true; m_availBlanking = std::forward<AvailBlankingT>(value); }
    template<typename AvailBlankingT = AvailBlanking>
    EncoderSettings& WithAvailBlanking(AvailBlankingT&& value) { SetAvailBlanking(std::forward<AvailBlankingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Event-wide configuration settings for ad avail insertion.
     */
    inline const AvailConfiguration& GetAvailConfiguration() const { return m_availConfiguration; }
    inline bool AvailConfigurationHasBeenSet() const { return m_availConfigurationHasBeenSet; }
    template<typename AvailConfigurationT = AvailConfiguration>
    void SetAvailConfiguration(AvailConfigurationT&& value) { m_availConfigurationHasBeenSet = true; m_availConfiguration = std::forward<AvailConfigurationT>(value); }
    template<typename AvailConfigurationT = AvailConfiguration>
    EncoderSettings& WithAvailConfiguration(AvailConfigurationT&& value) { SetAvailConfiguration(std::forward<AvailConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings for blackout slate.
     */
    inline const BlackoutSlate& GetBlackoutSlate() const { return m_blackoutSlate; }
    inline bool BlackoutSlateHasBeenSet() const { return m_blackoutSlateHasBeenSet; }
    template<typename BlackoutSlateT = BlackoutSlate>
    void SetBlackoutSlate(BlackoutSlateT&& value) { m_blackoutSlateHasBeenSet = true; m_blackoutSlate = std::forward<BlackoutSlateT>(value); }
    template<typename BlackoutSlateT = BlackoutSlate>
    EncoderSettings& WithBlackoutSlate(BlackoutSlateT&& value) { SetBlackoutSlate(std::forward<BlackoutSlateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings for caption decriptions
     */
    inline const Aws::Vector<CaptionDescription>& GetCaptionDescriptions() const { return m_captionDescriptions; }
    inline bool CaptionDescriptionsHasBeenSet() const { return m_captionDescriptionsHasBeenSet; }
    template<typename CaptionDescriptionsT = Aws::Vector<CaptionDescription>>
    void SetCaptionDescriptions(CaptionDescriptionsT&& value) { m_captionDescriptionsHasBeenSet = true; m_captionDescriptions = std::forward<CaptionDescriptionsT>(value); }
    template<typename CaptionDescriptionsT = Aws::Vector<CaptionDescription>>
    EncoderSettings& WithCaptionDescriptions(CaptionDescriptionsT&& value) { SetCaptionDescriptions(std::forward<CaptionDescriptionsT>(value)); return *this;}
    template<typename CaptionDescriptionsT = CaptionDescription>
    EncoderSettings& AddCaptionDescriptions(CaptionDescriptionsT&& value) { m_captionDescriptionsHasBeenSet = true; m_captionDescriptions.emplace_back(std::forward<CaptionDescriptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Feature Activations
     */
    inline const FeatureActivations& GetFeatureActivations() const { return m_featureActivations; }
    inline bool FeatureActivationsHasBeenSet() const { return m_featureActivationsHasBeenSet; }
    template<typename FeatureActivationsT = FeatureActivations>
    void SetFeatureActivations(FeatureActivationsT&& value) { m_featureActivationsHasBeenSet = true; m_featureActivations = std::forward<FeatureActivationsT>(value); }
    template<typename FeatureActivationsT = FeatureActivations>
    EncoderSettings& WithFeatureActivations(FeatureActivationsT&& value) { SetFeatureActivations(std::forward<FeatureActivationsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Configuration settings that apply to the event as a whole.
     */
    inline const GlobalConfiguration& GetGlobalConfiguration() const { return m_globalConfiguration; }
    inline bool GlobalConfigurationHasBeenSet() const { return m_globalConfigurationHasBeenSet; }
    template<typename GlobalConfigurationT = GlobalConfiguration>
    void SetGlobalConfiguration(GlobalConfigurationT&& value) { m_globalConfigurationHasBeenSet = true; m_globalConfiguration = std::forward<GlobalConfigurationT>(value); }
    template<typename GlobalConfigurationT = GlobalConfiguration>
    EncoderSettings& WithGlobalConfiguration(GlobalConfigurationT&& value) { SetGlobalConfiguration(std::forward<GlobalConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings for motion graphics.
     */
    inline const MotionGraphicsConfiguration& GetMotionGraphicsConfiguration() const { return m_motionGraphicsConfiguration; }
    inline bool MotionGraphicsConfigurationHasBeenSet() const { return m_motionGraphicsConfigurationHasBeenSet; }
    template<typename MotionGraphicsConfigurationT = MotionGraphicsConfiguration>
    void SetMotionGraphicsConfiguration(MotionGraphicsConfigurationT&& value) { m_motionGraphicsConfigurationHasBeenSet = true; m_motionGraphicsConfiguration = std::forward<MotionGraphicsConfigurationT>(value); }
    template<typename MotionGraphicsConfigurationT = MotionGraphicsConfiguration>
    EncoderSettings& WithMotionGraphicsConfiguration(MotionGraphicsConfigurationT&& value) { SetMotionGraphicsConfiguration(std::forward<MotionGraphicsConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Nielsen configuration settings.
     */
    inline const NielsenConfiguration& GetNielsenConfiguration() const { return m_nielsenConfiguration; }
    inline bool NielsenConfigurationHasBeenSet() const { return m_nielsenConfigurationHasBeenSet; }
    template<typename NielsenConfigurationT = NielsenConfiguration>
    void SetNielsenConfiguration(NielsenConfigurationT&& value) { m_nielsenConfigurationHasBeenSet = true; m_nielsenConfiguration = std::forward<NielsenConfigurationT>(value); }
    template<typename NielsenConfigurationT = NielsenConfiguration>
    EncoderSettings& WithNielsenConfiguration(NielsenConfigurationT&& value) { SetNielsenConfiguration(std::forward<NielsenConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<OutputGroup>& GetOutputGroups() const { return m_outputGroups; }
    inline bool OutputGroupsHasBeenSet() const { return m_outputGroupsHasBeenSet; }
    template<typename OutputGroupsT = Aws::Vector<OutputGroup>>
    void SetOutputGroups(OutputGroupsT&& value) { m_outputGroupsHasBeenSet = true; m_outputGroups = std::forward<OutputGroupsT>(value); }
    template<typename OutputGroupsT = Aws::Vector<OutputGroup>>
    EncoderSettings& WithOutputGroups(OutputGroupsT&& value) { SetOutputGroups(std::forward<OutputGroupsT>(value)); return *this;}
    template<typename OutputGroupsT = OutputGroup>
    EncoderSettings& AddOutputGroups(OutputGroupsT&& value) { m_outputGroupsHasBeenSet = true; m_outputGroups.emplace_back(std::forward<OutputGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Contains settings used to acquire and adjust timecode information from inputs.
     */
    inline const TimecodeConfig& GetTimecodeConfig() const { return m_timecodeConfig; }
    inline bool TimecodeConfigHasBeenSet() const { return m_timecodeConfigHasBeenSet; }
    template<typename TimecodeConfigT = TimecodeConfig>
    void SetTimecodeConfig(TimecodeConfigT&& value) { m_timecodeConfigHasBeenSet = true; m_timecodeConfig = std::forward<TimecodeConfigT>(value); }
    template<typename TimecodeConfigT = TimecodeConfig>
    EncoderSettings& WithTimecodeConfig(TimecodeConfigT&& value) { SetTimecodeConfig(std::forward<TimecodeConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<VideoDescription>& GetVideoDescriptions() const { return m_videoDescriptions; }
    inline bool VideoDescriptionsHasBeenSet() const { return m_videoDescriptionsHasBeenSet; }
    template<typename VideoDescriptionsT = Aws::Vector<VideoDescription>>
    void SetVideoDescriptions(VideoDescriptionsT&& value) { m_videoDescriptionsHasBeenSet = true; m_videoDescriptions = std::forward<VideoDescriptionsT>(value); }
    template<typename VideoDescriptionsT = Aws::Vector<VideoDescription>>
    EncoderSettings& WithVideoDescriptions(VideoDescriptionsT&& value) { SetVideoDescriptions(std::forward<VideoDescriptionsT>(value)); return *this;}
    template<typename VideoDescriptionsT = VideoDescription>
    EncoderSettings& AddVideoDescriptions(VideoDescriptionsT&& value) { m_videoDescriptionsHasBeenSet = true; m_videoDescriptions.emplace_back(std::forward<VideoDescriptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Thumbnail configuration settings.
     */
    inline const ThumbnailConfiguration& GetThumbnailConfiguration() const { return m_thumbnailConfiguration; }
    inline bool ThumbnailConfigurationHasBeenSet() const { return m_thumbnailConfigurationHasBeenSet; }
    template<typename ThumbnailConfigurationT = ThumbnailConfiguration>
    void SetThumbnailConfiguration(ThumbnailConfigurationT&& value) { m_thumbnailConfigurationHasBeenSet = true; m_thumbnailConfiguration = std::forward<ThumbnailConfigurationT>(value); }
    template<typename ThumbnailConfigurationT = ThumbnailConfiguration>
    EncoderSettings& WithThumbnailConfiguration(ThumbnailConfigurationT&& value) { SetThumbnailConfiguration(std::forward<ThumbnailConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Color Correction Settings
     */
    inline const ColorCorrectionSettings& GetColorCorrectionSettings() const { return m_colorCorrectionSettings; }
    inline bool ColorCorrectionSettingsHasBeenSet() const { return m_colorCorrectionSettingsHasBeenSet; }
    template<typename ColorCorrectionSettingsT = ColorCorrectionSettings>
    void SetColorCorrectionSettings(ColorCorrectionSettingsT&& value) { m_colorCorrectionSettingsHasBeenSet = true; m_colorCorrectionSettings = std::forward<ColorCorrectionSettingsT>(value); }
    template<typename ColorCorrectionSettingsT = ColorCorrectionSettings>
    EncoderSettings& WithColorCorrectionSettings(ColorCorrectionSettingsT&& value) { SetColorCorrectionSettings(std::forward<ColorCorrectionSettingsT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AudioDescription> m_audioDescriptions;
    bool m_audioDescriptionsHasBeenSet = false;

    AvailBlanking m_availBlanking;
    bool m_availBlankingHasBeenSet = false;

    AvailConfiguration m_availConfiguration;
    bool m_availConfigurationHasBeenSet = false;

    BlackoutSlate m_blackoutSlate;
    bool m_blackoutSlateHasBeenSet = false;

    Aws::Vector<CaptionDescription> m_captionDescriptions;
    bool m_captionDescriptionsHasBeenSet = false;

    FeatureActivations m_featureActivations;
    bool m_featureActivationsHasBeenSet = false;

    GlobalConfiguration m_globalConfiguration;
    bool m_globalConfigurationHasBeenSet = false;

    MotionGraphicsConfiguration m_motionGraphicsConfiguration;
    bool m_motionGraphicsConfigurationHasBeenSet = false;

    NielsenConfiguration m_nielsenConfiguration;
    bool m_nielsenConfigurationHasBeenSet = false;

    Aws::Vector<OutputGroup> m_outputGroups;
    bool m_outputGroupsHasBeenSet = false;

    TimecodeConfig m_timecodeConfig;
    bool m_timecodeConfigHasBeenSet = false;

    Aws::Vector<VideoDescription> m_videoDescriptions;
    bool m_videoDescriptionsHasBeenSet = false;

    ThumbnailConfiguration m_thumbnailConfiguration;
    bool m_thumbnailConfigurationHasBeenSet = false;

    ColorCorrectionSettings m_colorCorrectionSettings;
    bool m_colorCorrectionSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
