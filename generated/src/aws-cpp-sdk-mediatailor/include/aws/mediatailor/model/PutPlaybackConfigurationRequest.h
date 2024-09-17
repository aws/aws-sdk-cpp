/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/MediaTailorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/model/AvailSuppression.h>
#include <aws/mediatailor/model/Bumper.h>
#include <aws/mediatailor/model/CdnConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mediatailor/model/DashConfigurationForPut.h>
#include <aws/mediatailor/model/InsertionMode.h>
#include <aws/mediatailor/model/LivePreRollConfiguration.h>
#include <aws/mediatailor/model/ManifestProcessingRules.h>
#include <utility>

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

  /**
   */
  class PutPlaybackConfigurationRequest : public MediaTailorRequest
  {
  public:
    AWS_MEDIATAILOR_API PutPlaybackConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutPlaybackConfiguration"; }

    AWS_MEDIATAILOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The URL for the ad decision server (ADS). This includes the specification of
     * static parameters and placeholders for dynamic parameters. AWS Elemental
     * MediaTailor substitutes player-specific and session-specific parameters as
     * needed when calling the ADS. Alternately, for testing you can provide a static
     * VAST URL. The maximum length is 25,000 characters.</p>
     */
    inline const Aws::String& GetAdDecisionServerUrl() const{ return m_adDecisionServerUrl; }
    inline bool AdDecisionServerUrlHasBeenSet() const { return m_adDecisionServerUrlHasBeenSet; }
    inline void SetAdDecisionServerUrl(const Aws::String& value) { m_adDecisionServerUrlHasBeenSet = true; m_adDecisionServerUrl = value; }
    inline void SetAdDecisionServerUrl(Aws::String&& value) { m_adDecisionServerUrlHasBeenSet = true; m_adDecisionServerUrl = std::move(value); }
    inline void SetAdDecisionServerUrl(const char* value) { m_adDecisionServerUrlHasBeenSet = true; m_adDecisionServerUrl.assign(value); }
    inline PutPlaybackConfigurationRequest& WithAdDecisionServerUrl(const Aws::String& value) { SetAdDecisionServerUrl(value); return *this;}
    inline PutPlaybackConfigurationRequest& WithAdDecisionServerUrl(Aws::String&& value) { SetAdDecisionServerUrl(std::move(value)); return *this;}
    inline PutPlaybackConfigurationRequest& WithAdDecisionServerUrl(const char* value) { SetAdDecisionServerUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for avail suppression, also known as ad suppression. For
     * more information about ad suppression, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/ad-behavior.html">Ad
     * Suppression</a>.</p>
     */
    inline const AvailSuppression& GetAvailSuppression() const{ return m_availSuppression; }
    inline bool AvailSuppressionHasBeenSet() const { return m_availSuppressionHasBeenSet; }
    inline void SetAvailSuppression(const AvailSuppression& value) { m_availSuppressionHasBeenSet = true; m_availSuppression = value; }
    inline void SetAvailSuppression(AvailSuppression&& value) { m_availSuppressionHasBeenSet = true; m_availSuppression = std::move(value); }
    inline PutPlaybackConfigurationRequest& WithAvailSuppression(const AvailSuppression& value) { SetAvailSuppression(value); return *this;}
    inline PutPlaybackConfigurationRequest& WithAvailSuppression(AvailSuppression&& value) { SetAvailSuppression(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for bumpers. Bumpers are short audio or video clips that
     * play at the start or before the end of an ad break. To learn more about bumpers,
     * see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/bumpers.html">Bumpers</a>.</p>
     */
    inline const Bumper& GetBumper() const{ return m_bumper; }
    inline bool BumperHasBeenSet() const { return m_bumperHasBeenSet; }
    inline void SetBumper(const Bumper& value) { m_bumperHasBeenSet = true; m_bumper = value; }
    inline void SetBumper(Bumper&& value) { m_bumperHasBeenSet = true; m_bumper = std::move(value); }
    inline PutPlaybackConfigurationRequest& WithBumper(const Bumper& value) { SetBumper(value); return *this;}
    inline PutPlaybackConfigurationRequest& WithBumper(Bumper&& value) { SetBumper(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for using a content delivery network (CDN), like Amazon
     * CloudFront, for content and ad segment management.</p>
     */
    inline const CdnConfiguration& GetCdnConfiguration() const{ return m_cdnConfiguration; }
    inline bool CdnConfigurationHasBeenSet() const { return m_cdnConfigurationHasBeenSet; }
    inline void SetCdnConfiguration(const CdnConfiguration& value) { m_cdnConfigurationHasBeenSet = true; m_cdnConfiguration = value; }
    inline void SetCdnConfiguration(CdnConfiguration&& value) { m_cdnConfigurationHasBeenSet = true; m_cdnConfiguration = std::move(value); }
    inline PutPlaybackConfigurationRequest& WithCdnConfiguration(const CdnConfiguration& value) { SetCdnConfiguration(value); return *this;}
    inline PutPlaybackConfigurationRequest& WithCdnConfiguration(CdnConfiguration&& value) { SetCdnConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The player parameters and aliases used as dynamic variables during session
     * initialization. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/variables-domain.html">Domain
     * Variables</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& GetConfigurationAliases() const{ return m_configurationAliases; }
    inline bool ConfigurationAliasesHasBeenSet() const { return m_configurationAliasesHasBeenSet; }
    inline void SetConfigurationAliases(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& value) { m_configurationAliasesHasBeenSet = true; m_configurationAliases = value; }
    inline void SetConfigurationAliases(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>&& value) { m_configurationAliasesHasBeenSet = true; m_configurationAliases = std::move(value); }
    inline PutPlaybackConfigurationRequest& WithConfigurationAliases(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& value) { SetConfigurationAliases(value); return *this;}
    inline PutPlaybackConfigurationRequest& WithConfigurationAliases(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>&& value) { SetConfigurationAliases(std::move(value)); return *this;}
    inline PutPlaybackConfigurationRequest& AddConfigurationAliases(const Aws::String& key, const Aws::Map<Aws::String, Aws::String>& value) { m_configurationAliasesHasBeenSet = true; m_configurationAliases.emplace(key, value); return *this; }
    inline PutPlaybackConfigurationRequest& AddConfigurationAliases(Aws::String&& key, const Aws::Map<Aws::String, Aws::String>& value) { m_configurationAliasesHasBeenSet = true; m_configurationAliases.emplace(std::move(key), value); return *this; }
    inline PutPlaybackConfigurationRequest& AddConfigurationAliases(const Aws::String& key, Aws::Map<Aws::String, Aws::String>&& value) { m_configurationAliasesHasBeenSet = true; m_configurationAliases.emplace(key, std::move(value)); return *this; }
    inline PutPlaybackConfigurationRequest& AddConfigurationAliases(Aws::String&& key, Aws::Map<Aws::String, Aws::String>&& value) { m_configurationAliasesHasBeenSet = true; m_configurationAliases.emplace(std::move(key), std::move(value)); return *this; }
    inline PutPlaybackConfigurationRequest& AddConfigurationAliases(const char* key, Aws::Map<Aws::String, Aws::String>&& value) { m_configurationAliasesHasBeenSet = true; m_configurationAliases.emplace(key, std::move(value)); return *this; }
    inline PutPlaybackConfigurationRequest& AddConfigurationAliases(const char* key, const Aws::Map<Aws::String, Aws::String>& value) { m_configurationAliasesHasBeenSet = true; m_configurationAliases.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration for DASH content.</p>
     */
    inline const DashConfigurationForPut& GetDashConfiguration() const{ return m_dashConfiguration; }
    inline bool DashConfigurationHasBeenSet() const { return m_dashConfigurationHasBeenSet; }
    inline void SetDashConfiguration(const DashConfigurationForPut& value) { m_dashConfigurationHasBeenSet = true; m_dashConfiguration = value; }
    inline void SetDashConfiguration(DashConfigurationForPut&& value) { m_dashConfigurationHasBeenSet = true; m_dashConfiguration = std::move(value); }
    inline PutPlaybackConfigurationRequest& WithDashConfiguration(const DashConfigurationForPut& value) { SetDashConfiguration(value); return *this;}
    inline PutPlaybackConfigurationRequest& WithDashConfiguration(DashConfigurationForPut&& value) { SetDashConfiguration(std::move(value)); return *this;}
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
    inline const InsertionMode& GetInsertionMode() const{ return m_insertionMode; }
    inline bool InsertionModeHasBeenSet() const { return m_insertionModeHasBeenSet; }
    inline void SetInsertionMode(const InsertionMode& value) { m_insertionModeHasBeenSet = true; m_insertionMode = value; }
    inline void SetInsertionMode(InsertionMode&& value) { m_insertionModeHasBeenSet = true; m_insertionMode = std::move(value); }
    inline PutPlaybackConfigurationRequest& WithInsertionMode(const InsertionMode& value) { SetInsertionMode(value); return *this;}
    inline PutPlaybackConfigurationRequest& WithInsertionMode(InsertionMode&& value) { SetInsertionMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for pre-roll ad insertion.</p>
     */
    inline const LivePreRollConfiguration& GetLivePreRollConfiguration() const{ return m_livePreRollConfiguration; }
    inline bool LivePreRollConfigurationHasBeenSet() const { return m_livePreRollConfigurationHasBeenSet; }
    inline void SetLivePreRollConfiguration(const LivePreRollConfiguration& value) { m_livePreRollConfigurationHasBeenSet = true; m_livePreRollConfiguration = value; }
    inline void SetLivePreRollConfiguration(LivePreRollConfiguration&& value) { m_livePreRollConfigurationHasBeenSet = true; m_livePreRollConfiguration = std::move(value); }
    inline PutPlaybackConfigurationRequest& WithLivePreRollConfiguration(const LivePreRollConfiguration& value) { SetLivePreRollConfiguration(value); return *this;}
    inline PutPlaybackConfigurationRequest& WithLivePreRollConfiguration(LivePreRollConfiguration&& value) { SetLivePreRollConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for manifest processing rules. Manifest processing rules
     * enable customization of the personalized manifests created by MediaTailor.</p>
     */
    inline const ManifestProcessingRules& GetManifestProcessingRules() const{ return m_manifestProcessingRules; }
    inline bool ManifestProcessingRulesHasBeenSet() const { return m_manifestProcessingRulesHasBeenSet; }
    inline void SetManifestProcessingRules(const ManifestProcessingRules& value) { m_manifestProcessingRulesHasBeenSet = true; m_manifestProcessingRules = value; }
    inline void SetManifestProcessingRules(ManifestProcessingRules&& value) { m_manifestProcessingRulesHasBeenSet = true; m_manifestProcessingRules = std::move(value); }
    inline PutPlaybackConfigurationRequest& WithManifestProcessingRules(const ManifestProcessingRules& value) { SetManifestProcessingRules(value); return *this;}
    inline PutPlaybackConfigurationRequest& WithManifestProcessingRules(ManifestProcessingRules&& value) { SetManifestProcessingRules(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the playback configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline PutPlaybackConfigurationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline PutPlaybackConfigurationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline PutPlaybackConfigurationRequest& WithName(const char* value) { SetName(value); return *this;}
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
    inline int GetPersonalizationThresholdSeconds() const{ return m_personalizationThresholdSeconds; }
    inline bool PersonalizationThresholdSecondsHasBeenSet() const { return m_personalizationThresholdSecondsHasBeenSet; }
    inline void SetPersonalizationThresholdSeconds(int value) { m_personalizationThresholdSecondsHasBeenSet = true; m_personalizationThresholdSeconds = value; }
    inline PutPlaybackConfigurationRequest& WithPersonalizationThresholdSeconds(int value) { SetPersonalizationThresholdSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL for a high-quality video asset to transcode and use to fill in time
     * that's not used by ads. AWS Elemental MediaTailor shows the slate to fill in
     * gaps in media content. Configuring the slate is optional for non-VPAID
     * configurations. For VPAID, the slate is required because MediaTailor provides it
     * in the slots that are designated for dynamic ad content. The slate must be a
     * high-quality asset that contains both audio and video.</p>
     */
    inline const Aws::String& GetSlateAdUrl() const{ return m_slateAdUrl; }
    inline bool SlateAdUrlHasBeenSet() const { return m_slateAdUrlHasBeenSet; }
    inline void SetSlateAdUrl(const Aws::String& value) { m_slateAdUrlHasBeenSet = true; m_slateAdUrl = value; }
    inline void SetSlateAdUrl(Aws::String&& value) { m_slateAdUrlHasBeenSet = true; m_slateAdUrl = std::move(value); }
    inline void SetSlateAdUrl(const char* value) { m_slateAdUrlHasBeenSet = true; m_slateAdUrl.assign(value); }
    inline PutPlaybackConfigurationRequest& WithSlateAdUrl(const Aws::String& value) { SetSlateAdUrl(value); return *this;}
    inline PutPlaybackConfigurationRequest& WithSlateAdUrl(Aws::String&& value) { SetSlateAdUrl(std::move(value)); return *this;}
    inline PutPlaybackConfigurationRequest& WithSlateAdUrl(const char* value) { SetSlateAdUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to assign to the playback configuration. Tags are key-value pairs
     * that you can associate with Amazon resources to help with organization, access
     * control, and cost tracking. For more information, see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
     * AWS Elemental MediaTailor Resources</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline PutPlaybackConfigurationRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline PutPlaybackConfigurationRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline PutPlaybackConfigurationRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline PutPlaybackConfigurationRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline PutPlaybackConfigurationRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline PutPlaybackConfigurationRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline PutPlaybackConfigurationRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline PutPlaybackConfigurationRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline PutPlaybackConfigurationRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name that is used to associate this playback configuration with a custom
     * transcode profile. This overrides the dynamic transcoding defaults of
     * MediaTailor. Use this only if you have already set up custom profiles with the
     * help of AWS Support.</p>
     */
    inline const Aws::String& GetTranscodeProfileName() const{ return m_transcodeProfileName; }
    inline bool TranscodeProfileNameHasBeenSet() const { return m_transcodeProfileNameHasBeenSet; }
    inline void SetTranscodeProfileName(const Aws::String& value) { m_transcodeProfileNameHasBeenSet = true; m_transcodeProfileName = value; }
    inline void SetTranscodeProfileName(Aws::String&& value) { m_transcodeProfileNameHasBeenSet = true; m_transcodeProfileName = std::move(value); }
    inline void SetTranscodeProfileName(const char* value) { m_transcodeProfileNameHasBeenSet = true; m_transcodeProfileName.assign(value); }
    inline PutPlaybackConfigurationRequest& WithTranscodeProfileName(const Aws::String& value) { SetTranscodeProfileName(value); return *this;}
    inline PutPlaybackConfigurationRequest& WithTranscodeProfileName(Aws::String&& value) { SetTranscodeProfileName(std::move(value)); return *this;}
    inline PutPlaybackConfigurationRequest& WithTranscodeProfileName(const char* value) { SetTranscodeProfileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL prefix for the parent manifest for the stream, minus the asset ID.
     * The maximum length is 512 characters.</p>
     */
    inline const Aws::String& GetVideoContentSourceUrl() const{ return m_videoContentSourceUrl; }
    inline bool VideoContentSourceUrlHasBeenSet() const { return m_videoContentSourceUrlHasBeenSet; }
    inline void SetVideoContentSourceUrl(const Aws::String& value) { m_videoContentSourceUrlHasBeenSet = true; m_videoContentSourceUrl = value; }
    inline void SetVideoContentSourceUrl(Aws::String&& value) { m_videoContentSourceUrlHasBeenSet = true; m_videoContentSourceUrl = std::move(value); }
    inline void SetVideoContentSourceUrl(const char* value) { m_videoContentSourceUrlHasBeenSet = true; m_videoContentSourceUrl.assign(value); }
    inline PutPlaybackConfigurationRequest& WithVideoContentSourceUrl(const Aws::String& value) { SetVideoContentSourceUrl(value); return *this;}
    inline PutPlaybackConfigurationRequest& WithVideoContentSourceUrl(Aws::String&& value) { SetVideoContentSourceUrl(std::move(value)); return *this;}
    inline PutPlaybackConfigurationRequest& WithVideoContentSourceUrl(const char* value) { SetVideoContentSourceUrl(value); return *this;}
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

    DashConfigurationForPut m_dashConfiguration;
    bool m_dashConfigurationHasBeenSet = false;

    InsertionMode m_insertionMode;
    bool m_insertionModeHasBeenSet = false;

    LivePreRollConfiguration m_livePreRollConfiguration;
    bool m_livePreRollConfigurationHasBeenSet = false;

    ManifestProcessingRules m_manifestProcessingRules;
    bool m_manifestProcessingRulesHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_personalizationThresholdSeconds;
    bool m_personalizationThresholdSecondsHasBeenSet = false;

    Aws::String m_slateAdUrl;
    bool m_slateAdUrlHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_transcodeProfileName;
    bool m_transcodeProfileNameHasBeenSet = false;

    Aws::String m_videoContentSourceUrl;
    bool m_videoContentSourceUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
