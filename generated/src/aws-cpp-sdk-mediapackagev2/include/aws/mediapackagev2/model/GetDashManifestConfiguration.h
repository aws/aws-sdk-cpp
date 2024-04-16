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
   * <p>Retrieve the DASH manifest configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/GetDashManifestConfiguration">AWS
   * API Reference</a></p>
   */
  class GetDashManifestConfiguration
  {
  public:
    AWS_MEDIAPACKAGEV2_API GetDashManifestConfiguration();
    AWS_MEDIAPACKAGEV2_API GetDashManifestConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API GetDashManifestConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A short string that's appended to the endpoint URL. The manifest name creates
     * a unique path to this endpoint. If you don't enter a value, MediaPackage uses
     * the default manifest name, index. </p>
     */
    inline const Aws::String& GetManifestName() const{ return m_manifestName; }

    /**
     * <p>A short string that's appended to the endpoint URL. The manifest name creates
     * a unique path to this endpoint. If you don't enter a value, MediaPackage uses
     * the default manifest name, index. </p>
     */
    inline bool ManifestNameHasBeenSet() const { return m_manifestNameHasBeenSet; }

    /**
     * <p>A short string that's appended to the endpoint URL. The manifest name creates
     * a unique path to this endpoint. If you don't enter a value, MediaPackage uses
     * the default manifest name, index. </p>
     */
    inline void SetManifestName(const Aws::String& value) { m_manifestNameHasBeenSet = true; m_manifestName = value; }

    /**
     * <p>A short string that's appended to the endpoint URL. The manifest name creates
     * a unique path to this endpoint. If you don't enter a value, MediaPackage uses
     * the default manifest name, index. </p>
     */
    inline void SetManifestName(Aws::String&& value) { m_manifestNameHasBeenSet = true; m_manifestName = std::move(value); }

    /**
     * <p>A short string that's appended to the endpoint URL. The manifest name creates
     * a unique path to this endpoint. If you don't enter a value, MediaPackage uses
     * the default manifest name, index. </p>
     */
    inline void SetManifestName(const char* value) { m_manifestNameHasBeenSet = true; m_manifestName.assign(value); }

    /**
     * <p>A short string that's appended to the endpoint URL. The manifest name creates
     * a unique path to this endpoint. If you don't enter a value, MediaPackage uses
     * the default manifest name, index. </p>
     */
    inline GetDashManifestConfiguration& WithManifestName(const Aws::String& value) { SetManifestName(value); return *this;}

    /**
     * <p>A short string that's appended to the endpoint URL. The manifest name creates
     * a unique path to this endpoint. If you don't enter a value, MediaPackage uses
     * the default manifest name, index. </p>
     */
    inline GetDashManifestConfiguration& WithManifestName(Aws::String&& value) { SetManifestName(std::move(value)); return *this;}

    /**
     * <p>A short string that's appended to the endpoint URL. The manifest name creates
     * a unique path to this endpoint. If you don't enter a value, MediaPackage uses
     * the default manifest name, index. </p>
     */
    inline GetDashManifestConfiguration& WithManifestName(const char* value) { SetManifestName(value); return *this;}


    /**
     * <p>The egress domain URL for stream delivery from MediaPackage.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The egress domain URL for stream delivery from MediaPackage.</p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p>The egress domain URL for stream delivery from MediaPackage.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The egress domain URL for stream delivery from MediaPackage.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>The egress domain URL for stream delivery from MediaPackage.</p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>The egress domain URL for stream delivery from MediaPackage.</p>
     */
    inline GetDashManifestConfiguration& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The egress domain URL for stream delivery from MediaPackage.</p>
     */
    inline GetDashManifestConfiguration& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The egress domain URL for stream delivery from MediaPackage.</p>
     */
    inline GetDashManifestConfiguration& WithUrl(const char* value) { SetUrl(value); return *this;}


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
    inline GetDashManifestConfiguration& WithManifestWindowSeconds(int value) { SetManifestWindowSeconds(value); return *this;}


    
    inline const FilterConfiguration& GetFilterConfiguration() const{ return m_filterConfiguration; }

    
    inline bool FilterConfigurationHasBeenSet() const { return m_filterConfigurationHasBeenSet; }

    
    inline void SetFilterConfiguration(const FilterConfiguration& value) { m_filterConfigurationHasBeenSet = true; m_filterConfiguration = value; }

    
    inline void SetFilterConfiguration(FilterConfiguration&& value) { m_filterConfigurationHasBeenSet = true; m_filterConfiguration = std::move(value); }

    
    inline GetDashManifestConfiguration& WithFilterConfiguration(const FilterConfiguration& value) { SetFilterConfiguration(value); return *this;}

    
    inline GetDashManifestConfiguration& WithFilterConfiguration(FilterConfiguration&& value) { SetFilterConfiguration(std::move(value)); return *this;}


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
    inline GetDashManifestConfiguration& WithMinUpdatePeriodSeconds(int value) { SetMinUpdatePeriodSeconds(value); return *this;}


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
    inline GetDashManifestConfiguration& WithMinBufferTimeSeconds(int value) { SetMinBufferTimeSeconds(value); return *this;}


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
    inline GetDashManifestConfiguration& WithSuggestedPresentationDelaySeconds(int value) { SetSuggestedPresentationDelaySeconds(value); return *this;}


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
    inline GetDashManifestConfiguration& WithSegmentTemplateFormat(const DashSegmentTemplateFormat& value) { SetSegmentTemplateFormat(value); return *this;}

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
    inline GetDashManifestConfiguration& WithSegmentTemplateFormat(DashSegmentTemplateFormat&& value) { SetSegmentTemplateFormat(std::move(value)); return *this;}


    /**
     * <p>A list of triggers that controls when AWS Elemental MediaPackage separates
     * the MPEG-DASH manifest into multiple periods. Leave this value empty to indicate
     * that the manifest is contained all in one period. For more information about
     * periods in the DASH manifest, see <a
     * href="https://docs.aws.amazon.com/mediapackage/latest/userguide/multi-period.html">Multi-period
     * DASH in AWS Elemental MediaPackage</a>.</p>
     */
    inline const Aws::Vector<DashPeriodTrigger>& GetPeriodTriggers() const{ return m_periodTriggers; }

    /**
     * <p>A list of triggers that controls when AWS Elemental MediaPackage separates
     * the MPEG-DASH manifest into multiple periods. Leave this value empty to indicate
     * that the manifest is contained all in one period. For more information about
     * periods in the DASH manifest, see <a
     * href="https://docs.aws.amazon.com/mediapackage/latest/userguide/multi-period.html">Multi-period
     * DASH in AWS Elemental MediaPackage</a>.</p>
     */
    inline bool PeriodTriggersHasBeenSet() const { return m_periodTriggersHasBeenSet; }

    /**
     * <p>A list of triggers that controls when AWS Elemental MediaPackage separates
     * the MPEG-DASH manifest into multiple periods. Leave this value empty to indicate
     * that the manifest is contained all in one period. For more information about
     * periods in the DASH manifest, see <a
     * href="https://docs.aws.amazon.com/mediapackage/latest/userguide/multi-period.html">Multi-period
     * DASH in AWS Elemental MediaPackage</a>.</p>
     */
    inline void SetPeriodTriggers(const Aws::Vector<DashPeriodTrigger>& value) { m_periodTriggersHasBeenSet = true; m_periodTriggers = value; }

    /**
     * <p>A list of triggers that controls when AWS Elemental MediaPackage separates
     * the MPEG-DASH manifest into multiple periods. Leave this value empty to indicate
     * that the manifest is contained all in one period. For more information about
     * periods in the DASH manifest, see <a
     * href="https://docs.aws.amazon.com/mediapackage/latest/userguide/multi-period.html">Multi-period
     * DASH in AWS Elemental MediaPackage</a>.</p>
     */
    inline void SetPeriodTriggers(Aws::Vector<DashPeriodTrigger>&& value) { m_periodTriggersHasBeenSet = true; m_periodTriggers = std::move(value); }

    /**
     * <p>A list of triggers that controls when AWS Elemental MediaPackage separates
     * the MPEG-DASH manifest into multiple periods. Leave this value empty to indicate
     * that the manifest is contained all in one period. For more information about
     * periods in the DASH manifest, see <a
     * href="https://docs.aws.amazon.com/mediapackage/latest/userguide/multi-period.html">Multi-period
     * DASH in AWS Elemental MediaPackage</a>.</p>
     */
    inline GetDashManifestConfiguration& WithPeriodTriggers(const Aws::Vector<DashPeriodTrigger>& value) { SetPeriodTriggers(value); return *this;}

    /**
     * <p>A list of triggers that controls when AWS Elemental MediaPackage separates
     * the MPEG-DASH manifest into multiple periods. Leave this value empty to indicate
     * that the manifest is contained all in one period. For more information about
     * periods in the DASH manifest, see <a
     * href="https://docs.aws.amazon.com/mediapackage/latest/userguide/multi-period.html">Multi-period
     * DASH in AWS Elemental MediaPackage</a>.</p>
     */
    inline GetDashManifestConfiguration& WithPeriodTriggers(Aws::Vector<DashPeriodTrigger>&& value) { SetPeriodTriggers(std::move(value)); return *this;}

    /**
     * <p>A list of triggers that controls when AWS Elemental MediaPackage separates
     * the MPEG-DASH manifest into multiple periods. Leave this value empty to indicate
     * that the manifest is contained all in one period. For more information about
     * periods in the DASH manifest, see <a
     * href="https://docs.aws.amazon.com/mediapackage/latest/userguide/multi-period.html">Multi-period
     * DASH in AWS Elemental MediaPackage</a>.</p>
     */
    inline GetDashManifestConfiguration& AddPeriodTriggers(const DashPeriodTrigger& value) { m_periodTriggersHasBeenSet = true; m_periodTriggers.push_back(value); return *this; }

    /**
     * <p>A list of triggers that controls when AWS Elemental MediaPackage separates
     * the MPEG-DASH manifest into multiple periods. Leave this value empty to indicate
     * that the manifest is contained all in one period. For more information about
     * periods in the DASH manifest, see <a
     * href="https://docs.aws.amazon.com/mediapackage/latest/userguide/multi-period.html">Multi-period
     * DASH in AWS Elemental MediaPackage</a>.</p>
     */
    inline GetDashManifestConfiguration& AddPeriodTriggers(DashPeriodTrigger&& value) { m_periodTriggersHasBeenSet = true; m_periodTriggers.push_back(std::move(value)); return *this; }


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
    inline GetDashManifestConfiguration& WithScteDash(const ScteDash& value) { SetScteDash(value); return *this;}

    /**
     * <p>The SCTE configuration.</p>
     */
    inline GetDashManifestConfiguration& WithScteDash(ScteDash&& value) { SetScteDash(std::move(value)); return *this;}


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
    inline GetDashManifestConfiguration& WithDrmSignaling(const DashDrmSignaling& value) { SetDrmSignaling(value); return *this;}

    /**
     * <p>Determines how the DASH manifest signals the DRM content.</p>
     */
    inline GetDashManifestConfiguration& WithDrmSignaling(DashDrmSignaling&& value) { SetDrmSignaling(std::move(value)); return *this;}


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
    inline GetDashManifestConfiguration& WithUtcTiming(const DashUtcTiming& value) { SetUtcTiming(value); return *this;}

    /**
     * <p>Determines the type of UTC timing included in the DASH Media Presentation
     * Description (MPD).</p>
     */
    inline GetDashManifestConfiguration& WithUtcTiming(DashUtcTiming&& value) { SetUtcTiming(std::move(value)); return *this;}

  private:

    Aws::String m_manifestName;
    bool m_manifestNameHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

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
