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
    AWS_WELLARCHITECTED_API ConsolidatedReportMetric();
    AWS_WELLARCHITECTED_API ConsolidatedReportMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API ConsolidatedReportMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The metric type of a metric in the consolidated report. Currently only
     * WORKLOAD metric types are supported.</p>
     */
    inline const MetricType& GetMetricType() const{ return m_metricType; }

    /**
     * <p>The metric type of a metric in the consolidated report. Currently only
     * WORKLOAD metric types are supported.</p>
     */
    inline bool MetricTypeHasBeenSet() const { return m_metricTypeHasBeenSet; }

    /**
     * <p>The metric type of a metric in the consolidated report. Currently only
     * WORKLOAD metric types are supported.</p>
     */
    inline void SetMetricType(const MetricType& value) { m_metricTypeHasBeenSet = true; m_metricType = value; }

    /**
     * <p>The metric type of a metric in the consolidated report. Currently only
     * WORKLOAD metric types are supported.</p>
     */
    inline void SetMetricType(MetricType&& value) { m_metricTypeHasBeenSet = true; m_metricType = std::move(value); }

    /**
     * <p>The metric type of a metric in the consolidated report. Currently only
     * WORKLOAD metric types are supported.</p>
     */
    inline ConsolidatedReportMetric& WithMetricType(const MetricType& value) { SetMetricType(value); return *this;}

    /**
     * <p>The metric type of a metric in the consolidated report. Currently only
     * WORKLOAD metric types are supported.</p>
     */
    inline ConsolidatedReportMetric& WithMetricType(MetricType&& value) { SetMetricType(std::move(value)); return *this;}


    
    inline const Aws::Map<Risk, int>& GetRiskCounts() const{ return m_riskCounts; }

    
    inline bool RiskCountsHasBeenSet() const { return m_riskCountsHasBeenSet; }

    
    inline void SetRiskCounts(const Aws::Map<Risk, int>& value) { m_riskCountsHasBeenSet = true; m_riskCounts = value; }

    
    inline void SetRiskCounts(Aws::Map<Risk, int>&& value) { m_riskCountsHasBeenSet = true; m_riskCounts = std::move(value); }

    
    inline ConsolidatedReportMetric& WithRiskCounts(const Aws::Map<Risk, int>& value) { SetRiskCounts(value); return *this;}

    
    inline ConsolidatedReportMetric& WithRiskCounts(Aws::Map<Risk, int>&& value) { SetRiskCounts(std::move(value)); return *this;}

    
    inline ConsolidatedReportMetric& AddRiskCounts(const Risk& key, int value) { m_riskCountsHasBeenSet = true; m_riskCounts.emplace(key, value); return *this; }

    
    inline ConsolidatedReportMetric& AddRiskCounts(Risk&& key, int value) { m_riskCountsHasBeenSet = true; m_riskCounts.emplace(std::move(key), value); return *this; }


    
    inline const Aws::String& GetWorkloadId() const{ return m_workloadId; }

    
    inline bool WorkloadIdHasBeenSet() const { return m_workloadIdHasBeenSet; }

    
    inline void SetWorkloadId(const Aws::String& value) { m_workloadIdHasBeenSet = true; m_workloadId = value; }

    
    inline void SetWorkloadId(Aws::String&& value) { m_workloadIdHasBeenSet = true; m_workloadId = std::move(value); }

    
    inline void SetWorkloadId(const char* value) { m_workloadIdHasBeenSet = true; m_workloadId.assign(value); }

    
    inline ConsolidatedReportMetric& WithWorkloadId(const Aws::String& value) { SetWorkloadId(value); return *this;}

    
    inline ConsolidatedReportMetric& WithWorkloadId(Aws::String&& value) { SetWorkloadId(std::move(value)); return *this;}

    
    inline ConsolidatedReportMetric& WithWorkloadId(const char* value) { SetWorkloadId(value); return *this;}


    
    inline const Aws::String& GetWorkloadName() const{ return m_workloadName; }

    
    inline bool WorkloadNameHasBeenSet() const { return m_workloadNameHasBeenSet; }

    
    inline void SetWorkloadName(const Aws::String& value) { m_workloadNameHasBeenSet = true; m_workloadName = value; }

    
    inline void SetWorkloadName(Aws::String&& value) { m_workloadNameHasBeenSet = true; m_workloadName = std::move(value); }

    
    inline void SetWorkloadName(const char* value) { m_workloadNameHasBeenSet = true; m_workloadName.assign(value); }

    
    inline ConsolidatedReportMetric& WithWorkloadName(const Aws::String& value) { SetWorkloadName(value); return *this;}

    
    inline ConsolidatedReportMetric& WithWorkloadName(Aws::String&& value) { SetWorkloadName(std::move(value)); return *this;}

    
    inline ConsolidatedReportMetric& WithWorkloadName(const char* value) { SetWorkloadName(value); return *this;}


    
    inline const Aws::String& GetWorkloadArn() const{ return m_workloadArn; }

    
    inline bool WorkloadArnHasBeenSet() const { return m_workloadArnHasBeenSet; }

    
    inline void SetWorkloadArn(const Aws::String& value) { m_workloadArnHasBeenSet = true; m_workloadArn = value; }

    
    inline void SetWorkloadArn(Aws::String&& value) { m_workloadArnHasBeenSet = true; m_workloadArn = std::move(value); }

    
    inline void SetWorkloadArn(const char* value) { m_workloadArnHasBeenSet = true; m_workloadArn.assign(value); }

    
    inline ConsolidatedReportMetric& WithWorkloadArn(const Aws::String& value) { SetWorkloadArn(value); return *this;}

    
    inline ConsolidatedReportMetric& WithWorkloadArn(Aws::String&& value) { SetWorkloadArn(std::move(value)); return *this;}

    
    inline ConsolidatedReportMetric& WithWorkloadArn(const char* value) { SetWorkloadArn(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    
    inline ConsolidatedReportMetric& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    
    inline ConsolidatedReportMetric& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The metrics for the lenses in the workload.</p>
     */
    inline const Aws::Vector<LensMetric>& GetLenses() const{ return m_lenses; }

    /**
     * <p>The metrics for the lenses in the workload.</p>
     */
    inline bool LensesHasBeenSet() const { return m_lensesHasBeenSet; }

    /**
     * <p>The metrics for the lenses in the workload.</p>
     */
    inline void SetLenses(const Aws::Vector<LensMetric>& value) { m_lensesHasBeenSet = true; m_lenses = value; }

    /**
     * <p>The metrics for the lenses in the workload.</p>
     */
    inline void SetLenses(Aws::Vector<LensMetric>&& value) { m_lensesHasBeenSet = true; m_lenses = std::move(value); }

    /**
     * <p>The metrics for the lenses in the workload.</p>
     */
    inline ConsolidatedReportMetric& WithLenses(const Aws::Vector<LensMetric>& value) { SetLenses(value); return *this;}

    /**
     * <p>The metrics for the lenses in the workload.</p>
     */
    inline ConsolidatedReportMetric& WithLenses(Aws::Vector<LensMetric>&& value) { SetLenses(std::move(value)); return *this;}

    /**
     * <p>The metrics for the lenses in the workload.</p>
     */
    inline ConsolidatedReportMetric& AddLenses(const LensMetric& value) { m_lensesHasBeenSet = true; m_lenses.push_back(value); return *this; }

    /**
     * <p>The metrics for the lenses in the workload.</p>
     */
    inline ConsolidatedReportMetric& AddLenses(LensMetric&& value) { m_lensesHasBeenSet = true; m_lenses.push_back(std::move(value)); return *this; }


    /**
     * <p>The total number of lenses applied to the workload.</p>
     */
    inline int GetLensesAppliedCount() const{ return m_lensesAppliedCount; }

    /**
     * <p>The total number of lenses applied to the workload.</p>
     */
    inline bool LensesAppliedCountHasBeenSet() const { return m_lensesAppliedCountHasBeenSet; }

    /**
     * <p>The total number of lenses applied to the workload.</p>
     */
    inline void SetLensesAppliedCount(int value) { m_lensesAppliedCountHasBeenSet = true; m_lensesAppliedCount = value; }

    /**
     * <p>The total number of lenses applied to the workload.</p>
     */
    inline ConsolidatedReportMetric& WithLensesAppliedCount(int value) { SetLensesAppliedCount(value); return *this;}

  private:

    MetricType m_metricType;
    bool m_metricTypeHasBeenSet = false;

    Aws::Map<Risk, int> m_riskCounts;
    bool m_riskCountsHasBeenSet = false;

    Aws::String m_workloadId;
    bool m_workloadIdHasBeenSet = false;

    Aws::String m_workloadName;
    bool m_workloadNameHasBeenSet = false;

    Aws::String m_workloadArn;
    bool m_workloadArnHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::Vector<LensMetric> m_lenses;
    bool m_lensesHasBeenSet = false;

    int m_lensesAppliedCount;
    bool m_lensesAppliedCountHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
