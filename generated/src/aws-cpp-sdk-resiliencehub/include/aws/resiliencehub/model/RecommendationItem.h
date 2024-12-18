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
    AWS_RESILIENCEHUB_API RecommendationItem();
    AWS_RESILIENCEHUB_API RecommendationItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API RecommendationItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies if the recommendation has already been implemented.</p>
     */
    inline bool GetAlreadyImplemented() const{ return m_alreadyImplemented; }
    inline bool AlreadyImplementedHasBeenSet() const { return m_alreadyImplementedHasBeenSet; }
    inline void SetAlreadyImplemented(bool value) { m_alreadyImplementedHasBeenSet = true; m_alreadyImplemented = value; }
    inline RecommendationItem& WithAlreadyImplemented(bool value) { SetAlreadyImplemented(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the previously implemented Amazon CloudWatch alarm discovered by
     * Resilience Hub.</p>
     */
    inline const Alarm& GetDiscoveredAlarm() const{ return m_discoveredAlarm; }
    inline bool DiscoveredAlarmHasBeenSet() const { return m_discoveredAlarmHasBeenSet; }
    inline void SetDiscoveredAlarm(const Alarm& value) { m_discoveredAlarmHasBeenSet = true; m_discoveredAlarm = value; }
    inline void SetDiscoveredAlarm(Alarm&& value) { m_discoveredAlarmHasBeenSet = true; m_discoveredAlarm = std::move(value); }
    inline RecommendationItem& WithDiscoveredAlarm(const Alarm& value) { SetDiscoveredAlarm(value); return *this;}
    inline RecommendationItem& WithDiscoveredAlarm(Alarm&& value) { SetDiscoveredAlarm(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the reason for excluding an operational recommendation.</p>
     */
    inline const ExcludeRecommendationReason& GetExcludeReason() const{ return m_excludeReason; }
    inline bool ExcludeReasonHasBeenSet() const { return m_excludeReasonHasBeenSet; }
    inline void SetExcludeReason(const ExcludeRecommendationReason& value) { m_excludeReasonHasBeenSet = true; m_excludeReason = value; }
    inline void SetExcludeReason(ExcludeRecommendationReason&& value) { m_excludeReasonHasBeenSet = true; m_excludeReason = std::move(value); }
    inline RecommendationItem& WithExcludeReason(const ExcludeRecommendationReason& value) { SetExcludeReason(value); return *this;}
    inline RecommendationItem& WithExcludeReason(ExcludeRecommendationReason&& value) { SetExcludeReason(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if an operational recommendation item is excluded.</p>
     */
    inline bool GetExcluded() const{ return m_excluded; }
    inline bool ExcludedHasBeenSet() const { return m_excludedHasBeenSet; }
    inline void SetExcluded(bool value) { m_excludedHasBeenSet = true; m_excluded = value; }
    inline RecommendationItem& WithExcluded(bool value) { SetExcluded(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the experiment created in FIS that was discovered by Resilience
     * Hub, which matches the recommendation.</p>
     */
    inline const Experiment& GetLatestDiscoveredExperiment() const{ return m_latestDiscoveredExperiment; }
    inline bool LatestDiscoveredExperimentHasBeenSet() const { return m_latestDiscoveredExperimentHasBeenSet; }
    inline void SetLatestDiscoveredExperiment(const Experiment& value) { m_latestDiscoveredExperimentHasBeenSet = true; m_latestDiscoveredExperiment = value; }
    inline void SetLatestDiscoveredExperiment(Experiment&& value) { m_latestDiscoveredExperimentHasBeenSet = true; m_latestDiscoveredExperiment = std::move(value); }
    inline RecommendationItem& WithLatestDiscoveredExperiment(const Experiment& value) { SetLatestDiscoveredExperiment(value); return *this;}
    inline RecommendationItem& WithLatestDiscoveredExperiment(Experiment&& value) { SetLatestDiscoveredExperiment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier of the resource.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline RecommendationItem& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline RecommendationItem& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline RecommendationItem& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier of the target account.</p>
     */
    inline const Aws::String& GetTargetAccountId() const{ return m_targetAccountId; }
    inline bool TargetAccountIdHasBeenSet() const { return m_targetAccountIdHasBeenSet; }
    inline void SetTargetAccountId(const Aws::String& value) { m_targetAccountIdHasBeenSet = true; m_targetAccountId = value; }
    inline void SetTargetAccountId(Aws::String&& value) { m_targetAccountIdHasBeenSet = true; m_targetAccountId = std::move(value); }
    inline void SetTargetAccountId(const char* value) { m_targetAccountIdHasBeenSet = true; m_targetAccountId.assign(value); }
    inline RecommendationItem& WithTargetAccountId(const Aws::String& value) { SetTargetAccountId(value); return *this;}
    inline RecommendationItem& WithTargetAccountId(Aws::String&& value) { SetTargetAccountId(std::move(value)); return *this;}
    inline RecommendationItem& WithTargetAccountId(const char* value) { SetTargetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target region.</p>
     */
    inline const Aws::String& GetTargetRegion() const{ return m_targetRegion; }
    inline bool TargetRegionHasBeenSet() const { return m_targetRegionHasBeenSet; }
    inline void SetTargetRegion(const Aws::String& value) { m_targetRegionHasBeenSet = true; m_targetRegion = value; }
    inline void SetTargetRegion(Aws::String&& value) { m_targetRegionHasBeenSet = true; m_targetRegion = std::move(value); }
    inline void SetTargetRegion(const char* value) { m_targetRegionHasBeenSet = true; m_targetRegion.assign(value); }
    inline RecommendationItem& WithTargetRegion(const Aws::String& value) { SetTargetRegion(value); return *this;}
    inline RecommendationItem& WithTargetRegion(Aws::String&& value) { SetTargetRegion(std::move(value)); return *this;}
    inline RecommendationItem& WithTargetRegion(const char* value) { SetTargetRegion(value); return *this;}
    ///@}
  private:

    bool m_alreadyImplemented;
    bool m_alreadyImplementedHasBeenSet = false;

    Alarm m_discoveredAlarm;
    bool m_discoveredAlarmHasBeenSet = false;

    ExcludeRecommendationReason m_excludeReason;
    bool m_excludeReasonHasBeenSet = false;

    bool m_excluded;
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
