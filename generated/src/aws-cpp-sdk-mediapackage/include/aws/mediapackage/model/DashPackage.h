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
    AWS_MEDIAPACKAGE_API DashPackage();
    AWS_MEDIAPACKAGE_API DashPackage(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API DashPackage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::Vector<__AdTriggersElement>& GetAdTriggers() const{ return m_adTriggers; }

    
    inline bool AdTriggersHasBeenSet() const { return m_adTriggersHasBeenSet; }

    
    inline void SetAdTriggers(const Aws::Vector<__AdTriggersElement>& value) { m_adTriggersHasBeenSet = true; m_adTriggers = value; }

    
    inline void SetAdTriggers(Aws::Vector<__AdTriggersElement>&& value) { m_adTriggersHasBeenSet = true; m_adTriggers = std::move(value); }

    
    inline DashPackage& WithAdTriggers(const Aws::Vector<__AdTriggersElement>& value) { SetAdTriggers(value); return *this;}

    
    inline DashPackage& WithAdTriggers(Aws::Vector<__AdTriggersElement>&& value) { SetAdTriggers(std::move(value)); return *this;}

    
    inline DashPackage& AddAdTriggers(const __AdTriggersElement& value) { m_adTriggersHasBeenSet = true; m_adTriggers.push_back(value); return *this; }

    
    inline DashPackage& AddAdTriggers(__AdTriggersElement&& value) { m_adTriggersHasBeenSet = true; m_adTriggers.push_back(std::move(value)); return *this; }


    
    inline const AdsOnDeliveryRestrictions& GetAdsOnDeliveryRestrictions() const{ return m_adsOnDeliveryRestrictions; }

    
    inline bool AdsOnDeliveryRestrictionsHasBeenSet() const { return m_adsOnDeliveryRestrictionsHasBeenSet; }

    
    inline void SetAdsOnDeliveryRestrictions(const AdsOnDeliveryRestrictions& value) { m_adsOnDeliveryRestrictionsHasBeenSet = true; m_adsOnDeliveryRestrictions = value; }

    
    inline void SetAdsOnDeliveryRestrictions(AdsOnDeliveryRestrictions&& value) { m_adsOnDeliveryRestrictionsHasBeenSet = true; m_adsOnDeliveryRestrictions = std::move(value); }

    
    inline DashPackage& WithAdsOnDeliveryRestrictions(const AdsOnDeliveryRestrictions& value) { SetAdsOnDeliveryRestrictions(value); return *this;}

    
    inline DashPackage& WithAdsOnDeliveryRestrictions(AdsOnDeliveryRestrictions&& value) { SetAdsOnDeliveryRestrictions(std::move(value)); return *this;}


    
    inline const DashEncryption& GetEncryption() const{ return m_encryption; }

    
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }

    
    inline void SetEncryption(const DashEncryption& value) { m_encryptionHasBeenSet = true; m_encryption = value; }

    
    inline void SetEncryption(DashEncryption&& value) { m_encryptionHasBeenSet = true; m_encryption = std::move(value); }

    
    inline DashPackage& WithEncryption(const DashEncryption& value) { SetEncryption(value); return *this;}

    
    inline DashPackage& WithEncryption(DashEncryption&& value) { SetEncryption(std::move(value)); return *this;}


    /**
     * When enabled, an I-Frame only stream will be included in the output.
     */
    inline bool GetIncludeIframeOnlyStream() const{ return m_includeIframeOnlyStream; }

    /**
     * When enabled, an I-Frame only stream will be included in the output.
     */
    inline bool IncludeIframeOnlyStreamHasBeenSet() const { return m_includeIframeOnlyStreamHasBeenSet; }

    /**
     * When enabled, an I-Frame only stream will be included in the output.
     */
    inline void SetIncludeIframeOnlyStream(bool value) { m_includeIframeOnlyStreamHasBeenSet = true; m_includeIframeOnlyStream = value; }

    /**
     * When enabled, an I-Frame only stream will be included in the output.
     */
    inline DashPackage& WithIncludeIframeOnlyStream(bool value) { SetIncludeIframeOnlyStream(value); return *this;}


    /**
     * Determines the position of some tags in the Media Presentation Description
     * (MPD).  When set to FULL, elements like SegmentTemplate and ContentProtection
     * are included in each Representation.  When set to COMPACT, duplicate elements
     * are combined and presented at the AdaptationSet level.
     */
    inline const ManifestLayout& GetManifestLayout() const{ return m_manifestLayout; }

    /**
     * Determines the position of some tags in the Media Presentation Description
     * (MPD).  When set to FULL, elements like SegmentTemplate and ContentProtection
     * are included in each Representation.  When set to COMPACT, duplicate elements
     * are combined and presented at the AdaptationSet level.
     */
    inline bool ManifestLayoutHasBeenSet() const { return m_manifestLayoutHasBeenSet; }

    /**
     * Determines the position of some tags in the Media Presentation Description
     * (MPD).  When set to FULL, elements like SegmentTemplate and ContentProtection
     * are included in each Representation.  When set to COMPACT, duplicate elements
     * are combined and presented at the AdaptationSet level.
     */
    inline void SetManifestLayout(const ManifestLayout& value) { m_manifestLayoutHasBeenSet = true; m_manifestLayout = value; }

    /**
     * Determines the position of some tags in the Media Presentation Description
     * (MPD).  When set to FULL, elements like SegmentTemplate and ContentProtection
     * are included in each Representation.  When set to COMPACT, duplicate elements
     * are combined and presented at the AdaptationSet level.
     */
    inline void SetManifestLayout(ManifestLayout&& value) { m_manifestLayoutHasBeenSet = true; m_manifestLayout = std::move(value); }

    /**
     * Determines the position of some tags in the Media Presentation Description
     * (MPD).  When set to FULL, elements like SegmentTemplate and ContentProtection
     * are included in each Representation.  When set to COMPACT, duplicate elements
     * are combined and presented at the AdaptationSet level.
     */
    inline DashPackage& WithManifestLayout(const ManifestLayout& value) { SetManifestLayout(value); return *this;}

    /**
     * Determines the position of some tags in the Media Presentation Description
     * (MPD).  When set to FULL, elements like SegmentTemplate and ContentProtection
     * are included in each Representation.  When set to COMPACT, duplicate elements
     * are combined and presented at the AdaptationSet level.
     */
    inline DashPackage& WithManifestLayout(ManifestLayout&& value) { SetManifestLayout(std::move(value)); return *this;}


    /**
     * Time window (in seconds) contained in each manifest.
     */
    inline int GetManifestWindowSeconds() const{ return m_manifestWindowSeconds; }

    /**
     * Time window (in seconds) contained in each manifest.
     */
    inline bool ManifestWindowSecondsHasBeenSet() const { return m_manifestWindowSecondsHasBeenSet; }

    /**
     * Time window (in seconds) contained in each manifest.
     */
    inline void SetManifestWindowSeconds(int value) { m_manifestWindowSecondsHasBeenSet = true; m_manifestWindowSeconds = value; }

    /**
     * Time window (in seconds) contained in each manifest.
     */
    inline DashPackage& WithManifestWindowSeconds(int value) { SetManifestWindowSeconds(value); return *this;}


    /**
     * Minimum duration (in seconds) that a player will buffer media before starting
     * the presentation.
     */
    inline int GetMinBufferTimeSeconds() const{ return m_minBufferTimeSeconds; }

    /**
     * Minimum duration (in seconds) that a player will buffer media before starting
     * the presentation.
     */
    inline bool MinBufferTimeSecondsHasBeenSet() const { return m_minBufferTimeSecondsHasBeenSet; }

    /**
     * Minimum duration (in seconds) that a player will buffer media before starting
     * the presentation.
     */
    inline void SetMinBufferTimeSeconds(int value) { m_minBufferTimeSecondsHasBeenSet = true; m_minBufferTimeSeconds = value; }

    /**
     * Minimum duration (in seconds) that a player will buffer media before starting
     * the presentation.
     */
    inline DashPackage& WithMinBufferTimeSeconds(int value) { SetMinBufferTimeSeconds(value); return *this;}


    /**
     * Minimum duration (in seconds) between potential changes to the Dynamic Adaptive
     * Streaming over HTTP (DASH) Media Presentation Description (MPD).
     */
    inline int GetMinUpdatePeriodSeconds() const{ return m_minUpdatePeriodSeconds; }

    /**
     * Minimum duration (in seconds) between potential changes to the Dynamic Adaptive
     * Streaming over HTTP (DASH) Media Presentation Description (MPD).
     */
    inline bool MinUpdatePeriodSecondsHasBeenSet() const { return m_minUpdatePeriodSecondsHasBeenSet; }

    /**
     * Minimum duration (in seconds) between potential changes to the Dynamic Adaptive
     * Streaming over HTTP (DASH) Media Presentation Description (MPD).
     */
    inline void SetMinUpdatePeriodSeconds(int value) { m_minUpdatePeriodSecondsHasBeenSet = true; m_minUpdatePeriodSeconds = value; }

    /**
     * Minimum duration (in seconds) between potential changes to the Dynamic Adaptive
     * Streaming over HTTP (DASH) Media Presentation Description (MPD).
     */
    inline DashPackage& WithMinUpdatePeriodSeconds(int value) { SetMinUpdatePeriodSeconds(value); return *this;}


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
    inline const Aws::Vector<__PeriodTriggersElement>& GetPeriodTriggers() const{ return m_periodTriggers; }

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
    inline bool PeriodTriggersHasBeenSet() const { return m_periodTriggersHasBeenSet; }

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
    inline void SetPeriodTriggers(const Aws::Vector<__PeriodTriggersElement>& value) { m_periodTriggersHasBeenSet = true; m_periodTriggers = value; }

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
    inline void SetPeriodTriggers(Aws::Vector<__PeriodTriggersElement>&& value) { m_periodTriggersHasBeenSet = true; m_periodTriggers = std::move(value); }

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
    inline DashPackage& WithPeriodTriggers(const Aws::Vector<__PeriodTriggersElement>& value) { SetPeriodTriggers(value); return *this;}

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
    inline DashPackage& WithPeriodTriggers(Aws::Vector<__PeriodTriggersElement>&& value) { SetPeriodTriggers(std::move(value)); return *this;}

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
    inline DashPackage& AddPeriodTriggers(const __PeriodTriggersElement& value) { m_periodTriggersHasBeenSet = true; m_periodTriggers.push_back(value); return *this; }

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
    inline DashPackage& AddPeriodTriggers(__PeriodTriggersElement&& value) { m_periodTriggersHasBeenSet = true; m_periodTriggers.push_back(std::move(value)); return *this; }


    /**
     * The Dynamic Adaptive Streaming over HTTP (DASH) profile type.  When set to
     * "HBBTV_1_5", HbbTV 1.5 compliant output is enabled. When set to "DVB-DASH_2014",
     * DVB-DASH 2014 compliant output is enabled.
     */
    inline const Profile& GetProfile() const{ return m_profile; }

    /**
     * The Dynamic Adaptive Streaming over HTTP (DASH) profile type.  When set to
     * "HBBTV_1_5", HbbTV 1.5 compliant output is enabled. When set to "DVB-DASH_2014",
     * DVB-DASH 2014 compliant output is enabled.
     */
    inline bool ProfileHasBeenSet() const { return m_profileHasBeenSet; }

    /**
     * The Dynamic Adaptive Streaming over HTTP (DASH) profile type.  When set to
     * "HBBTV_1_5", HbbTV 1.5 compliant output is enabled. When set to "DVB-DASH_2014",
     * DVB-DASH 2014 compliant output is enabled.
     */
    inline void SetProfile(const Profile& value) { m_profileHasBeenSet = true; m_profile = value; }

    /**
     * The Dynamic Adaptive Streaming over HTTP (DASH) profile type.  When set to
     * "HBBTV_1_5", HbbTV 1.5 compliant output is enabled. When set to "DVB-DASH_2014",
     * DVB-DASH 2014 compliant output is enabled.
     */
    inline void SetProfile(Profile&& value) { m_profileHasBeenSet = true; m_profile = std::move(value); }

    /**
     * The Dynamic Adaptive Streaming over HTTP (DASH) profile type.  When set to
     * "HBBTV_1_5", HbbTV 1.5 compliant output is enabled. When set to "DVB-DASH_2014",
     * DVB-DASH 2014 compliant output is enabled.
     */
    inline DashPackage& WithProfile(const Profile& value) { SetProfile(value); return *this;}

    /**
     * The Dynamic Adaptive Streaming over HTTP (DASH) profile type.  When set to
     * "HBBTV_1_5", HbbTV 1.5 compliant output is enabled. When set to "DVB-DASH_2014",
     * DVB-DASH 2014 compliant output is enabled.
     */
    inline DashPackage& WithProfile(Profile&& value) { SetProfile(std::move(value)); return *this;}


    /**
     * Duration (in seconds) of each segment. Actual segments will be
rounded to the
     * nearest multiple of the source segment duration.

     */
    inline int GetSegmentDurationSeconds() const{ return m_segmentDurationSeconds; }

    /**
     * Duration (in seconds) of each segment. Actual segments will be
rounded to the
     * nearest multiple of the source segment duration.

     */
    inline bool SegmentDurationSecondsHasBeenSet() const { return m_segmentDurationSecondsHasBeenSet; }

    /**
     * Duration (in seconds) of each segment. Actual segments will be
rounded to the
     * nearest multiple of the source segment duration.

     */
    inline void SetSegmentDurationSeconds(int value) { m_segmentDurationSecondsHasBeenSet = true; m_segmentDurationSeconds = value; }

    /**
     * Duration (in seconds) of each segment. Actual segments will be
rounded to the
     * nearest multiple of the source segment duration.

     */
    inline DashPackage& WithSegmentDurationSeconds(int value) { SetSegmentDurationSeconds(value); return *this;}


    /**
     * Determines the type of SegmentTemplate included in the Media Presentation
     * Description (MPD).  When set to NUMBER_WITH_TIMELINE, a full timeline is
     * presented in each SegmentTemplate, with $Number$ media URLs.  When set to
     * TIME_WITH_TIMELINE, a full timeline is presented in each SegmentTemplate, with
     * $Time$ media URLs. When set to NUMBER_WITH_DURATION, only a duration is included
     * in each SegmentTemplate, with $Number$ media URLs.
     */
    inline const SegmentTemplateFormat& GetSegmentTemplateFormat() const{ return m_segmentTemplateFormat; }

    /**
     * Determines the type of SegmentTemplate included in the Media Presentation
     * Description (MPD).  When set to NUMBER_WITH_TIMELINE, a full timeline is
     * presented in each SegmentTemplate, with $Number$ media URLs.  When set to
     * TIME_WITH_TIMELINE, a full timeline is presented in each SegmentTemplate, with
     * $Time$ media URLs. When set to NUMBER_WITH_DURATION, only a duration is included
     * in each SegmentTemplate, with $Number$ media URLs.
     */
    inline bool SegmentTemplateFormatHasBeenSet() const { return m_segmentTemplateFormatHasBeenSet; }

    /**
     * Determines the type of SegmentTemplate included in the Media Presentation
     * Description (MPD).  When set to NUMBER_WITH_TIMELINE, a full timeline is
     * presented in each SegmentTemplate, with $Number$ media URLs.  When set to
     * TIME_WITH_TIMELINE, a full timeline is presented in each SegmentTemplate, with
     * $Time$ media URLs. When set to NUMBER_WITH_DURATION, only a duration is included
     * in each SegmentTemplate, with $Number$ media URLs.
     */
    inline void SetSegmentTemplateFormat(const SegmentTemplateFormat& value) { m_segmentTemplateFormatHasBeenSet = true; m_segmentTemplateFormat = value; }

    /**
     * Determines the type of SegmentTemplate included in the Media Presentation
     * Description (MPD).  When set to NUMBER_WITH_TIMELINE, a full timeline is
     * presented in each SegmentTemplate, with $Number$ media URLs.  When set to
     * TIME_WITH_TIMELINE, a full timeline is presented in each SegmentTemplate, with
     * $Time$ media URLs. When set to NUMBER_WITH_DURATION, only a duration is included
     * in each SegmentTemplate, with $Number$ media URLs.
     */
    inline void SetSegmentTemplateFormat(SegmentTemplateFormat&& value) { m_segmentTemplateFormatHasBeenSet = true; m_segmentTemplateFormat = std::move(value); }

    /**
     * Determines the type of SegmentTemplate included in the Media Presentation
     * Description (MPD).  When set to NUMBER_WITH_TIMELINE, a full timeline is
     * presented in each SegmentTemplate, with $Number$ media URLs.  When set to
     * TIME_WITH_TIMELINE, a full timeline is presented in each SegmentTemplate, with
     * $Time$ media URLs. When set to NUMBER_WITH_DURATION, only a duration is included
     * in each SegmentTemplate, with $Number$ media URLs.
     */
    inline DashPackage& WithSegmentTemplateFormat(const SegmentTemplateFormat& value) { SetSegmentTemplateFormat(value); return *this;}

    /**
     * Determines the type of SegmentTemplate included in the Media Presentation
     * Description (MPD).  When set to NUMBER_WITH_TIMELINE, a full timeline is
     * presented in each SegmentTemplate, with $Number$ media URLs.  When set to
     * TIME_WITH_TIMELINE, a full timeline is presented in each SegmentTemplate, with
     * $Time$ media URLs. When set to NUMBER_WITH_DURATION, only a duration is included
     * in each SegmentTemplate, with $Number$ media URLs.
     */
    inline DashPackage& WithSegmentTemplateFormat(SegmentTemplateFormat&& value) { SetSegmentTemplateFormat(std::move(value)); return *this;}


    
    inline const StreamSelection& GetStreamSelection() const{ return m_streamSelection; }

    
    inline bool StreamSelectionHasBeenSet() const { return m_streamSelectionHasBeenSet; }

    
    inline void SetStreamSelection(const StreamSelection& value) { m_streamSelectionHasBeenSet = true; m_streamSelection = value; }

    
    inline void SetStreamSelection(StreamSelection&& value) { m_streamSelectionHasBeenSet = true; m_streamSelection = std::move(value); }

    
    inline DashPackage& WithStreamSelection(const StreamSelection& value) { SetStreamSelection(value); return *this;}

    
    inline DashPackage& WithStreamSelection(StreamSelection&& value) { SetStreamSelection(std::move(value)); return *this;}


    /**
     * Duration (in seconds) to delay live content before presentation.
     */
    inline int GetSuggestedPresentationDelaySeconds() const{ return m_suggestedPresentationDelaySeconds; }

    /**
     * Duration (in seconds) to delay live content before presentation.
     */
    inline bool SuggestedPresentationDelaySecondsHasBeenSet() const { return m_suggestedPresentationDelaySecondsHasBeenSet; }

    /**
     * Duration (in seconds) to delay live content before presentation.
     */
    inline void SetSuggestedPresentationDelaySeconds(int value) { m_suggestedPresentationDelaySecondsHasBeenSet = true; m_suggestedPresentationDelaySeconds = value; }

    /**
     * Duration (in seconds) to delay live content before presentation.
     */
    inline DashPackage& WithSuggestedPresentationDelaySeconds(int value) { SetSuggestedPresentationDelaySeconds(value); return *this;}


    /**
     * Determines the type of UTCTiming included in the Media Presentation Description
     * (MPD)
     */
    inline const UtcTiming& GetUtcTiming() const{ return m_utcTiming; }

    /**
     * Determines the type of UTCTiming included in the Media Presentation Description
     * (MPD)
     */
    inline bool UtcTimingHasBeenSet() const { return m_utcTimingHasBeenSet; }

    /**
     * Determines the type of UTCTiming included in the Media Presentation Description
     * (MPD)
     */
    inline void SetUtcTiming(const UtcTiming& value) { m_utcTimingHasBeenSet = true; m_utcTiming = value; }

    /**
     * Determines the type of UTCTiming included in the Media Presentation Description
     * (MPD)
     */
    inline void SetUtcTiming(UtcTiming&& value) { m_utcTimingHasBeenSet = true; m_utcTiming = std::move(value); }

    /**
     * Determines the type of UTCTiming included in the Media Presentation Description
     * (MPD)
     */
    inline DashPackage& WithUtcTiming(const UtcTiming& value) { SetUtcTiming(value); return *this;}

    /**
     * Determines the type of UTCTiming included in the Media Presentation Description
     * (MPD)
     */
    inline DashPackage& WithUtcTiming(UtcTiming&& value) { SetUtcTiming(std::move(value)); return *this;}


    /**
     * Specifies the value attribute of the UTCTiming field when utcTiming is set to
     * HTTP-ISO, HTTP-HEAD or HTTP-XSDATE
     */
    inline const Aws::String& GetUtcTimingUri() const{ return m_utcTimingUri; }

    /**
     * Specifies the value attribute of the UTCTiming field when utcTiming is set to
     * HTTP-ISO, HTTP-HEAD or HTTP-XSDATE
     */
    inline bool UtcTimingUriHasBeenSet() const { return m_utcTimingUriHasBeenSet; }

    /**
     * Specifies the value attribute of the UTCTiming field when utcTiming is set to
     * HTTP-ISO, HTTP-HEAD or HTTP-XSDATE
     */
    inline void SetUtcTimingUri(const Aws::String& value) { m_utcTimingUriHasBeenSet = true; m_utcTimingUri = value; }

    /**
     * Specifies the value attribute of the UTCTiming field when utcTiming is set to
     * HTTP-ISO, HTTP-HEAD or HTTP-XSDATE
     */
    inline void SetUtcTimingUri(Aws::String&& value) { m_utcTimingUriHasBeenSet = true; m_utcTimingUri = std::move(value); }

    /**
     * Specifies the value attribute of the UTCTiming field when utcTiming is set to
     * HTTP-ISO, HTTP-HEAD or HTTP-XSDATE
     */
    inline void SetUtcTimingUri(const char* value) { m_utcTimingUriHasBeenSet = true; m_utcTimingUri.assign(value); }

    /**
     * Specifies the value attribute of the UTCTiming field when utcTiming is set to
     * HTTP-ISO, HTTP-HEAD or HTTP-XSDATE
     */
    inline DashPackage& WithUtcTimingUri(const Aws::String& value) { SetUtcTimingUri(value); return *this;}

    /**
     * Specifies the value attribute of the UTCTiming field when utcTiming is set to
     * HTTP-ISO, HTTP-HEAD or HTTP-XSDATE
     */
    inline DashPackage& WithUtcTimingUri(Aws::String&& value) { SetUtcTimingUri(std::move(value)); return *this;}

    /**
     * Specifies the value attribute of the UTCTiming field when utcTiming is set to
     * HTTP-ISO, HTTP-HEAD or HTTP-XSDATE
     */
    inline DashPackage& WithUtcTimingUri(const char* value) { SetUtcTimingUri(value); return *this;}

  private:

    Aws::Vector<__AdTriggersElement> m_adTriggers;
    bool m_adTriggersHasBeenSet = false;

    AdsOnDeliveryRestrictions m_adsOnDeliveryRestrictions;
    bool m_adsOnDeliveryRestrictionsHasBeenSet = false;

    DashEncryption m_encryption;
    bool m_encryptionHasBeenSet = false;

    bool m_includeIframeOnlyStream;
    bool m_includeIframeOnlyStreamHasBeenSet = false;

    ManifestLayout m_manifestLayout;
    bool m_manifestLayoutHasBeenSet = false;

    int m_manifestWindowSeconds;
    bool m_manifestWindowSecondsHasBeenSet = false;

    int m_minBufferTimeSeconds;
    bool m_minBufferTimeSecondsHasBeenSet = false;

    int m_minUpdatePeriodSeconds;
    bool m_minUpdatePeriodSecondsHasBeenSet = false;

    Aws::Vector<__PeriodTriggersElement> m_periodTriggers;
    bool m_periodTriggersHasBeenSet = false;

    Profile m_profile;
    bool m_profileHasBeenSet = false;

    int m_segmentDurationSeconds;
    bool m_segmentDurationSecondsHasBeenSet = false;

    SegmentTemplateFormat m_segmentTemplateFormat;
    bool m_segmentTemplateFormatHasBeenSet = false;

    StreamSelection m_streamSelection;
    bool m_streamSelectionHasBeenSet = false;

    int m_suggestedPresentationDelaySeconds;
    bool m_suggestedPresentationDelaySecondsHasBeenSet = false;

    UtcTiming m_utcTiming;
    bool m_utcTimingHasBeenSet = false;

    Aws::String m_utcTimingUri;
    bool m_utcTimingUriHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
