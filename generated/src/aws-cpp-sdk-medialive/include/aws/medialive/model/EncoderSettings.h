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
    AWS_MEDIALIVE_API EncoderSettings();
    AWS_MEDIALIVE_API EncoderSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API EncoderSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::Vector<AudioDescription>& GetAudioDescriptions() const{ return m_audioDescriptions; }

    
    inline bool AudioDescriptionsHasBeenSet() const { return m_audioDescriptionsHasBeenSet; }

    
    inline void SetAudioDescriptions(const Aws::Vector<AudioDescription>& value) { m_audioDescriptionsHasBeenSet = true; m_audioDescriptions = value; }

    
    inline void SetAudioDescriptions(Aws::Vector<AudioDescription>&& value) { m_audioDescriptionsHasBeenSet = true; m_audioDescriptions = std::move(value); }

    
    inline EncoderSettings& WithAudioDescriptions(const Aws::Vector<AudioDescription>& value) { SetAudioDescriptions(value); return *this;}

    
    inline EncoderSettings& WithAudioDescriptions(Aws::Vector<AudioDescription>&& value) { SetAudioDescriptions(std::move(value)); return *this;}

    
    inline EncoderSettings& AddAudioDescriptions(const AudioDescription& value) { m_audioDescriptionsHasBeenSet = true; m_audioDescriptions.push_back(value); return *this; }

    
    inline EncoderSettings& AddAudioDescriptions(AudioDescription&& value) { m_audioDescriptionsHasBeenSet = true; m_audioDescriptions.push_back(std::move(value)); return *this; }


    /**
     * Settings for ad avail blanking.
     */
    inline const AvailBlanking& GetAvailBlanking() const{ return m_availBlanking; }

    /**
     * Settings for ad avail blanking.
     */
    inline bool AvailBlankingHasBeenSet() const { return m_availBlankingHasBeenSet; }

    /**
     * Settings for ad avail blanking.
     */
    inline void SetAvailBlanking(const AvailBlanking& value) { m_availBlankingHasBeenSet = true; m_availBlanking = value; }

    /**
     * Settings for ad avail blanking.
     */
    inline void SetAvailBlanking(AvailBlanking&& value) { m_availBlankingHasBeenSet = true; m_availBlanking = std::move(value); }

    /**
     * Settings for ad avail blanking.
     */
    inline EncoderSettings& WithAvailBlanking(const AvailBlanking& value) { SetAvailBlanking(value); return *this;}

    /**
     * Settings for ad avail blanking.
     */
    inline EncoderSettings& WithAvailBlanking(AvailBlanking&& value) { SetAvailBlanking(std::move(value)); return *this;}


    /**
     * Event-wide configuration settings for ad avail insertion.
     */
    inline const AvailConfiguration& GetAvailConfiguration() const{ return m_availConfiguration; }

    /**
     * Event-wide configuration settings for ad avail insertion.
     */
    inline bool AvailConfigurationHasBeenSet() const { return m_availConfigurationHasBeenSet; }

    /**
     * Event-wide configuration settings for ad avail insertion.
     */
    inline void SetAvailConfiguration(const AvailConfiguration& value) { m_availConfigurationHasBeenSet = true; m_availConfiguration = value; }

    /**
     * Event-wide configuration settings for ad avail insertion.
     */
    inline void SetAvailConfiguration(AvailConfiguration&& value) { m_availConfigurationHasBeenSet = true; m_availConfiguration = std::move(value); }

    /**
     * Event-wide configuration settings for ad avail insertion.
     */
    inline EncoderSettings& WithAvailConfiguration(const AvailConfiguration& value) { SetAvailConfiguration(value); return *this;}

    /**
     * Event-wide configuration settings for ad avail insertion.
     */
    inline EncoderSettings& WithAvailConfiguration(AvailConfiguration&& value) { SetAvailConfiguration(std::move(value)); return *this;}


    /**
     * Settings for blackout slate.
     */
    inline const BlackoutSlate& GetBlackoutSlate() const{ return m_blackoutSlate; }

    /**
     * Settings for blackout slate.
     */
    inline bool BlackoutSlateHasBeenSet() const { return m_blackoutSlateHasBeenSet; }

    /**
     * Settings for blackout slate.
     */
    inline void SetBlackoutSlate(const BlackoutSlate& value) { m_blackoutSlateHasBeenSet = true; m_blackoutSlate = value; }

    /**
     * Settings for blackout slate.
     */
    inline void SetBlackoutSlate(BlackoutSlate&& value) { m_blackoutSlateHasBeenSet = true; m_blackoutSlate = std::move(value); }

    /**
     * Settings for blackout slate.
     */
    inline EncoderSettings& WithBlackoutSlate(const BlackoutSlate& value) { SetBlackoutSlate(value); return *this;}

    /**
     * Settings for blackout slate.
     */
    inline EncoderSettings& WithBlackoutSlate(BlackoutSlate&& value) { SetBlackoutSlate(std::move(value)); return *this;}


    /**
     * Settings for caption decriptions
     */
    inline const Aws::Vector<CaptionDescription>& GetCaptionDescriptions() const{ return m_captionDescriptions; }

    /**
     * Settings for caption decriptions
     */
    inline bool CaptionDescriptionsHasBeenSet() const { return m_captionDescriptionsHasBeenSet; }

    /**
     * Settings for caption decriptions
     */
    inline void SetCaptionDescriptions(const Aws::Vector<CaptionDescription>& value) { m_captionDescriptionsHasBeenSet = true; m_captionDescriptions = value; }

    /**
     * Settings for caption decriptions
     */
    inline void SetCaptionDescriptions(Aws::Vector<CaptionDescription>&& value) { m_captionDescriptionsHasBeenSet = true; m_captionDescriptions = std::move(value); }

    /**
     * Settings for caption decriptions
     */
    inline EncoderSettings& WithCaptionDescriptions(const Aws::Vector<CaptionDescription>& value) { SetCaptionDescriptions(value); return *this;}

    /**
     * Settings for caption decriptions
     */
    inline EncoderSettings& WithCaptionDescriptions(Aws::Vector<CaptionDescription>&& value) { SetCaptionDescriptions(std::move(value)); return *this;}

    /**
     * Settings for caption decriptions
     */
    inline EncoderSettings& AddCaptionDescriptions(const CaptionDescription& value) { m_captionDescriptionsHasBeenSet = true; m_captionDescriptions.push_back(value); return *this; }

    /**
     * Settings for caption decriptions
     */
    inline EncoderSettings& AddCaptionDescriptions(CaptionDescription&& value) { m_captionDescriptionsHasBeenSet = true; m_captionDescriptions.push_back(std::move(value)); return *this; }


    /**
     * Feature Activations
     */
    inline const FeatureActivations& GetFeatureActivations() const{ return m_featureActivations; }

    /**
     * Feature Activations
     */
    inline bool FeatureActivationsHasBeenSet() const { return m_featureActivationsHasBeenSet; }

    /**
     * Feature Activations
     */
    inline void SetFeatureActivations(const FeatureActivations& value) { m_featureActivationsHasBeenSet = true; m_featureActivations = value; }

    /**
     * Feature Activations
     */
    inline void SetFeatureActivations(FeatureActivations&& value) { m_featureActivationsHasBeenSet = true; m_featureActivations = std::move(value); }

    /**
     * Feature Activations
     */
    inline EncoderSettings& WithFeatureActivations(const FeatureActivations& value) { SetFeatureActivations(value); return *this;}

    /**
     * Feature Activations
     */
    inline EncoderSettings& WithFeatureActivations(FeatureActivations&& value) { SetFeatureActivations(std::move(value)); return *this;}


    /**
     * Configuration settings that apply to the event as a whole.
     */
    inline const GlobalConfiguration& GetGlobalConfiguration() const{ return m_globalConfiguration; }

    /**
     * Configuration settings that apply to the event as a whole.
     */
    inline bool GlobalConfigurationHasBeenSet() const { return m_globalConfigurationHasBeenSet; }

    /**
     * Configuration settings that apply to the event as a whole.
     */
    inline void SetGlobalConfiguration(const GlobalConfiguration& value) { m_globalConfigurationHasBeenSet = true; m_globalConfiguration = value; }

    /**
     * Configuration settings that apply to the event as a whole.
     */
    inline void SetGlobalConfiguration(GlobalConfiguration&& value) { m_globalConfigurationHasBeenSet = true; m_globalConfiguration = std::move(value); }

    /**
     * Configuration settings that apply to the event as a whole.
     */
    inline EncoderSettings& WithGlobalConfiguration(const GlobalConfiguration& value) { SetGlobalConfiguration(value); return *this;}

    /**
     * Configuration settings that apply to the event as a whole.
     */
    inline EncoderSettings& WithGlobalConfiguration(GlobalConfiguration&& value) { SetGlobalConfiguration(std::move(value)); return *this;}


    /**
     * Settings for motion graphics.
     */
    inline const MotionGraphicsConfiguration& GetMotionGraphicsConfiguration() const{ return m_motionGraphicsConfiguration; }

    /**
     * Settings for motion graphics.
     */
    inline bool MotionGraphicsConfigurationHasBeenSet() const { return m_motionGraphicsConfigurationHasBeenSet; }

    /**
     * Settings for motion graphics.
     */
    inline void SetMotionGraphicsConfiguration(const MotionGraphicsConfiguration& value) { m_motionGraphicsConfigurationHasBeenSet = true; m_motionGraphicsConfiguration = value; }

    /**
     * Settings for motion graphics.
     */
    inline void SetMotionGraphicsConfiguration(MotionGraphicsConfiguration&& value) { m_motionGraphicsConfigurationHasBeenSet = true; m_motionGraphicsConfiguration = std::move(value); }

    /**
     * Settings for motion graphics.
     */
    inline EncoderSettings& WithMotionGraphicsConfiguration(const MotionGraphicsConfiguration& value) { SetMotionGraphicsConfiguration(value); return *this;}

    /**
     * Settings for motion graphics.
     */
    inline EncoderSettings& WithMotionGraphicsConfiguration(MotionGraphicsConfiguration&& value) { SetMotionGraphicsConfiguration(std::move(value)); return *this;}


    /**
     * Nielsen configuration settings.
     */
    inline const NielsenConfiguration& GetNielsenConfiguration() const{ return m_nielsenConfiguration; }

    /**
     * Nielsen configuration settings.
     */
    inline bool NielsenConfigurationHasBeenSet() const { return m_nielsenConfigurationHasBeenSet; }

    /**
     * Nielsen configuration settings.
     */
    inline void SetNielsenConfiguration(const NielsenConfiguration& value) { m_nielsenConfigurationHasBeenSet = true; m_nielsenConfiguration = value; }

    /**
     * Nielsen configuration settings.
     */
    inline void SetNielsenConfiguration(NielsenConfiguration&& value) { m_nielsenConfigurationHasBeenSet = true; m_nielsenConfiguration = std::move(value); }

    /**
     * Nielsen configuration settings.
     */
    inline EncoderSettings& WithNielsenConfiguration(const NielsenConfiguration& value) { SetNielsenConfiguration(value); return *this;}

    /**
     * Nielsen configuration settings.
     */
    inline EncoderSettings& WithNielsenConfiguration(NielsenConfiguration&& value) { SetNielsenConfiguration(std::move(value)); return *this;}


    
    inline const Aws::Vector<OutputGroup>& GetOutputGroups() const{ return m_outputGroups; }

    
    inline bool OutputGroupsHasBeenSet() const { return m_outputGroupsHasBeenSet; }

    
    inline void SetOutputGroups(const Aws::Vector<OutputGroup>& value) { m_outputGroupsHasBeenSet = true; m_outputGroups = value; }

    
    inline void SetOutputGroups(Aws::Vector<OutputGroup>&& value) { m_outputGroupsHasBeenSet = true; m_outputGroups = std::move(value); }

    
    inline EncoderSettings& WithOutputGroups(const Aws::Vector<OutputGroup>& value) { SetOutputGroups(value); return *this;}

    
    inline EncoderSettings& WithOutputGroups(Aws::Vector<OutputGroup>&& value) { SetOutputGroups(std::move(value)); return *this;}

    
    inline EncoderSettings& AddOutputGroups(const OutputGroup& value) { m_outputGroupsHasBeenSet = true; m_outputGroups.push_back(value); return *this; }

    
    inline EncoderSettings& AddOutputGroups(OutputGroup&& value) { m_outputGroupsHasBeenSet = true; m_outputGroups.push_back(std::move(value)); return *this; }


    /**
     * Contains settings used to acquire and adjust timecode information from inputs.
     */
    inline const TimecodeConfig& GetTimecodeConfig() const{ return m_timecodeConfig; }

    /**
     * Contains settings used to acquire and adjust timecode information from inputs.
     */
    inline bool TimecodeConfigHasBeenSet() const { return m_timecodeConfigHasBeenSet; }

    /**
     * Contains settings used to acquire and adjust timecode information from inputs.
     */
    inline void SetTimecodeConfig(const TimecodeConfig& value) { m_timecodeConfigHasBeenSet = true; m_timecodeConfig = value; }

    /**
     * Contains settings used to acquire and adjust timecode information from inputs.
     */
    inline void SetTimecodeConfig(TimecodeConfig&& value) { m_timecodeConfigHasBeenSet = true; m_timecodeConfig = std::move(value); }

    /**
     * Contains settings used to acquire and adjust timecode information from inputs.
     */
    inline EncoderSettings& WithTimecodeConfig(const TimecodeConfig& value) { SetTimecodeConfig(value); return *this;}

    /**
     * Contains settings used to acquire and adjust timecode information from inputs.
     */
    inline EncoderSettings& WithTimecodeConfig(TimecodeConfig&& value) { SetTimecodeConfig(std::move(value)); return *this;}


    
    inline const Aws::Vector<VideoDescription>& GetVideoDescriptions() const{ return m_videoDescriptions; }

    
    inline bool VideoDescriptionsHasBeenSet() const { return m_videoDescriptionsHasBeenSet; }

    
    inline void SetVideoDescriptions(const Aws::Vector<VideoDescription>& value) { m_videoDescriptionsHasBeenSet = true; m_videoDescriptions = value; }

    
    inline void SetVideoDescriptions(Aws::Vector<VideoDescription>&& value) { m_videoDescriptionsHasBeenSet = true; m_videoDescriptions = std::move(value); }

    
    inline EncoderSettings& WithVideoDescriptions(const Aws::Vector<VideoDescription>& value) { SetVideoDescriptions(value); return *this;}

    
    inline EncoderSettings& WithVideoDescriptions(Aws::Vector<VideoDescription>&& value) { SetVideoDescriptions(std::move(value)); return *this;}

    
    inline EncoderSettings& AddVideoDescriptions(const VideoDescription& value) { m_videoDescriptionsHasBeenSet = true; m_videoDescriptions.push_back(value); return *this; }

    
    inline EncoderSettings& AddVideoDescriptions(VideoDescription&& value) { m_videoDescriptionsHasBeenSet = true; m_videoDescriptions.push_back(std::move(value)); return *this; }

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
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
