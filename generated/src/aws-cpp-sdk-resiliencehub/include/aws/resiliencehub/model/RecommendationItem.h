/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/model/Alarm.h>
#include <aws/resiliencehub/model/ExcludeRecommendationReason.h>
#include <aws/resiliencehub/model/Experiment.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ResilienceHub
{
namespace Model
{

  /**
   * <p>Defines a recommendation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/RecommendationItem">AWS
   * API Reference</a></p>
   */
  class RecommendationItem
  {
  public:
    AWS_RESILIENCEHUB_API RecommendationItem() = default;
    AWS_RESILIENCEHUB_API RecommendationItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API RecommendationItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies if the recommendation has already been implemented.</p>
     */
    inline bool GetAlreadyImplemented() const { return m_alreadyImplemented; }
    inline bool AlreadyImplementedHasBeenSet() const { return m_alreadyImplementedHasBeenSet; }
    inline void SetAlreadyImplemented(bool value) { m_alreadyImplementedHasBeenSet = true; m_alreadyImplemented = value; }
    inline RecommendationItem& WithAlreadyImplemented(bool value) { SetAlreadyImplemented(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the previously implemented Amazon CloudWatch alarm discovered by
     * Resilience Hub.</p>
     */
    inline const Alarm& GetDiscoveredAlarm() const { return m_discoveredAlarm; }
    inline bool DiscoveredAlarmHasBeenSet() const { return m_discoveredAlarmHasBeenSet; }
    template<typename DiscoveredAlarmT = Alarm>
    void SetDiscoveredAlarm(DiscoveredAlarmT&& value) { m_discoveredAlarmHasBeenSet = true; m_discoveredAlarm = std::forward<DiscoveredAlarmT>(value); }
    template<typename DiscoveredAlarmT = Alarm>
    RecommendationItem& WithDiscoveredAlarm(DiscoveredAlarmT&& value) { SetDiscoveredAlarm(std::forward<DiscoveredAlarmT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the reason for excluding an operational recommendation.</p>
     */
    inline ExcludeRecommendationReason GetExcludeReason() const { return m_excludeReason; }
    inline bool ExcludeReasonHasBeenSet() const { return m_excludeReasonHasBeenSet; }
    inline void SetExcludeReason(ExcludeRecommendationReason value) { m_excludeReasonHasBeenSet = true; m_excludeReason = value; }
    inline RecommendationItem& WithExcludeReason(ExcludeRecommendationReason value) { SetExcludeReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if an operational recommendation item is excluded.</p>
     */
    inline bool GetExcluded() const { return m_excluded; }
    inline bool ExcludedHasBeenSet() const { return m_excludedHasBeenSet; }
    inline void SetExcluded(bool value) { m_excludedHasBeenSet = true; m_excluded = value; }
    inline RecommendationItem& WithExcluded(bool value) { SetExcluded(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the experiment created in FIS that was discovered by Resilience
     * Hub, which matches the recommendation.</p>
     */
    inline const Experiment& GetLatestDiscoveredExperiment() const { return m_latestDiscoveredExperiment; }
    inline bool LatestDiscoveredExperimentHasBeenSet() const { return m_latestDiscoveredExperimentHasBeenSet; }
    template<typename LatestDiscoveredExperimentT = Experiment>
    void SetLatestDiscoveredExperiment(LatestDiscoveredExperimentT&& value) { m_latestDiscoveredExperimentHasBeenSet = true; m_latestDiscoveredExperiment = std::forward<LatestDiscoveredExperimentT>(value); }
    template<typename LatestDiscoveredExperimentT = Experiment>
    RecommendationItem& WithLatestDiscoveredExperiment(LatestDiscoveredExperimentT&& value) { SetLatestDiscoveredExperiment(std::forward<LatestDiscoveredExperimentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier of the resource.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    RecommendationItem& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier of the target account.</p>
     */
    inline const Aws::String& GetTargetAccountId() const { return m_targetAccountId; }
    inline bool TargetAccountIdHasBeenSet() const { return m_targetAccountIdHasBeenSet; }
    template<typename TargetAccountIdT = Aws::String>
    void SetTargetAccountId(TargetAccountIdT&& value) { m_targetAccountIdHasBeenSet = true; m_targetAccountId = std::forward<TargetAccountIdT>(value); }
    template<typename TargetAccountIdT = Aws::String>
    RecommendationItem& WithTargetAccountId(TargetAccountIdT&& value) { SetTargetAccountId(std::forward<TargetAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target region.</p>
     */
    inline const Aws::String& GetTargetRegion() const { return m_targetRegion; }
    inline bool TargetRegionHasBeenSet() const { return m_targetRegionHasBeenSet; }
    template<typename TargetRegionT = Aws::String>
    void SetTargetRegion(TargetRegionT&& value) { m_targetRegionHasBeenSet = true; m_targetRegion = std::forward<TargetRegionT>(value); }
    template<typename TargetRegionT = Aws::String>
    RecommendationItem& WithTargetRegion(TargetRegionT&& value) { SetTargetRegion(std::forward<TargetRegionT>(value)); return *this;}
    ///@}
  private:

    bool m_alreadyImplemented{false};
    bool m_alreadyImplementedHasBeenSet = false;

    Alarm m_discoveredAlarm;
    bool m_discoveredAlarmHasBeenSet = false;

    ExcludeRecommendationReason m_excludeReason{ExcludeRecommendationReason::NOT_SET};
    bool m_excludeReasonHasBeenSet = false;

    bool m_excluded{false};
    bool m_excludedHasBeenSet = false;

    Experiment m_latestDiscoveredExperiment;
    bool m_latestDiscoveredExperimentHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_targetAccountId;
    bool m_targetAccountIdHasBeenSet = false;

    Aws::String m_targetRegion;
    bool m_targetRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
