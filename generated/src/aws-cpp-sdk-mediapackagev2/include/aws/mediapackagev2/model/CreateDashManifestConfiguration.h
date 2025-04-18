﻿/**
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
    AWS_MEDIAPACKAGEV2_API CreateDashManifestConfiguration() = default;
    AWS_MEDIAPACKAGEV2_API CreateDashManifestConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API CreateDashManifestConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A short string that's appended to the endpoint URL. The child manifest name
     * creates a unique path to this endpoint.</p>
     */
    inline const Aws::String& GetManifestName() const { return m_manifestName; }
    inline bool ManifestNameHasBeenSet() const { return m_manifestNameHasBeenSet; }
    template<typename ManifestNameT = Aws::String>
    void SetManifestName(ManifestNameT&& value) { m_manifestNameHasBeenSet = true; m_manifestName = std::forward<ManifestNameT>(value); }
    template<typename ManifestNameT = Aws::String>
    CreateDashManifestConfiguration& WithManifestName(ManifestNameT&& value) { SetManifestName(std::forward<ManifestNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total duration (in seconds) of the manifest's content.</p>
     */
    inline int GetManifestWindowSeconds() const { return m_manifestWindowSeconds; }
    inline bool ManifestWindowSecondsHasBeenSet() const { return m_manifestWindowSecondsHasBeenSet; }
    inline void SetManifestWindowSeconds(int value) { m_manifestWindowSecondsHasBeenSet = true; m_manifestWindowSeconds = value; }
    inline CreateDashManifestConfiguration& WithManifestWindowSeconds(int value) { SetManifestWindowSeconds(value); return *this;}
    ///@}

    ///@{
    
    inline const FilterConfiguration& GetFilterConfiguration() const { return m_filterConfiguration; }
    inline bool FilterConfigurationHasBeenSet() const { return m_filterConfigurationHasBeenSet; }
    template<typename FilterConfigurationT = FilterConfiguration>
    void SetFilterConfiguration(FilterConfigurationT&& value) { m_filterConfigurationHasBeenSet = true; m_filterConfiguration = std::forward<FilterConfigurationT>(value); }
    template<typename FilterConfigurationT = FilterConfiguration>
    CreateDashManifestConfiguration& WithFilterConfiguration(FilterConfigurationT&& value) { SetFilterConfiguration(std::forward<FilterConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Minimum amount of time (in seconds) that the player should wait before
     * requesting updates to the manifest.</p>
     */
    inline int GetMinUpdatePeriodSeconds() const { return m_minUpdatePeriodSeconds; }
    inline bool MinUpdatePeriodSecondsHasBeenSet() const { return m_minUpdatePeriodSecondsHasBeenSet; }
    inline void SetMinUpdatePeriodSeconds(int value) { m_minUpdatePeriodSecondsHasBeenSet = true; m_minUpdatePeriodSeconds = value; }
    inline CreateDashManifestConfiguration& WithMinUpdatePeriodSeconds(int value) { SetMinUpdatePeriodSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Minimum amount of content (in seconds) that a player must keep available in
     * the buffer.</p>
     */
    inline int GetMinBufferTimeSeconds() const { return m_minBufferTimeSeconds; }
    inline bool MinBufferTimeSecondsHasBeenSet() const { return m_minBufferTimeSecondsHasBeenSet; }
    inline void SetMinBufferTimeSeconds(int value) { m_minBufferTimeSecondsHasBeenSet = true; m_minBufferTimeSeconds = value; }
    inline CreateDashManifestConfiguration& WithMinBufferTimeSeconds(int value) { SetMinBufferTimeSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time (in seconds) that the player should be from the end of the
     * manifest.</p>
     */
    inline int GetSuggestedPresentationDelaySeconds() const { return m_suggestedPresentationDelaySeconds; }
    inline bool SuggestedPresentationDelaySecondsHasBeenSet() const { return m_suggestedPresentationDelaySecondsHasBeenSet; }
    inline void SetSuggestedPresentationDelaySeconds(int value) { m_suggestedPresentationDelaySecondsHasBeenSet = true; m_suggestedPresentationDelaySeconds = value; }
    inline CreateDashManifestConfiguration& WithSuggestedPresentationDelaySeconds(int value) { SetSuggestedPresentationDelaySeconds(value); return *this;}
    ///@}

    ///@{
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
    inline DashSegmentTemplateFormat GetSegmentTemplateFormat() const { return m_segmentTemplateFormat; }
    inline bool SegmentTemplateFormatHasBeenSet() const { return m_segmentTemplateFormatHasBeenSet; }
    inline void SetSegmentTemplateFormat(DashSegmentTemplateFormat value) { m_segmentTemplateFormatHasBeenSet = true; m_segmentTemplateFormat = value; }
    inline CreateDashManifestConfiguration& WithSegmentTemplateFormat(DashSegmentTemplateFormat value) { SetSegmentTemplateFormat(value); return *this;}
    ///@}

    ///@{
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
    inline const Aws::Vector<DashPeriodTrigger>& GetPeriodTriggers() const { return m_periodTriggers; }
    inline bool PeriodTriggersHasBeenSet() const { return m_periodTriggersHasBeenSet; }
    template<typename PeriodTriggersT = Aws::Vector<DashPeriodTrigger>>
    void SetPeriodTriggers(PeriodTriggersT&& value) { m_periodTriggersHasBeenSet = true; m_periodTriggers = std::forward<PeriodTriggersT>(value); }
    template<typename PeriodTriggersT = Aws::Vector<DashPeriodTrigger>>
    CreateDashManifestConfiguration& WithPeriodTriggers(PeriodTriggersT&& value) { SetPeriodTriggers(std::forward<PeriodTriggersT>(value)); return *this;}
    inline CreateDashManifestConfiguration& AddPeriodTriggers(DashPeriodTrigger value) { m_periodTriggersHasBeenSet = true; m_periodTriggers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The SCTE configuration.</p>
     */
    inline const ScteDash& GetScteDash() const { return m_scteDash; }
    inline bool ScteDashHasBeenSet() const { return m_scteDashHasBeenSet; }
    template<typename ScteDashT = ScteDash>
    void SetScteDash(ScteDashT&& value) { m_scteDashHasBeenSet = true; m_scteDash = std::forward<ScteDashT>(value); }
    template<typename ScteDashT = ScteDash>
    CreateDashManifestConfiguration& WithScteDash(ScteDashT&& value) { SetScteDash(std::forward<ScteDashT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines how the DASH manifest signals the DRM content.</p>
     */
    inline DashDrmSignaling GetDrmSignaling() const { return m_drmSignaling; }
    inline bool DrmSignalingHasBeenSet() const { return m_drmSignalingHasBeenSet; }
    inline void SetDrmSignaling(DashDrmSignaling value) { m_drmSignalingHasBeenSet = true; m_drmSignaling = value; }
    inline CreateDashManifestConfiguration& WithDrmSignaling(DashDrmSignaling value) { SetDrmSignaling(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the type of UTC timing included in the DASH Media Presentation
     * Description (MPD).</p>
     */
    inline const DashUtcTiming& GetUtcTiming() const { return m_utcTiming; }
    inline bool UtcTimingHasBeenSet() const { return m_utcTimingHasBeenSet; }
    template<typename UtcTimingT = DashUtcTiming>
    void SetUtcTiming(UtcTimingT&& value) { m_utcTimingHasBeenSet = true; m_utcTiming = std::forward<UtcTimingT>(value); }
    template<typename UtcTimingT = DashUtcTiming>
    CreateDashManifestConfiguration& WithUtcTiming(UtcTimingT&& value) { SetUtcTiming(std::forward<UtcTimingT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_manifestName;
    bool m_manifestNameHasBeenSet = false;

    int m_manifestWindowSeconds{0};
    bool m_manifestWindowSecondsHasBeenSet = false;

    FilterConfiguration m_filterConfiguration;
    bool m_filterConfigurationHasBeenSet = false;

    int m_minUpdatePeriodSeconds{0};
    bool m_minUpdatePeriodSecondsHasBeenSet = false;

    int m_minBufferTimeSeconds{0};
    bool m_minBufferTimeSecondsHasBeenSet = false;

    int m_suggestedPresentationDelaySeconds{0};
    bool m_suggestedPresentationDelaySecondsHasBeenSet = false;

    DashSegmentTemplateFormat m_segmentTemplateFormat{DashSegmentTemplateFormat::NOT_SET};
    bool m_segmentTemplateFormatHasBeenSet = false;

    Aws::Vector<DashPeriodTrigger> m_periodTriggers;
    bool m_periodTriggersHasBeenSet = false;

    ScteDash m_scteDash;
    bool m_scteDashHasBeenSet = false;

    DashDrmSignaling m_drmSignaling{DashDrmSignaling::NOT_SET};
    bool m_drmSignalingHasBeenSet = false;

    DashUtcTiming m_utcTiming;
    bool m_utcTimingHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
