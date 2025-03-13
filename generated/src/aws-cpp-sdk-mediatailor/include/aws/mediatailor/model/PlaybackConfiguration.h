/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/model/AvailSuppression.h>
#include <aws/mediatailor/model/Bumper.h>
#include <aws/mediatailor/model/CdnConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mediatailor/model/DashConfiguration.h>
#include <aws/mediatailor/model/HlsConfiguration.h>
#include <aws/mediatailor/model/InsertionMode.h>
#include <aws/mediatailor/model/LivePreRollConfiguration.h>
#include <aws/mediatailor/model/LogConfiguration.h>
#include <aws/mediatailor/model/ManifestProcessingRules.h>
#include <aws/mediatailor/model/AdConditioningConfiguration.h>
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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>A playback configuration. For information about MediaTailor configurations,
   * see <a
   * href="https://docs.aws.amazon.com/mediatailor/latest/ug/configurations.html">Working
   * with configurations in AWS Elemental MediaTailor</a>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/PlaybackConfiguration">AWS
   * API Reference</a></p>
   */
  class PlaybackConfiguration
  {
  public:
    AWS_MEDIATAILOR_API PlaybackConfiguration() = default;
    AWS_MEDIATAILOR_API PlaybackConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API PlaybackConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URL for the ad decision server (ADS). This includes the specification of
     * static parameters and placeholders for dynamic parameters. AWS Elemental
     * MediaTailor substitutes player-specific and session-specific parameters as
     * needed when calling the ADS. Alternately, for testing you can provide a static
     * VAST URL. The maximum length is 25,000 characters.</p>
     */
    inline const Aws::String& GetAdDecisionServerUrl() const { return m_adDecisionServerUrl; }
    inline bool AdDecisionServerUrlHasBeenSet() const { return m_adDecisionServerUrlHasBeenSet; }
    template<typename AdDecisionServerUrlT = Aws::String>
    void SetAdDecisionServerUrl(AdDecisionServerUrlT&& value) { m_adDecisionServerUrlHasBeenSet = true; m_adDecisionServerUrl = std::forward<AdDecisionServerUrlT>(value); }
    template<typename AdDecisionServerUrlT = Aws::String>
    PlaybackConfiguration& WithAdDecisionServerUrl(AdDecisionServerUrlT&& value) { SetAdDecisionServerUrl(std::forward<AdDecisionServerUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for avail suppression, also known as ad suppression. For
     * more information about ad suppression, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/ad-behavior.html">Ad
     * Suppression</a>.</p>
     */
    inline const AvailSuppression& GetAvailSuppression() const { return m_availSuppression; }
    inline bool AvailSuppressionHasBeenSet() const { return m_availSuppressionHasBeenSet; }
    template<typename AvailSuppressionT = AvailSuppression>
    void SetAvailSuppression(AvailSuppressionT&& value) { m_availSuppressionHasBeenSet = true; m_availSuppression = std::forward<AvailSuppressionT>(value); }
    template<typename AvailSuppressionT = AvailSuppression>
    PlaybackConfiguration& WithAvailSuppression(AvailSuppressionT&& value) { SetAvailSuppression(std::forward<AvailSuppressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for bumpers. Bumpers are short audio or video clips that
     * play at the start or before the end of an ad break. To learn more about bumpers,
     * see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/bumpers.html">Bumpers</a>.</p>
     */
    inline const Bumper& GetBumper() const { return m_bumper; }
    inline bool BumperHasBeenSet() const { return m_bumperHasBeenSet; }
    template<typename BumperT = Bumper>
    void SetBumper(BumperT&& value) { m_bumperHasBeenSet = true; m_bumper = std::forward<BumperT>(value); }
    template<typename BumperT = Bumper>
    PlaybackConfiguration& WithBumper(BumperT&& value) { SetBumper(std::forward<BumperT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for using a content delivery network (CDN), like Amazon
     * CloudFront, for content and ad segment management.</p>
     */
    inline const CdnConfiguration& GetCdnConfiguration() const { return m_cdnConfiguration; }
    inline bool CdnConfigurationHasBeenSet() const { return m_cdnConfigurationHasBeenSet; }
    template<typename CdnConfigurationT = CdnConfiguration>
    void SetCdnConfiguration(CdnConfigurationT&& value) { m_cdnConfigurationHasBeenSet = true; m_cdnConfiguration = std::forward<CdnConfigurationT>(value); }
    template<typename CdnConfigurationT = CdnConfiguration>
    PlaybackConfiguration& WithCdnConfiguration(CdnConfigurationT&& value) { SetCdnConfiguration(std::forward<CdnConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The player parameters and aliases used as dynamic variables during session
     * initialization. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/variables-domains.html">Domain
     * Variables</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& GetConfigurationAliases() const { return m_configurationAliases; }
    inline bool ConfigurationAliasesHasBeenSet() const { return m_configurationAliasesHasBeenSet; }
    template<typename ConfigurationAliasesT = Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>>
    void SetConfigurationAliases(ConfigurationAliasesT&& value) { m_configurationAliasesHasBeenSet = true; m_configurationAliases = std::forward<ConfigurationAliasesT>(value); }
    template<typename ConfigurationAliasesT = Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>>
    PlaybackConfiguration& WithConfigurationAliases(ConfigurationAliasesT&& value) { SetConfigurationAliases(std::forward<ConfigurationAliasesT>(value)); return *this;}
    template<typename ConfigurationAliasesKeyT = Aws::String, typename ConfigurationAliasesValueT = Aws::Map<Aws::String, Aws::String>>
    PlaybackConfiguration& AddConfigurationAliases(ConfigurationAliasesKeyT&& key, ConfigurationAliasesValueT&& value) {
      m_configurationAliasesHasBeenSet = true; m_configurationAliases.emplace(std::forward<ConfigurationAliasesKeyT>(key), std::forward<ConfigurationAliasesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The configuration for a DASH source.</p>
     */
    inline const DashConfiguration& GetDashConfiguration() const { return m_dashConfiguration; }
    inline bool DashConfigurationHasBeenSet() const { return m_dashConfigurationHasBeenSet; }
    template<typename DashConfigurationT = DashConfiguration>
    void SetDashConfiguration(DashConfigurationT&& value) { m_dashConfigurationHasBeenSet = true; m_dashConfiguration = std::forward<DashConfigurationT>(value); }
    template<typename DashConfigurationT = DashConfiguration>
    PlaybackConfiguration& WithDashConfiguration(DashConfigurationT&& value) { SetDashConfiguration(std::forward<DashConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for HLS content.</p>
     */
    inline const HlsConfiguration& GetHlsConfiguration() const { return m_hlsConfiguration; }
    inline bool HlsConfigurationHasBeenSet() const { return m_hlsConfigurationHasBeenSet; }
    template<typename HlsConfigurationT = HlsConfiguration>
    void SetHlsConfiguration(HlsConfigurationT&& value) { m_hlsConfigurationHasBeenSet = true; m_hlsConfiguration = std::forward<HlsConfigurationT>(value); }
    template<typename HlsConfigurationT = HlsConfiguration>
    PlaybackConfiguration& WithHlsConfiguration(HlsConfigurationT&& value) { SetHlsConfiguration(std::forward<HlsConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The setting that controls whether players can use stitched or guided ad
     * insertion. The default, <code>STITCHED_ONLY</code>, forces all player sessions
     * to use stitched (server-side) ad insertion. Choosing <code>PLAYER_SELECT</code>
     * allows players to select either stitched or guided ad insertion at
     * session-initialization time. The default for players that do not specify an
     * insertion mode is stitched.</p>
     */
    inline InsertionMode GetInsertionMode() const { return m_insertionMode; }
    inline bool InsertionModeHasBeenSet() const { return m_insertionModeHasBeenSet; }
    inline void SetInsertionMode(InsertionMode value) { m_insertionModeHasBeenSet = true; m_insertionMode = value; }
    inline PlaybackConfiguration& WithInsertionMode(InsertionMode value) { SetInsertionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for pre-roll ad insertion.</p>
     */
    inline const LivePreRollConfiguration& GetLivePreRollConfiguration() const { return m_livePreRollConfiguration; }
    inline bool LivePreRollConfigurationHasBeenSet() const { return m_livePreRollConfigurationHasBeenSet; }
    template<typename LivePreRollConfigurationT = LivePreRollConfiguration>
    void SetLivePreRollConfiguration(LivePreRollConfigurationT&& value) { m_livePreRollConfigurationHasBeenSet = true; m_livePreRollConfiguration = std::forward<LivePreRollConfigurationT>(value); }
    template<typename LivePreRollConfigurationT = LivePreRollConfiguration>
    PlaybackConfiguration& WithLivePreRollConfiguration(LivePreRollConfigurationT&& value) { SetLivePreRollConfiguration(std::forward<LivePreRollConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines where AWS Elemental MediaTailor sends logs for the playback
     * configuration.</p>
     */
    inline const LogConfiguration& GetLogConfiguration() const { return m_logConfiguration; }
    inline bool LogConfigurationHasBeenSet() const { return m_logConfigurationHasBeenSet; }
    template<typename LogConfigurationT = LogConfiguration>
    void SetLogConfiguration(LogConfigurationT&& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = std::forward<LogConfigurationT>(value); }
    template<typename LogConfigurationT = LogConfiguration>
    PlaybackConfiguration& WithLogConfiguration(LogConfigurationT&& value) { SetLogConfiguration(std::forward<LogConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for manifest processing rules. Manifest processing rules
     * enable customization of the personalized manifests created by MediaTailor.</p>
     */
    inline const ManifestProcessingRules& GetManifestProcessingRules() const { return m_manifestProcessingRules; }
    inline bool ManifestProcessingRulesHasBeenSet() const { return m_manifestProcessingRulesHasBeenSet; }
    template<typename ManifestProcessingRulesT = ManifestProcessingRules>
    void SetManifestProcessingRules(ManifestProcessingRulesT&& value) { m_manifestProcessingRulesHasBeenSet = true; m_manifestProcessingRules = std::forward<ManifestProcessingRulesT>(value); }
    template<typename ManifestProcessingRulesT = ManifestProcessingRules>
    PlaybackConfiguration& WithManifestProcessingRules(ManifestProcessingRulesT&& value) { SetManifestProcessingRules(std::forward<ManifestProcessingRulesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the playback configuration.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    PlaybackConfiguration& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the maximum duration of underfilled ad time (in seconds) allowed in
     * an ad break. If the duration of underfilled ad time exceeds the personalization
     * threshold, then the personalization of the ad break is abandoned and the
     * underlying content is shown. This feature applies to <i>ad replacement</i> in
     * live and VOD streams, rather than ad insertion, because it relies on an
     * underlying content stream. For more information about ad break behavior,
     * including ad replacement and insertion, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/ad-behavior.html">Ad
     * Behavior in AWS Elemental MediaTailor</a>.</p>
     */
    inline int GetPersonalizationThresholdSeconds() const { return m_personalizationThresholdSeconds; }
    inline bool PersonalizationThresholdSecondsHasBeenSet() const { return m_personalizationThresholdSecondsHasBeenSet; }
    inline void SetPersonalizationThresholdSeconds(int value) { m_personalizationThresholdSecondsHasBeenSet = true; m_personalizationThresholdSeconds = value; }
    inline PlaybackConfiguration& WithPersonalizationThresholdSeconds(int value) { SetPersonalizationThresholdSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the playback configuration.</p>
     */
    inline const Aws::String& GetPlaybackConfigurationArn() const { return m_playbackConfigurationArn; }
    inline bool PlaybackConfigurationArnHasBeenSet() const { return m_playbackConfigurationArnHasBeenSet; }
    template<typename PlaybackConfigurationArnT = Aws::String>
    void SetPlaybackConfigurationArn(PlaybackConfigurationArnT&& value) { m_playbackConfigurationArnHasBeenSet = true; m_playbackConfigurationArn = std::forward<PlaybackConfigurationArnT>(value); }
    template<typename PlaybackConfigurationArnT = Aws::String>
    PlaybackConfiguration& WithPlaybackConfigurationArn(PlaybackConfigurationArnT&& value) { SetPlaybackConfigurationArn(std::forward<PlaybackConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL that the player accesses to get a manifest from AWS Elemental
     * MediaTailor.</p>
     */
    inline const Aws::String& GetPlaybackEndpointPrefix() const { return m_playbackEndpointPrefix; }
    inline bool PlaybackEndpointPrefixHasBeenSet() const { return m_playbackEndpointPrefixHasBeenSet; }
    template<typename PlaybackEndpointPrefixT = Aws::String>
    void SetPlaybackEndpointPrefix(PlaybackEndpointPrefixT&& value) { m_playbackEndpointPrefixHasBeenSet = true; m_playbackEndpointPrefix = std::forward<PlaybackEndpointPrefixT>(value); }
    template<typename PlaybackEndpointPrefixT = Aws::String>
    PlaybackConfiguration& WithPlaybackEndpointPrefix(PlaybackEndpointPrefixT&& value) { SetPlaybackEndpointPrefix(std::forward<PlaybackEndpointPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL that the player uses to initialize a session that uses client-side
     * reporting.</p>
     */
    inline const Aws::String& GetSessionInitializationEndpointPrefix() const { return m_sessionInitializationEndpointPrefix; }
    inline bool SessionInitializationEndpointPrefixHasBeenSet() const { return m_sessionInitializationEndpointPrefixHasBeenSet; }
    template<typename SessionInitializationEndpointPrefixT = Aws::String>
    void SetSessionInitializationEndpointPrefix(SessionInitializationEndpointPrefixT&& value) { m_sessionInitializationEndpointPrefixHasBeenSet = true; m_sessionInitializationEndpointPrefix = std::forward<SessionInitializationEndpointPrefixT>(value); }
    template<typename SessionInitializationEndpointPrefixT = Aws::String>
    PlaybackConfiguration& WithSessionInitializationEndpointPrefix(SessionInitializationEndpointPrefixT&& value) { SetSessionInitializationEndpointPrefix(std::forward<SessionInitializationEndpointPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL for a video asset to transcode and use to fill in time that's not
     * used by ads. AWS Elemental MediaTailor shows the slate to fill in gaps in media
     * content. Configuring the slate is optional for non-VPAID playback
     * configurations. For VPAID, the slate is required because MediaTailor provides it
     * in the slots designated for dynamic ad content. The slate must be a high-quality
     * asset that contains both audio and video.</p>
     */
    inline const Aws::String& GetSlateAdUrl() const { return m_slateAdUrl; }
    inline bool SlateAdUrlHasBeenSet() const { return m_slateAdUrlHasBeenSet; }
    template<typename SlateAdUrlT = Aws::String>
    void SetSlateAdUrl(SlateAdUrlT&& value) { m_slateAdUrlHasBeenSet = true; m_slateAdUrl = std::forward<SlateAdUrlT>(value); }
    template<typename SlateAdUrlT = Aws::String>
    PlaybackConfiguration& WithSlateAdUrl(SlateAdUrlT&& value) { SetSlateAdUrl(std::forward<SlateAdUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to assign to the playback configuration. Tags are key-value pairs
     * that you can associate with Amazon resources to help with organization, access
     * control, and cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    PlaybackConfiguration& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    PlaybackConfiguration& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The name that is used to associate this playback configuration with a custom
     * transcode profile. This overrides the dynamic transcoding defaults of
     * MediaTailor. Use this only if you have already set up custom profiles with the
     * help of AWS Support.</p>
     */
    inline const Aws::String& GetTranscodeProfileName() const { return m_transcodeProfileName; }
    inline bool TranscodeProfileNameHasBeenSet() const { return m_transcodeProfileNameHasBeenSet; }
    template<typename TranscodeProfileNameT = Aws::String>
    void SetTranscodeProfileName(TranscodeProfileNameT&& value) { m_transcodeProfileNameHasBeenSet = true; m_transcodeProfileName = std::forward<TranscodeProfileNameT>(value); }
    template<typename TranscodeProfileNameT = Aws::String>
    PlaybackConfiguration& WithTranscodeProfileName(TranscodeProfileNameT&& value) { SetTranscodeProfileName(std::forward<TranscodeProfileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL prefix for the parent manifest for the stream, minus the asset ID.
     * The maximum length is 512 characters.</p>
     */
    inline const Aws::String& GetVideoContentSourceUrl() const { return m_videoContentSourceUrl; }
    inline bool VideoContentSourceUrlHasBeenSet() const { return m_videoContentSourceUrlHasBeenSet; }
    template<typename VideoContentSourceUrlT = Aws::String>
    void SetVideoContentSourceUrl(VideoContentSourceUrlT&& value) { m_videoContentSourceUrlHasBeenSet = true; m_videoContentSourceUrl = std::forward<VideoContentSourceUrlT>(value); }
    template<typename VideoContentSourceUrlT = Aws::String>
    PlaybackConfiguration& WithVideoContentSourceUrl(VideoContentSourceUrlT&& value) { SetVideoContentSourceUrl(std::forward<VideoContentSourceUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The setting that indicates what conditioning MediaTailor will perform on ads
     * that the ad decision server (ADS) returns, and what priority MediaTailor uses
     * when inserting ads.</p>
     */
    inline const AdConditioningConfiguration& GetAdConditioningConfiguration() const { return m_adConditioningConfiguration; }
    inline bool AdConditioningConfigurationHasBeenSet() const { return m_adConditioningConfigurationHasBeenSet; }
    template<typename AdConditioningConfigurationT = AdConditioningConfiguration>
    void SetAdConditioningConfiguration(AdConditioningConfigurationT&& value) { m_adConditioningConfigurationHasBeenSet = true; m_adConditioningConfiguration = std::forward<AdConditioningConfigurationT>(value); }
    template<typename AdConditioningConfigurationT = AdConditioningConfiguration>
    PlaybackConfiguration& WithAdConditioningConfiguration(AdConditioningConfigurationT&& value) { SetAdConditioningConfiguration(std::forward<AdConditioningConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_adDecisionServerUrl;
    bool m_adDecisionServerUrlHasBeenSet = false;

    AvailSuppression m_availSuppression;
    bool m_availSuppressionHasBeenSet = false;

    Bumper m_bumper;
    bool m_bumperHasBeenSet = false;

    CdnConfiguration m_cdnConfiguration;
    bool m_cdnConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>> m_configurationAliases;
    bool m_configurationAliasesHasBeenSet = false;

    DashConfiguration m_dashConfiguration;
    bool m_dashConfigurationHasBeenSet = false;

    HlsConfiguration m_hlsConfiguration;
    bool m_hlsConfigurationHasBeenSet = false;

    InsertionMode m_insertionMode{InsertionMode::NOT_SET};
    bool m_insertionModeHasBeenSet = false;

    LivePreRollConfiguration m_livePreRollConfiguration;
    bool m_livePreRollConfigurationHasBeenSet = false;

    LogConfiguration m_logConfiguration;
    bool m_logConfigurationHasBeenSet = false;

    ManifestProcessingRules m_manifestProcessingRules;
    bool m_manifestProcessingRulesHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_personalizationThresholdSeconds{0};
    bool m_personalizationThresholdSecondsHasBeenSet = false;

    Aws::String m_playbackConfigurationArn;
    bool m_playbackConfigurationArnHasBeenSet = false;

    Aws::String m_playbackEndpointPrefix;
    bool m_playbackEndpointPrefixHasBeenSet = false;

    Aws::String m_sessionInitializationEndpointPrefix;
    bool m_sessionInitializationEndpointPrefixHasBeenSet = false;

    Aws::String m_slateAdUrl;
    bool m_slateAdUrlHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_transcodeProfileName;
    bool m_transcodeProfileNameHasBeenSet = false;

    Aws::String m_videoContentSourceUrl;
    bool m_videoContentSourceUrlHasBeenSet = false;

    AdConditioningConfiguration m_adConditioningConfiguration;
    bool m_adConditioningConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
