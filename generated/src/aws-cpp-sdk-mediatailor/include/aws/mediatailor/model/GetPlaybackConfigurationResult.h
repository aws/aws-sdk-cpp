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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaTailor
{
namespace Model
{
  class GetPlaybackConfigurationResult
  {
  public:
    AWS_MEDIATAILOR_API GetPlaybackConfigurationResult() = default;
    AWS_MEDIATAILOR_API GetPlaybackConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIATAILOR_API GetPlaybackConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The URL for the ad decision server (ADS). This includes the specification of
     * static parameters and placeholders for dynamic parameters. AWS Elemental
     * MediaTailor substitutes player-specific and session-specific parameters as
     * needed when calling the ADS. Alternately, for testing, you can provide a static
     * VAST URL. The maximum length is 25,000 characters.</p>
     */
    inline const Aws::String& GetAdDecisionServerUrl() const { return m_adDecisionServerUrl; }
    template<typename AdDecisionServerUrlT = Aws::String>
    void SetAdDecisionServerUrl(AdDecisionServerUrlT&& value) { m_adDecisionServerUrlHasBeenSet = true; m_adDecisionServerUrl = std::forward<AdDecisionServerUrlT>(value); }
    template<typename AdDecisionServerUrlT = Aws::String>
    GetPlaybackConfigurationResult& WithAdDecisionServerUrl(AdDecisionServerUrlT&& value) { SetAdDecisionServerUrl(std::forward<AdDecisionServerUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for avail suppression, also known as ad suppression. For
     * more information about ad suppression, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/ad-behavior.html">Ad
     * Suppression</a>.</p>
     */
    inline const AvailSuppression& GetAvailSuppression() const { return m_availSuppression; }
    template<typename AvailSuppressionT = AvailSuppression>
    void SetAvailSuppression(AvailSuppressionT&& value) { m_availSuppressionHasBeenSet = true; m_availSuppression = std::forward<AvailSuppressionT>(value); }
    template<typename AvailSuppressionT = AvailSuppression>
    GetPlaybackConfigurationResult& WithAvailSuppression(AvailSuppressionT&& value) { SetAvailSuppression(std::forward<AvailSuppressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for bumpers. Bumpers are short audio or video clips that
     * play at the start or before the end of an ad break. To learn more about bumpers,
     * see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/bumpers.html">Bumpers</a>.</p>
     */
    inline const Bumper& GetBumper() const { return m_bumper; }
    template<typename BumperT = Bumper>
    void SetBumper(BumperT&& value) { m_bumperHasBeenSet = true; m_bumper = std::forward<BumperT>(value); }
    template<typename BumperT = Bumper>
    GetPlaybackConfigurationResult& WithBumper(BumperT&& value) { SetBumper(std::forward<BumperT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for using a content delivery network (CDN), like Amazon
     * CloudFront, for content and ad segment management.</p>
     */
    inline const CdnConfiguration& GetCdnConfiguration() const { return m_cdnConfiguration; }
    template<typename CdnConfigurationT = CdnConfiguration>
    void SetCdnConfiguration(CdnConfigurationT&& value) { m_cdnConfigurationHasBeenSet = true; m_cdnConfiguration = std::forward<CdnConfigurationT>(value); }
    template<typename CdnConfigurationT = CdnConfiguration>
    GetPlaybackConfigurationResult& WithCdnConfiguration(CdnConfigurationT&& value) { SetCdnConfiguration(std::forward<CdnConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The player parameters and aliases used as dynamic variables during session
     * initialization. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/variables-domains.html">Domain
     * Variables</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& GetConfigurationAliases() const { return m_configurationAliases; }
    template<typename ConfigurationAliasesT = Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>>
    void SetConfigurationAliases(ConfigurationAliasesT&& value) { m_configurationAliasesHasBeenSet = true; m_configurationAliases = std::forward<ConfigurationAliasesT>(value); }
    template<typename ConfigurationAliasesT = Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>>
    GetPlaybackConfigurationResult& WithConfigurationAliases(ConfigurationAliasesT&& value) { SetConfigurationAliases(std::forward<ConfigurationAliasesT>(value)); return *this;}
    template<typename ConfigurationAliasesKeyT = Aws::String, typename ConfigurationAliasesValueT = Aws::Map<Aws::String, Aws::String>>
    GetPlaybackConfigurationResult& AddConfigurationAliases(ConfigurationAliasesKeyT&& key, ConfigurationAliasesValueT&& value) {
      m_configurationAliasesHasBeenSet = true; m_configurationAliases.emplace(std::forward<ConfigurationAliasesKeyT>(key), std::forward<ConfigurationAliasesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The configuration for DASH content.</p>
     */
    inline const DashConfiguration& GetDashConfiguration() const { return m_dashConfiguration; }
    template<typename DashConfigurationT = DashConfiguration>
    void SetDashConfiguration(DashConfigurationT&& value) { m_dashConfigurationHasBeenSet = true; m_dashConfiguration = std::forward<DashConfigurationT>(value); }
    template<typename DashConfigurationT = DashConfiguration>
    GetPlaybackConfigurationResult& WithDashConfiguration(DashConfigurationT&& value) { SetDashConfiguration(std::forward<DashConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for HLS content.</p>
     */
    inline const HlsConfiguration& GetHlsConfiguration() const { return m_hlsConfiguration; }
    template<typename HlsConfigurationT = HlsConfiguration>
    void SetHlsConfiguration(HlsConfigurationT&& value) { m_hlsConfigurationHasBeenSet = true; m_hlsConfiguration = std::forward<HlsConfigurationT>(value); }
    template<typename HlsConfigurationT = HlsConfiguration>
    GetPlaybackConfigurationResult& WithHlsConfiguration(HlsConfigurationT&& value) { SetHlsConfiguration(std::forward<HlsConfigurationT>(value)); return *this;}
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
    inline void SetInsertionMode(InsertionMode value) { m_insertionModeHasBeenSet = true; m_insertionMode = value; }
    inline GetPlaybackConfigurationResult& WithInsertionMode(InsertionMode value) { SetInsertionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for pre-roll ad insertion.</p>
     */
    inline const LivePreRollConfiguration& GetLivePreRollConfiguration() const { return m_livePreRollConfiguration; }
    template<typename LivePreRollConfigurationT = LivePreRollConfiguration>
    void SetLivePreRollConfiguration(LivePreRollConfigurationT&& value) { m_livePreRollConfigurationHasBeenSet = true; m_livePreRollConfiguration = std::forward<LivePreRollConfigurationT>(value); }
    template<typename LivePreRollConfigurationT = LivePreRollConfiguration>
    GetPlaybackConfigurationResult& WithLivePreRollConfiguration(LivePreRollConfigurationT&& value) { SetLivePreRollConfiguration(std::forward<LivePreRollConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration that defines where AWS Elemental MediaTailor sends logs for
     * the playback configuration.</p>
     */
    inline const LogConfiguration& GetLogConfiguration() const { return m_logConfiguration; }
    template<typename LogConfigurationT = LogConfiguration>
    void SetLogConfiguration(LogConfigurationT&& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = std::forward<LogConfigurationT>(value); }
    template<typename LogConfigurationT = LogConfiguration>
    GetPlaybackConfigurationResult& WithLogConfiguration(LogConfigurationT&& value) { SetLogConfiguration(std::forward<LogConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for manifest processing rules. Manifest processing rules
     * enable customization of the personalized manifests created by MediaTailor.</p>
     */
    inline const ManifestProcessingRules& GetManifestProcessingRules() const { return m_manifestProcessingRules; }
    template<typename ManifestProcessingRulesT = ManifestProcessingRules>
    void SetManifestProcessingRules(ManifestProcessingRulesT&& value) { m_manifestProcessingRulesHasBeenSet = true; m_manifestProcessingRules = std::forward<ManifestProcessingRulesT>(value); }
    template<typename ManifestProcessingRulesT = ManifestProcessingRules>
    GetPlaybackConfigurationResult& WithManifestProcessingRules(ManifestProcessingRulesT&& value) { SetManifestProcessingRules(std::forward<ManifestProcessingRulesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the playback configuration.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetPlaybackConfigurationResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    inline void SetPersonalizationThresholdSeconds(int value) { m_personalizationThresholdSecondsHasBeenSet = true; m_personalizationThresholdSeconds = value; }
    inline GetPlaybackConfigurationResult& WithPersonalizationThresholdSeconds(int value) { SetPersonalizationThresholdSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the playback configuration.</p>
     */
    inline const Aws::String& GetPlaybackConfigurationArn() const { return m_playbackConfigurationArn; }
    template<typename PlaybackConfigurationArnT = Aws::String>
    void SetPlaybackConfigurationArn(PlaybackConfigurationArnT&& value) { m_playbackConfigurationArnHasBeenSet = true; m_playbackConfigurationArn = std::forward<PlaybackConfigurationArnT>(value); }
    template<typename PlaybackConfigurationArnT = Aws::String>
    GetPlaybackConfigurationResult& WithPlaybackConfigurationArn(PlaybackConfigurationArnT&& value) { SetPlaybackConfigurationArn(std::forward<PlaybackConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL that the player accesses to get a manifest from AWS Elemental
     * MediaTailor. This session will use server-side reporting.</p>
     */
    inline const Aws::String& GetPlaybackEndpointPrefix() const { return m_playbackEndpointPrefix; }
    template<typename PlaybackEndpointPrefixT = Aws::String>
    void SetPlaybackEndpointPrefix(PlaybackEndpointPrefixT&& value) { m_playbackEndpointPrefixHasBeenSet = true; m_playbackEndpointPrefix = std::forward<PlaybackEndpointPrefixT>(value); }
    template<typename PlaybackEndpointPrefixT = Aws::String>
    GetPlaybackConfigurationResult& WithPlaybackEndpointPrefix(PlaybackEndpointPrefixT&& value) { SetPlaybackEndpointPrefix(std::forward<PlaybackEndpointPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL that the player uses to initialize a session that uses client-side
     * reporting.</p>
     */
    inline const Aws::String& GetSessionInitializationEndpointPrefix() const { return m_sessionInitializationEndpointPrefix; }
    template<typename SessionInitializationEndpointPrefixT = Aws::String>
    void SetSessionInitializationEndpointPrefix(SessionInitializationEndpointPrefixT&& value) { m_sessionInitializationEndpointPrefixHasBeenSet = true; m_sessionInitializationEndpointPrefix = std::forward<SessionInitializationEndpointPrefixT>(value); }
    template<typename SessionInitializationEndpointPrefixT = Aws::String>
    GetPlaybackConfigurationResult& WithSessionInitializationEndpointPrefix(SessionInitializationEndpointPrefixT&& value) { SetSessionInitializationEndpointPrefix(std::forward<SessionInitializationEndpointPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL for a high-quality video asset to transcode and use to fill in time
     * that's not used by ads. AWS Elemental MediaTailor shows the slate to fill in
     * gaps in media content. Configuring the slate is optional for non-VPAID playback
     * configurations. For VPAID, the slate is required because MediaTailor provides it
     * in the slots designated for dynamic ad content. The slate must be a high-quality
     * asset that contains both audio and video.</p>
     */
    inline const Aws::String& GetSlateAdUrl() const { return m_slateAdUrl; }
    template<typename SlateAdUrlT = Aws::String>
    void SetSlateAdUrl(SlateAdUrlT&& value) { m_slateAdUrlHasBeenSet = true; m_slateAdUrl = std::forward<SlateAdUrlT>(value); }
    template<typename SlateAdUrlT = Aws::String>
    GetPlaybackConfigurationResult& WithSlateAdUrl(SlateAdUrlT&& value) { SetSlateAdUrl(std::forward<SlateAdUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the playback configuration. Tags are key-value pairs
     * that you can associate with Amazon resources to help with organization, access
     * control, and cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetPlaybackConfigurationResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetPlaybackConfigurationResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
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
    template<typename TranscodeProfileNameT = Aws::String>
    void SetTranscodeProfileName(TranscodeProfileNameT&& value) { m_transcodeProfileNameHasBeenSet = true; m_transcodeProfileName = std::forward<TranscodeProfileNameT>(value); }
    template<typename TranscodeProfileNameT = Aws::String>
    GetPlaybackConfigurationResult& WithTranscodeProfileName(TranscodeProfileNameT&& value) { SetTranscodeProfileName(std::forward<TranscodeProfileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL prefix for the parent manifest for the stream, minus the asset ID.
     * The maximum length is 512 characters.</p>
     */
    inline const Aws::String& GetVideoContentSourceUrl() const { return m_videoContentSourceUrl; }
    template<typename VideoContentSourceUrlT = Aws::String>
    void SetVideoContentSourceUrl(VideoContentSourceUrlT&& value) { m_videoContentSourceUrlHasBeenSet = true; m_videoContentSourceUrl = std::forward<VideoContentSourceUrlT>(value); }
    template<typename VideoContentSourceUrlT = Aws::String>
    GetPlaybackConfigurationResult& WithVideoContentSourceUrl(VideoContentSourceUrlT&& value) { SetVideoContentSourceUrl(std::forward<VideoContentSourceUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The setting that indicates what conditioning MediaTailor will perform on ads
     * that the ad decision server (ADS) returns, and what priority MediaTailor uses
     * when inserting ads. </p>
     */
    inline const AdConditioningConfiguration& GetAdConditioningConfiguration() const { return m_adConditioningConfiguration; }
    template<typename AdConditioningConfigurationT = AdConditioningConfiguration>
    void SetAdConditioningConfiguration(AdConditioningConfigurationT&& value) { m_adConditioningConfigurationHasBeenSet = true; m_adConditioningConfiguration = std::forward<AdConditioningConfigurationT>(value); }
    template<typename AdConditioningConfigurationT = AdConditioningConfiguration>
    GetPlaybackConfigurationResult& WithAdConditioningConfiguration(AdConditioningConfigurationT&& value) { SetAdConditioningConfiguration(std::forward<AdConditioningConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPlaybackConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
