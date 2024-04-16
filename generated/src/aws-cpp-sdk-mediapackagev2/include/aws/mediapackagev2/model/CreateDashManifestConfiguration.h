/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackagev2/model/FilterConfiguration.h>
#include <aws/mediapackagev2/model/DashSegmentTemplateFormat.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediapackagev2/model/ScteDash.h>
#include <aws/mediapackagev2/model/DashDrmSignaling.h>
#include <aws/mediapackagev2/model/DashUtcTiming.h>
#include <aws/mediapackagev2/model/DashPeriodTrigger.h>
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
namespace mediapackagev2
{
namespace Model
{

  /**
   * <p>Create a DASH manifest configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/CreateDashManifestConfiguration">AWS
   * API Reference</a></p>
   */
  class CreateDashManifestConfiguration
  {
  public:
    AWS_MEDIAPACKAGEV2_API CreateDashManifestConfiguration();
    AWS_MEDIAPACKAGEV2_API CreateDashManifestConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API CreateDashManifestConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A short string that's appended to the endpoint URL. The child manifest name
     * creates a unique path to this endpoint.</p>
     */
    inline const Aws::String& GetManifestName() const{ return m_manifestName; }

    /**
     * <p>A short string that's appended to the endpoint URL. The child manifest name
     * creates a unique path to this endpoint.</p>
     */
    inline bool ManifestNameHasBeenSet() const { return m_manifestNameHasBeenSet; }

    /**
     * <p>A short string that's appended to the endpoint URL. The child manifest name
     * creates a unique path to this endpoint.</p>
     */
    inline void SetManifestName(const Aws::String& value) { m_manifestNameHasBeenSet = true; m_manifestName = value; }

    /**
     * <p>A short string that's appended to the endpoint URL. The child manifest name
     * creates a unique path to this endpoint.</p>
     */
    inline void SetManifestName(Aws::String&& value) { m_manifestNameHasBeenSet = true; m_manifestName = std::move(value); }

    /**
     * <p>A short string that's appended to the endpoint URL. The child manifest name
     * creates a unique path to this endpoint.</p>
     */
    inline void SetManifestName(const char* value) { m_manifestNameHasBeenSet = true; m_manifestName.assign(value); }

    /**
     * <p>A short string that's appended to the endpoint URL. The child manifest name
     * creates a unique path to this endpoint.</p>
     */
    inline CreateDashManifestConfiguration& WithManifestName(const Aws::String& value) { SetManifestName(value); return *this;}

    /**
     * <p>A short string that's appended to the endpoint URL. The child manifest name
     * creates a unique path to this endpoint.</p>
     */
    inline CreateDashManifestConfiguration& WithManifestName(Aws::String&& value) { SetManifestName(std::move(value)); return *this;}

    /**
     * <p>A short string that's appended to the endpoint URL. The child manifest name
     * creates a unique path to this endpoint.</p>
     */
    inline CreateDashManifestConfiguration& WithManifestName(const char* value) { SetManifestName(value); return *this;}


    /**
     * <p>The total duration (in seconds) of the manifest's content.</p>
     */
    inline int GetManifestWindowSeconds() const{ return m_manifestWindowSeconds; }

    /**
     * <p>The total duration (in seconds) of the manifest's content.</p>
     */
    inline bool ManifestWindowSecondsHasBeenSet() const { return m_manifestWindowSecondsHasBeenSet; }

    /**
     * <p>The total duration (in seconds) of the manifest's content.</p>
     */
    inline void SetManifestWindowSeconds(int value) { m_manifestWindowSecondsHasBeenSet = true; m_manifestWindowSeconds = value; }

    /**
     * <p>The total duration (in seconds) of the manifest's content.</p>
     */
    inline CreateDashManifestConfiguration& WithManifestWindowSeconds(int value) { SetManifestWindowSeconds(value); return *this;}


    
    inline const FilterConfiguration& GetFilterConfiguration() const{ return m_filterConfiguration; }

    
    inline bool FilterConfigurationHasBeenSet() const { return m_filterConfigurationHasBeenSet; }

    
    inline void SetFilterConfiguration(const FilterConfiguration& value) { m_filterConfigurationHasBeenSet = true; m_filterConfiguration = value; }

    
    inline void SetFilterConfiguration(FilterConfiguration&& value) { m_filterConfigurationHasBeenSet = true; m_filterConfiguration = std::move(value); }

    
    inline CreateDashManifestConfiguration& WithFilterConfiguration(const FilterConfiguration& value) { SetFilterConfiguration(value); return *this;}

    
    inline CreateDashManifestConfiguration& WithFilterConfiguration(FilterConfiguration&& value) { SetFilterConfiguration(std::move(value)); return *this;}


    /**
     * <p>Minimum amount of time (in seconds) that the player should wait before
     * requesting updates to the manifest.</p>
     */
    inline int GetMinUpdatePeriodSeconds() const{ return m_minUpdatePeriodSeconds; }

    /**
     * <p>Minimum amount of time (in seconds) that the player should wait before
     * requesting updates to the manifest.</p>
     */
    inline bool MinUpdatePeriodSecondsHasBeenSet() const { return m_minUpdatePeriodSecondsHasBeenSet; }

    /**
     * <p>Minimum amount of time (in seconds) that the player should wait before
     * requesting updates to the manifest.</p>
     */
    inline void SetMinUpdatePeriodSeconds(int value) { m_minUpdatePeriodSecondsHasBeenSet = true; m_minUpdatePeriodSeconds = value; }

    /**
     * <p>Minimum amount of time (in seconds) that the player should wait before
     * requesting updates to the manifest.</p>
     */
    inline CreateDashManifestConfiguration& WithMinUpdatePeriodSeconds(int value) { SetMinUpdatePeriodSeconds(value); return *this;}


    /**
     * <p>Minimum amount of content (in seconds) that a player must keep available in
     * the buffer.</p>
     */
    inline int GetMinBufferTimeSeconds() const{ return m_minBufferTimeSeconds; }

    /**
     * <p>Minimum amount of content (in seconds) that a player must keep available in
     * the buffer.</p>
     */
    inline bool MinBufferTimeSecondsHasBeenSet() const { return m_minBufferTimeSecondsHasBeenSet; }

    /**
     * <p>Minimum amount of content (in seconds) that a player must keep available in
     * the buffer.</p>
     */
    inline void SetMinBufferTimeSeconds(int value) { m_minBufferTimeSecondsHasBeenSet = true; m_minBufferTimeSeconds = value; }

    /**
     * <p>Minimum amount of content (in seconds) that a player must keep available in
     * the buffer.</p>
     */
    inline CreateDashManifestConfiguration& WithMinBufferTimeSeconds(int value) { SetMinBufferTimeSeconds(value); return *this;}


    /**
     * <p>The amount of time (in seconds) that the player should be from the end of the
     * manifest.</p>
     */
    inline int GetSuggestedPresentationDelaySeconds() const{ return m_suggestedPresentationDelaySeconds; }

    /**
     * <p>The amount of time (in seconds) that the player should be from the end of the
     * manifest.</p>
     */
    inline bool SuggestedPresentationDelaySecondsHasBeenSet() const { return m_suggestedPresentationDelaySecondsHasBeenSet; }

    /**
     * <p>The amount of time (in seconds) that the player should be from the end of the
     * manifest.</p>
     */
    inline void SetSuggestedPresentationDelaySeconds(int value) { m_suggestedPresentationDelaySecondsHasBeenSet = true; m_suggestedPresentationDelaySeconds = value; }

    /**
     * <p>The amount of time (in seconds) that the player should be from the end of the
     * manifest.</p>
     */
    inline CreateDashManifestConfiguration& WithSuggestedPresentationDelaySeconds(int value) { SetSuggestedPresentationDelaySeconds(value); return *this;}


    /**
     * <p>Determines the type of variable used in the <code>media</code> URL of the
     * <code>SegmentTemplate</code> tag in the manifest. Also specifies if segment
     * timeline information is included in <code>SegmentTimeline</code> or
     * <code>SegmentTemplate</code>.</p> <p>Value description:</p> <ul> <li> <p>
     * <code>NUMBER_WITH_TIMELINE</code> - The <code>$Number$</code> variable is used
     * in the <code>media</code> URL. The value of this variable is the sequential
     * number of the segment. A full <code>SegmentTimeline</code> object is presented
     * in each <code>SegmentTemplate</code>.</p> </li> </ul>
     */
    inline const DashSegmentTemplateFormat& GetSegmentTemplateFormat() const{ return m_segmentTemplateFormat; }

    /**
     * <p>Determines the type of variable used in the <code>media</code> URL of the
     * <code>SegmentTemplate</code> tag in the manifest. Also specifies if segment
     * timeline information is included in <code>SegmentTimeline</code> or
     * <code>SegmentTemplate</code>.</p> <p>Value description:</p> <ul> <li> <p>
     * <code>NUMBER_WITH_TIMELINE</code> - The <code>$Number$</code> variable is used
     * in the <code>media</code> URL. The value of this variable is the sequential
     * number of the segment. A full <code>SegmentTimeline</code> object is presented
     * in each <code>SegmentTemplate</code>.</p> </li> </ul>
     */
    inline bool SegmentTemplateFormatHasBeenSet() const { return m_segmentTemplateFormatHasBeenSet; }

    /**
     * <p>Determines the type of variable used in the <code>media</code> URL of the
     * <code>SegmentTemplate</code> tag in the manifest. Also specifies if segment
     * timeline information is included in <code>SegmentTimeline</code> or
     * <code>SegmentTemplate</code>.</p> <p>Value description:</p> <ul> <li> <p>
     * <code>NUMBER_WITH_TIMELINE</code> - The <code>$Number$</code> variable is used
     * in the <code>media</code> URL. The value of this variable is the sequential
     * number of the segment. A full <code>SegmentTimeline</code> object is presented
     * in each <code>SegmentTemplate</code>.</p> </li> </ul>
     */
    inline void SetSegmentTemplateFormat(const DashSegmentTemplateFormat& value) { m_segmentTemplateFormatHasBeenSet = true; m_segmentTemplateFormat = value; }

    /**
     * <p>Determines the type of variable used in the <code>media</code> URL of the
     * <code>SegmentTemplate</code> tag in the manifest. Also specifies if segment
     * timeline information is included in <code>SegmentTimeline</code> or
     * <code>SegmentTemplate</code>.</p> <p>Value description:</p> <ul> <li> <p>
     * <code>NUMBER_WITH_TIMELINE</code> - The <code>$Number$</code> variable is used
     * in the <code>media</code> URL. The value of this variable is the sequential
     * number of the segment. A full <code>SegmentTimeline</code> object is presented
     * in each <code>SegmentTemplate</code>.</p> </li> </ul>
     */
    inline void SetSegmentTemplateFormat(DashSegmentTemplateFormat&& value) { m_segmentTemplateFormatHasBeenSet = true; m_segmentTemplateFormat = std::move(value); }

    /**
     * <p>Determines the type of variable used in the <code>media</code> URL of the
     * <code>SegmentTemplate</code> tag in the manifest. Also specifies if segment
     * timeline information is included in <code>SegmentTimeline</code> or
     * <code>SegmentTemplate</code>.</p> <p>Value description:</p> <ul> <li> <p>
     * <code>NUMBER_WITH_TIMELINE</code> - The <code>$Number$</code> variable is used
     * in the <code>media</code> URL. The value of this variable is the sequential
     * number of the segment. A full <code>SegmentTimeline</code> object is presented
     * in each <code>SegmentTemplate</code>.</p> </li> </ul>
     */
    inline CreateDashManifestConfiguration& WithSegmentTemplateFormat(const DashSegmentTemplateFormat& value) { SetSegmentTemplateFormat(value); return *this;}

    /**
     * <p>Determines the type of variable used in the <code>media</code> URL of the
     * <code>SegmentTemplate</code> tag in the manifest. Also specifies if segment
     * timeline information is included in <code>SegmentTimeline</code> or
     * <code>SegmentTemplate</code>.</p> <p>Value description:</p> <ul> <li> <p>
     * <code>NUMBER_WITH_TIMELINE</code> - The <code>$Number$</code> variable is used
     * in the <code>media</code> URL. The value of this variable is the sequential
     * number of the segment. A full <code>SegmentTimeline</code> object is presented
     * in each <code>SegmentTemplate</code>.</p> </li> </ul>
     */
    inline CreateDashManifestConfiguration& WithSegmentTemplateFormat(DashSegmentTemplateFormat&& value) { SetSegmentTemplateFormat(std::move(value)); return *this;}


    /**
     * <p>A list of triggers that controls when AWS Elemental MediaPackage separates
     * the MPEG-DASH manifest into multiple periods. Type <code>ADS</code> to indicate
     * that AWS Elemental MediaPackage must create periods in the output manifest that
     * correspond to SCTE-35 ad markers in the input source. Leave this value empty to
     * indicate that the manifest is contained all in one period. For more information
     * about periods in the DASH manifest, see <a
     * href="https://docs.aws.amazon.com/mediapackage/latest/userguide/multi-period.html">Multi-period
     * DASH in AWS Elemental MediaPackage</a>.</p>
     */
    inline const Aws::Vector<DashPeriodTrigger>& GetPeriodTriggers() const{ return m_periodTriggers; }

    /**
     * <p>A list of triggers that controls when AWS Elemental MediaPackage separates
     * the MPEG-DASH manifest into multiple periods. Type <code>ADS</code> to indicate
     * that AWS Elemental MediaPackage must create periods in the output manifest that
     * correspond to SCTE-35 ad markers in the input source. Leave this value empty to
     * indicate that the manifest is contained all in one period. For more information
     * about periods in the DASH manifest, see <a
     * href="https://docs.aws.amazon.com/mediapackage/latest/userguide/multi-period.html">Multi-period
     * DASH in AWS Elemental MediaPackage</a>.</p>
     */
    inline bool PeriodTriggersHasBeenSet() const { return m_periodTriggersHasBeenSet; }

    /**
     * <p>A list of triggers that controls when AWS Elemental MediaPackage separates
     * the MPEG-DASH manifest into multiple periods. Type <code>ADS</code> to indicate
     * that AWS Elemental MediaPackage must create periods in the output manifest that
     * correspond to SCTE-35 ad markers in the input source. Leave this value empty to
     * indicate that the manifest is contained all in one period. For more information
     * about periods in the DASH manifest, see <a
     * href="https://docs.aws.amazon.com/mediapackage/latest/userguide/multi-period.html">Multi-period
     * DASH in AWS Elemental MediaPackage</a>.</p>
     */
    inline void SetPeriodTriggers(const Aws::Vector<DashPeriodTrigger>& value) { m_periodTriggersHasBeenSet = true; m_periodTriggers = value; }

    /**
     * <p>A list of triggers that controls when AWS Elemental MediaPackage separates
     * the MPEG-DASH manifest into multiple periods. Type <code>ADS</code> to indicate
     * that AWS Elemental MediaPackage must create periods in the output manifest that
     * correspond to SCTE-35 ad markers in the input source. Leave this value empty to
     * indicate that the manifest is contained all in one period. For more information
     * about periods in the DASH manifest, see <a
     * href="https://docs.aws.amazon.com/mediapackage/latest/userguide/multi-period.html">Multi-period
     * DASH in AWS Elemental MediaPackage</a>.</p>
     */
    inline void SetPeriodTriggers(Aws::Vector<DashPeriodTrigger>&& value) { m_periodTriggersHasBeenSet = true; m_periodTriggers = std::move(value); }

    /**
     * <p>A list of triggers that controls when AWS Elemental MediaPackage separates
     * the MPEG-DASH manifest into multiple periods. Type <code>ADS</code> to indicate
     * that AWS Elemental MediaPackage must create periods in the output manifest that
     * correspond to SCTE-35 ad markers in the input source. Leave this value empty to
     * indicate that the manifest is contained all in one period. For more information
     * about periods in the DASH manifest, see <a
     * href="https://docs.aws.amazon.com/mediapackage/latest/userguide/multi-period.html">Multi-period
     * DASH in AWS Elemental MediaPackage</a>.</p>
     */
    inline CreateDashManifestConfiguration& WithPeriodTriggers(const Aws::Vector<DashPeriodTrigger>& value) { SetPeriodTriggers(value); return *this;}

    /**
     * <p>A list of triggers that controls when AWS Elemental MediaPackage separates
     * the MPEG-DASH manifest into multiple periods. Type <code>ADS</code> to indicate
     * that AWS Elemental MediaPackage must create periods in the output manifest that
     * correspond to SCTE-35 ad markers in the input source. Leave this value empty to
     * indicate that the manifest is contained all in one period. For more information
     * about periods in the DASH manifest, see <a
     * href="https://docs.aws.amazon.com/mediapackage/latest/userguide/multi-period.html">Multi-period
     * DASH in AWS Elemental MediaPackage</a>.</p>
     */
    inline CreateDashManifestConfiguration& WithPeriodTriggers(Aws::Vector<DashPeriodTrigger>&& value) { SetPeriodTriggers(std::move(value)); return *this;}

    /**
     * <p>A list of triggers that controls when AWS Elemental MediaPackage separates
     * the MPEG-DASH manifest into multiple periods. Type <code>ADS</code> to indicate
     * that AWS Elemental MediaPackage must create periods in the output manifest that
     * correspond to SCTE-35 ad markers in the input source. Leave this value empty to
     * indicate that the manifest is contained all in one period. For more information
     * about periods in the DASH manifest, see <a
     * href="https://docs.aws.amazon.com/mediapackage/latest/userguide/multi-period.html">Multi-period
     * DASH in AWS Elemental MediaPackage</a>.</p>
     */
    inline CreateDashManifestConfiguration& AddPeriodTriggers(const DashPeriodTrigger& value) { m_periodTriggersHasBeenSet = true; m_periodTriggers.push_back(value); return *this; }

    /**
     * <p>A list of triggers that controls when AWS Elemental MediaPackage separates
     * the MPEG-DASH manifest into multiple periods. Type <code>ADS</code> to indicate
     * that AWS Elemental MediaPackage must create periods in the output manifest that
     * correspond to SCTE-35 ad markers in the input source. Leave this value empty to
     * indicate that the manifest is contained all in one period. For more information
     * about periods in the DASH manifest, see <a
     * href="https://docs.aws.amazon.com/mediapackage/latest/userguide/multi-period.html">Multi-period
     * DASH in AWS Elemental MediaPackage</a>.</p>
     */
    inline CreateDashManifestConfiguration& AddPeriodTriggers(DashPeriodTrigger&& value) { m_periodTriggersHasBeenSet = true; m_periodTriggers.push_back(std::move(value)); return *this; }


    /**
     * <p>The SCTE configuration.</p>
     */
    inline const ScteDash& GetScteDash() const{ return m_scteDash; }

    /**
     * <p>The SCTE configuration.</p>
     */
    inline bool ScteDashHasBeenSet() const { return m_scteDashHasBeenSet; }

    /**
     * <p>The SCTE configuration.</p>
     */
    inline void SetScteDash(const ScteDash& value) { m_scteDashHasBeenSet = true; m_scteDash = value; }

    /**
     * <p>The SCTE configuration.</p>
     */
    inline void SetScteDash(ScteDash&& value) { m_scteDashHasBeenSet = true; m_scteDash = std::move(value); }

    /**
     * <p>The SCTE configuration.</p>
     */
    inline CreateDashManifestConfiguration& WithScteDash(const ScteDash& value) { SetScteDash(value); return *this;}

    /**
     * <p>The SCTE configuration.</p>
     */
    inline CreateDashManifestConfiguration& WithScteDash(ScteDash&& value) { SetScteDash(std::move(value)); return *this;}


    /**
     * <p>Determines how the DASH manifest signals the DRM content.</p>
     */
    inline const DashDrmSignaling& GetDrmSignaling() const{ return m_drmSignaling; }

    /**
     * <p>Determines how the DASH manifest signals the DRM content.</p>
     */
    inline bool DrmSignalingHasBeenSet() const { return m_drmSignalingHasBeenSet; }

    /**
     * <p>Determines how the DASH manifest signals the DRM content.</p>
     */
    inline void SetDrmSignaling(const DashDrmSignaling& value) { m_drmSignalingHasBeenSet = true; m_drmSignaling = value; }

    /**
     * <p>Determines how the DASH manifest signals the DRM content.</p>
     */
    inline void SetDrmSignaling(DashDrmSignaling&& value) { m_drmSignalingHasBeenSet = true; m_drmSignaling = std::move(value); }

    /**
     * <p>Determines how the DASH manifest signals the DRM content.</p>
     */
    inline CreateDashManifestConfiguration& WithDrmSignaling(const DashDrmSignaling& value) { SetDrmSignaling(value); return *this;}

    /**
     * <p>Determines how the DASH manifest signals the DRM content.</p>
     */
    inline CreateDashManifestConfiguration& WithDrmSignaling(DashDrmSignaling&& value) { SetDrmSignaling(std::move(value)); return *this;}


    /**
     * <p>Determines the type of UTC timing included in the DASH Media Presentation
     * Description (MPD).</p>
     */
    inline const DashUtcTiming& GetUtcTiming() const{ return m_utcTiming; }

    /**
     * <p>Determines the type of UTC timing included in the DASH Media Presentation
     * Description (MPD).</p>
     */
    inline bool UtcTimingHasBeenSet() const { return m_utcTimingHasBeenSet; }

    /**
     * <p>Determines the type of UTC timing included in the DASH Media Presentation
     * Description (MPD).</p>
     */
    inline void SetUtcTiming(const DashUtcTiming& value) { m_utcTimingHasBeenSet = true; m_utcTiming = value; }

    /**
     * <p>Determines the type of UTC timing included in the DASH Media Presentation
     * Description (MPD).</p>
     */
    inline void SetUtcTiming(DashUtcTiming&& value) { m_utcTimingHasBeenSet = true; m_utcTiming = std::move(value); }

    /**
     * <p>Determines the type of UTC timing included in the DASH Media Presentation
     * Description (MPD).</p>
     */
    inline CreateDashManifestConfiguration& WithUtcTiming(const DashUtcTiming& value) { SetUtcTiming(value); return *this;}

    /**
     * <p>Determines the type of UTC timing included in the DASH Media Presentation
     * Description (MPD).</p>
     */
    inline CreateDashManifestConfiguration& WithUtcTiming(DashUtcTiming&& value) { SetUtcTiming(std::move(value)); return *this;}

  private:

    Aws::String m_manifestName;
    bool m_manifestNameHasBeenSet = false;

    int m_manifestWindowSeconds;
    bool m_manifestWindowSecondsHasBeenSet = false;

    FilterConfiguration m_filterConfiguration;
    bool m_filterConfigurationHasBeenSet = false;

    int m_minUpdatePeriodSeconds;
    bool m_minUpdatePeriodSecondsHasBeenSet = false;

    int m_minBufferTimeSeconds;
    bool m_minBufferTimeSecondsHasBeenSet = false;

    int m_suggestedPresentationDelaySeconds;
    bool m_suggestedPresentationDelaySecondsHasBeenSet = false;

    DashSegmentTemplateFormat m_segmentTemplateFormat;
    bool m_segmentTemplateFormatHasBeenSet = false;

    Aws::Vector<DashPeriodTrigger> m_periodTriggers;
    bool m_periodTriggersHasBeenSet = false;

    ScteDash m_scteDash;
    bool m_scteDashHasBeenSet = false;

    DashDrmSignaling m_drmSignaling;
    bool m_drmSignalingHasBeenSet = false;

    DashUtcTiming m_utcTiming;
    bool m_utcTimingHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
