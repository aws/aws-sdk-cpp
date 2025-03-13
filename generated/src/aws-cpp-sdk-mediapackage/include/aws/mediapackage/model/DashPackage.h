/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediapackage/model/AdsOnDeliveryRestrictions.h>
#include <aws/mediapackage/model/DashEncryption.h>
#include <aws/mediapackage/model/ManifestLayout.h>
#include <aws/mediapackage/model/Profile.h>
#include <aws/mediapackage/model/SegmentTemplateFormat.h>
#include <aws/mediapackage/model/StreamSelection.h>
#include <aws/mediapackage/model/UtcTiming.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackage/model/__AdTriggersElement.h>
#include <aws/mediapackage/model/__PeriodTriggersElement.h>
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
namespace MediaPackage
{
namespace Model
{

  /**
   * A Dynamic Adaptive Streaming over HTTP (DASH) packaging configuration.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/DashPackage">AWS
   * API Reference</a></p>
   */
  class DashPackage
  {
  public:
    AWS_MEDIAPACKAGE_API DashPackage() = default;
    AWS_MEDIAPACKAGE_API DashPackage(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API DashPackage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::Vector<__AdTriggersElement>& GetAdTriggers() const { return m_adTriggers; }
    inline bool AdTriggersHasBeenSet() const { return m_adTriggersHasBeenSet; }
    template<typename AdTriggersT = Aws::Vector<__AdTriggersElement>>
    void SetAdTriggers(AdTriggersT&& value) { m_adTriggersHasBeenSet = true; m_adTriggers = std::forward<AdTriggersT>(value); }
    template<typename AdTriggersT = Aws::Vector<__AdTriggersElement>>
    DashPackage& WithAdTriggers(AdTriggersT&& value) { SetAdTriggers(std::forward<AdTriggersT>(value)); return *this;}
    inline DashPackage& AddAdTriggers(__AdTriggersElement value) { m_adTriggersHasBeenSet = true; m_adTriggers.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline AdsOnDeliveryRestrictions GetAdsOnDeliveryRestrictions() const { return m_adsOnDeliveryRestrictions; }
    inline bool AdsOnDeliveryRestrictionsHasBeenSet() const { return m_adsOnDeliveryRestrictionsHasBeenSet; }
    inline void SetAdsOnDeliveryRestrictions(AdsOnDeliveryRestrictions value) { m_adsOnDeliveryRestrictionsHasBeenSet = true; m_adsOnDeliveryRestrictions = value; }
    inline DashPackage& WithAdsOnDeliveryRestrictions(AdsOnDeliveryRestrictions value) { SetAdsOnDeliveryRestrictions(value); return *this;}
    ///@}

    ///@{
    
    inline const DashEncryption& GetEncryption() const { return m_encryption; }
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }
    template<typename EncryptionT = DashEncryption>
    void SetEncryption(EncryptionT&& value) { m_encryptionHasBeenSet = true; m_encryption = std::forward<EncryptionT>(value); }
    template<typename EncryptionT = DashEncryption>
    DashPackage& WithEncryption(EncryptionT&& value) { SetEncryption(std::forward<EncryptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * When enabled, an I-Frame only stream will be included in the output.
     */
    inline bool GetIncludeIframeOnlyStream() const { return m_includeIframeOnlyStream; }
    inline bool IncludeIframeOnlyStreamHasBeenSet() const { return m_includeIframeOnlyStreamHasBeenSet; }
    inline void SetIncludeIframeOnlyStream(bool value) { m_includeIframeOnlyStreamHasBeenSet = true; m_includeIframeOnlyStream = value; }
    inline DashPackage& WithIncludeIframeOnlyStream(bool value) { SetIncludeIframeOnlyStream(value); return *this;}
    ///@}

    ///@{
    /**
     * Determines the position of some tags in the Media Presentation Description
     * (MPD).  When set to FULL, elements like SegmentTemplate and ContentProtection
     * are included in each Representation.  When set to COMPACT, duplicate elements
     * are combined and presented at the AdaptationSet level. When set to
     * DRM_TOP_LEVEL_COMPACT, content protection elements are placed the MPD level and
     * referenced at the AdaptationSet level.
     */
    inline ManifestLayout GetManifestLayout() const { return m_manifestLayout; }
    inline bool ManifestLayoutHasBeenSet() const { return m_manifestLayoutHasBeenSet; }
    inline void SetManifestLayout(ManifestLayout value) { m_manifestLayoutHasBeenSet = true; m_manifestLayout = value; }
    inline DashPackage& WithManifestLayout(ManifestLayout value) { SetManifestLayout(value); return *this;}
    ///@}

    ///@{
    /**
     * Time window (in seconds) contained in each manifest.
     */
    inline int GetManifestWindowSeconds() const { return m_manifestWindowSeconds; }
    inline bool ManifestWindowSecondsHasBeenSet() const { return m_manifestWindowSecondsHasBeenSet; }
    inline void SetManifestWindowSeconds(int value) { m_manifestWindowSecondsHasBeenSet = true; m_manifestWindowSeconds = value; }
    inline DashPackage& WithManifestWindowSeconds(int value) { SetManifestWindowSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * Minimum duration (in seconds) that a player will buffer media before starting
     * the presentation.
     */
    inline int GetMinBufferTimeSeconds() const { return m_minBufferTimeSeconds; }
    inline bool MinBufferTimeSecondsHasBeenSet() const { return m_minBufferTimeSecondsHasBeenSet; }
    inline void SetMinBufferTimeSeconds(int value) { m_minBufferTimeSecondsHasBeenSet = true; m_minBufferTimeSeconds = value; }
    inline DashPackage& WithMinBufferTimeSeconds(int value) { SetMinBufferTimeSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * Minimum duration (in seconds) between potential changes to the Dynamic Adaptive
     * Streaming over HTTP (DASH) Media Presentation Description (MPD).
     */
    inline int GetMinUpdatePeriodSeconds() const { return m_minUpdatePeriodSeconds; }
    inline bool MinUpdatePeriodSecondsHasBeenSet() const { return m_minUpdatePeriodSecondsHasBeenSet; }
    inline void SetMinUpdatePeriodSeconds(int value) { m_minUpdatePeriodSecondsHasBeenSet = true; m_minUpdatePeriodSeconds = value; }
    inline DashPackage& WithMinUpdatePeriodSeconds(int value) { SetMinUpdatePeriodSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * A list of triggers that controls when the outgoing Dynamic Adaptive Streaming
     * over HTTP (DASH)
Media Presentation Description (MPD) will be partitioned into
     * multiple periods. If empty, the content will not
be partitioned into more than
     * one period. If the list contains "ADS", new periods will be created where
the
     * Channel source contains SCTE-35 ad markers.

     */
    inline const Aws::Vector<__PeriodTriggersElement>& GetPeriodTriggers() const { return m_periodTriggers; }
    inline bool PeriodTriggersHasBeenSet() const { return m_periodTriggersHasBeenSet; }
    template<typename PeriodTriggersT = Aws::Vector<__PeriodTriggersElement>>
    void SetPeriodTriggers(PeriodTriggersT&& value) { m_periodTriggersHasBeenSet = true; m_periodTriggers = std::forward<PeriodTriggersT>(value); }
    template<typename PeriodTriggersT = Aws::Vector<__PeriodTriggersElement>>
    DashPackage& WithPeriodTriggers(PeriodTriggersT&& value) { SetPeriodTriggers(std::forward<PeriodTriggersT>(value)); return *this;}
    inline DashPackage& AddPeriodTriggers(__PeriodTriggersElement value) { m_periodTriggersHasBeenSet = true; m_periodTriggers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * The Dynamic Adaptive Streaming over HTTP (DASH) profile type.  When set to
     * "HBBTV_1_5", HbbTV 1.5 compliant output is enabled. When set to "DVB-DASH_2014",
     * DVB-DASH 2014 compliant output is enabled.
     */
    inline Profile GetProfile() const { return m_profile; }
    inline bool ProfileHasBeenSet() const { return m_profileHasBeenSet; }
    inline void SetProfile(Profile value) { m_profileHasBeenSet = true; m_profile = value; }
    inline DashPackage& WithProfile(Profile value) { SetProfile(value); return *this;}
    ///@}

    ///@{
    /**
     * Duration (in seconds) of each segment. Actual segments will be
rounded to the
     * nearest multiple of the source segment duration.

     */
    inline int GetSegmentDurationSeconds() const { return m_segmentDurationSeconds; }
    inline bool SegmentDurationSecondsHasBeenSet() const { return m_segmentDurationSecondsHasBeenSet; }
    inline void SetSegmentDurationSeconds(int value) { m_segmentDurationSecondsHasBeenSet = true; m_segmentDurationSeconds = value; }
    inline DashPackage& WithSegmentDurationSeconds(int value) { SetSegmentDurationSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * Determines the type of SegmentTemplate included in the Media Presentation
     * Description (MPD).  When set to NUMBER_WITH_TIMELINE, a full timeline is
     * presented in each SegmentTemplate, with $Number$ media URLs.  When set to
     * TIME_WITH_TIMELINE, a full timeline is presented in each SegmentTemplate, with
     * $Time$ media URLs. When set to NUMBER_WITH_DURATION, only a duration is included
     * in each SegmentTemplate, with $Number$ media URLs.
     */
    inline SegmentTemplateFormat GetSegmentTemplateFormat() const { return m_segmentTemplateFormat; }
    inline bool SegmentTemplateFormatHasBeenSet() const { return m_segmentTemplateFormatHasBeenSet; }
    inline void SetSegmentTemplateFormat(SegmentTemplateFormat value) { m_segmentTemplateFormatHasBeenSet = true; m_segmentTemplateFormat = value; }
    inline DashPackage& WithSegmentTemplateFormat(SegmentTemplateFormat value) { SetSegmentTemplateFormat(value); return *this;}
    ///@}

    ///@{
    
    inline const StreamSelection& GetStreamSelection() const { return m_streamSelection; }
    inline bool StreamSelectionHasBeenSet() const { return m_streamSelectionHasBeenSet; }
    template<typename StreamSelectionT = StreamSelection>
    void SetStreamSelection(StreamSelectionT&& value) { m_streamSelectionHasBeenSet = true; m_streamSelection = std::forward<StreamSelectionT>(value); }
    template<typename StreamSelectionT = StreamSelection>
    DashPackage& WithStreamSelection(StreamSelectionT&& value) { SetStreamSelection(std::forward<StreamSelectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Duration (in seconds) to delay live content before presentation.
     */
    inline int GetSuggestedPresentationDelaySeconds() const { return m_suggestedPresentationDelaySeconds; }
    inline bool SuggestedPresentationDelaySecondsHasBeenSet() const { return m_suggestedPresentationDelaySecondsHasBeenSet; }
    inline void SetSuggestedPresentationDelaySeconds(int value) { m_suggestedPresentationDelaySecondsHasBeenSet = true; m_suggestedPresentationDelaySeconds = value; }
    inline DashPackage& WithSuggestedPresentationDelaySeconds(int value) { SetSuggestedPresentationDelaySeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * Determines the type of UTCTiming included in the Media Presentation Description
     * (MPD)
     */
    inline UtcTiming GetUtcTiming() const { return m_utcTiming; }
    inline bool UtcTimingHasBeenSet() const { return m_utcTimingHasBeenSet; }
    inline void SetUtcTiming(UtcTiming value) { m_utcTimingHasBeenSet = true; m_utcTiming = value; }
    inline DashPackage& WithUtcTiming(UtcTiming value) { SetUtcTiming(value); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the value attribute of the UTCTiming field when utcTiming is set to
     * HTTP-ISO, HTTP-HEAD or HTTP-XSDATE
     */
    inline const Aws::String& GetUtcTimingUri() const { return m_utcTimingUri; }
    inline bool UtcTimingUriHasBeenSet() const { return m_utcTimingUriHasBeenSet; }
    template<typename UtcTimingUriT = Aws::String>
    void SetUtcTimingUri(UtcTimingUriT&& value) { m_utcTimingUriHasBeenSet = true; m_utcTimingUri = std::forward<UtcTimingUriT>(value); }
    template<typename UtcTimingUriT = Aws::String>
    DashPackage& WithUtcTimingUri(UtcTimingUriT&& value) { SetUtcTimingUri(std::forward<UtcTimingUriT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<__AdTriggersElement> m_adTriggers;
    bool m_adTriggersHasBeenSet = false;

    AdsOnDeliveryRestrictions m_adsOnDeliveryRestrictions{AdsOnDeliveryRestrictions::NOT_SET};
    bool m_adsOnDeliveryRestrictionsHasBeenSet = false;

    DashEncryption m_encryption;
    bool m_encryptionHasBeenSet = false;

    bool m_includeIframeOnlyStream{false};
    bool m_includeIframeOnlyStreamHasBeenSet = false;

    ManifestLayout m_manifestLayout{ManifestLayout::NOT_SET};
    bool m_manifestLayoutHasBeenSet = false;

    int m_manifestWindowSeconds{0};
    bool m_manifestWindowSecondsHasBeenSet = false;

    int m_minBufferTimeSeconds{0};
    bool m_minBufferTimeSecondsHasBeenSet = false;

    int m_minUpdatePeriodSeconds{0};
    bool m_minUpdatePeriodSecondsHasBeenSet = false;

    Aws::Vector<__PeriodTriggersElement> m_periodTriggers;
    bool m_periodTriggersHasBeenSet = false;

    Profile m_profile{Profile::NOT_SET};
    bool m_profileHasBeenSet = false;

    int m_segmentDurationSeconds{0};
    bool m_segmentDurationSecondsHasBeenSet = false;

    SegmentTemplateFormat m_segmentTemplateFormat{SegmentTemplateFormat::NOT_SET};
    bool m_segmentTemplateFormatHasBeenSet = false;

    StreamSelection m_streamSelection;
    bool m_streamSelectionHasBeenSet = false;

    int m_suggestedPresentationDelaySeconds{0};
    bool m_suggestedPresentationDelaySecondsHasBeenSet = false;

    UtcTiming m_utcTiming{UtcTiming::NOT_SET};
    bool m_utcTimingHasBeenSet = false;

    Aws::String m_utcTimingUri;
    bool m_utcTimingUriHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
