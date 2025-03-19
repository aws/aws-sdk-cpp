/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/MetricType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/model/Risk.h>
#include <aws/wellarchitected/model/LensMetric.h>
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
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>A metric that contributes to the consolidated report.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ConsolidatedReportMetric">AWS
   * API Reference</a></p>
   */
  class ConsolidatedReportMetric
  {
  public:
    AWS_WELLARCHITECTED_API ConsolidatedReportMetric() = default;
    AWS_WELLARCHITECTED_API ConsolidatedReportMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API ConsolidatedReportMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The metric type of a metric in the consolidated report. Currently only
     * WORKLOAD metric types are supported.</p>
     */
    inline MetricType GetMetricType() const { return m_metricType; }
    inline bool MetricTypeHasBeenSet() const { return m_metricTypeHasBeenSet; }
    inline void SetMetricType(MetricType value) { m_metricTypeHasBeenSet = true; m_metricType = value; }
    inline ConsolidatedReportMetric& WithMetricType(MetricType value) { SetMetricType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Risk, int>& GetRiskCounts() const { return m_riskCounts; }
    inline bool RiskCountsHasBeenSet() const { return m_riskCountsHasBeenSet; }
    template<typename RiskCountsT = Aws::Map<Risk, int>>
    void SetRiskCounts(RiskCountsT&& value) { m_riskCountsHasBeenSet = true; m_riskCounts = std::forward<RiskCountsT>(value); }
    template<typename RiskCountsT = Aws::Map<Risk, int>>
    ConsolidatedReportMetric& WithRiskCounts(RiskCountsT&& value) { SetRiskCounts(std::forward<RiskCountsT>(value)); return *this;}
    inline ConsolidatedReportMetric& AddRiskCounts(Risk key, int value) {
      m_riskCountsHasBeenSet = true; m_riskCounts.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetWorkloadId() const { return m_workloadId; }
    inline bool WorkloadIdHasBeenSet() const { return m_workloadIdHasBeenSet; }
    template<typename WorkloadIdT = Aws::String>
    void SetWorkloadId(WorkloadIdT&& value) { m_workloadIdHasBeenSet = true; m_workloadId = std::forward<WorkloadIdT>(value); }
    template<typename WorkloadIdT = Aws::String>
    ConsolidatedReportMetric& WithWorkloadId(WorkloadIdT&& value) { SetWorkloadId(std::forward<WorkloadIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetWorkloadName() const { return m_workloadName; }
    inline bool WorkloadNameHasBeenSet() const { return m_workloadNameHasBeenSet; }
    template<typename WorkloadNameT = Aws::String>
    void SetWorkloadName(WorkloadNameT&& value) { m_workloadNameHasBeenSet = true; m_workloadName = std::forward<WorkloadNameT>(value); }
    template<typename WorkloadNameT = Aws::String>
    ConsolidatedReportMetric& WithWorkloadName(WorkloadNameT&& value) { SetWorkloadName(std::forward<WorkloadNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetWorkloadArn() const { return m_workloadArn; }
    inline bool WorkloadArnHasBeenSet() const { return m_workloadArnHasBeenSet; }
    template<typename WorkloadArnT = Aws::String>
    void SetWorkloadArn(WorkloadArnT&& value) { m_workloadArnHasBeenSet = true; m_workloadArn = std::forward<WorkloadArnT>(value); }
    template<typename WorkloadArnT = Aws::String>
    ConsolidatedReportMetric& WithWorkloadArn(WorkloadArnT&& value) { SetWorkloadArn(std::forward<WorkloadArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    ConsolidatedReportMetric& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metrics for the lenses in the workload.</p>
     */
    inline const Aws::Vector<LensMetric>& GetLenses() const { return m_lenses; }
    inline bool LensesHasBeenSet() const { return m_lensesHasBeenSet; }
    template<typename LensesT = Aws::Vector<LensMetric>>
    void SetLenses(LensesT&& value) { m_lensesHasBeenSet = true; m_lenses = std::forward<LensesT>(value); }
    template<typename LensesT = Aws::Vector<LensMetric>>
    ConsolidatedReportMetric& WithLenses(LensesT&& value) { SetLenses(std::forward<LensesT>(value)); return *this;}
    template<typename LensesT = LensMetric>
    ConsolidatedReportMetric& AddLenses(LensesT&& value) { m_lensesHasBeenSet = true; m_lenses.emplace_back(std::forward<LensesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The total number of lenses applied to the workload.</p>
     */
    inline int GetLensesAppliedCount() const { return m_lensesAppliedCount; }
    inline bool LensesAppliedCountHasBeenSet() const { return m_lensesAppliedCountHasBeenSet; }
    inline void SetLensesAppliedCount(int value) { m_lensesAppliedCountHasBeenSet = true; m_lensesAppliedCount = value; }
    inline ConsolidatedReportMetric& WithLensesAppliedCount(int value) { SetLensesAppliedCount(value); return *this;}
    ///@}
  private:

    MetricType m_metricType{MetricType::NOT_SET};
    bool m_metricTypeHasBeenSet = false;

    Aws::Map<Risk, int> m_riskCounts;
    bool m_riskCountsHasBeenSet = false;

    Aws::String m_workloadId;
    bool m_workloadIdHasBeenSet = false;

    Aws::String m_workloadName;
    bool m_workloadNameHasBeenSet = false;

    Aws::String m_workloadArn;
    bool m_workloadArnHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::Vector<LensMetric> m_lenses;
    bool m_lensesHasBeenSet = false;

    int m_lensesAppliedCount{0};
    bool m_lensesAppliedCountHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
