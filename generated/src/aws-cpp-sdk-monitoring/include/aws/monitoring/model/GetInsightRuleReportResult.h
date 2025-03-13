/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/monitoring/model/ResponseMetadata.h>
#include <aws/monitoring/model/InsightRuleContributor.h>
#include <aws/monitoring/model/InsightRuleMetricDatapoint.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudWatch
{
namespace Model
{
  class GetInsightRuleReportResult
  {
  public:
    AWS_CLOUDWATCH_API GetInsightRuleReportResult() = default;
    AWS_CLOUDWATCH_API GetInsightRuleReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDWATCH_API GetInsightRuleReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>An array of the strings used as the keys for this rule. The keys are the
     * dimensions used to classify contributors. If the rule contains more than one
     * key, then each unique combination of values for the keys is counted as a unique
     * contributor.</p>
     */
    inline const Aws::Vector<Aws::String>& GetKeyLabels() const { return m_keyLabels; }
    template<typename KeyLabelsT = Aws::Vector<Aws::String>>
    void SetKeyLabels(KeyLabelsT&& value) { m_keyLabelsHasBeenSet = true; m_keyLabels = std::forward<KeyLabelsT>(value); }
    template<typename KeyLabelsT = Aws::Vector<Aws::String>>
    GetInsightRuleReportResult& WithKeyLabels(KeyLabelsT&& value) { SetKeyLabels(std::forward<KeyLabelsT>(value)); return *this;}
    template<typename KeyLabelsT = Aws::String>
    GetInsightRuleReportResult& AddKeyLabels(KeyLabelsT&& value) { m_keyLabelsHasBeenSet = true; m_keyLabels.emplace_back(std::forward<KeyLabelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether this rule aggregates contributor data by COUNT or SUM.</p>
     */
    inline const Aws::String& GetAggregationStatistic() const { return m_aggregationStatistic; }
    template<typename AggregationStatisticT = Aws::String>
    void SetAggregationStatistic(AggregationStatisticT&& value) { m_aggregationStatisticHasBeenSet = true; m_aggregationStatistic = std::forward<AggregationStatisticT>(value); }
    template<typename AggregationStatisticT = Aws::String>
    GetInsightRuleReportResult& WithAggregationStatistic(AggregationStatisticT&& value) { SetAggregationStatistic(std::forward<AggregationStatisticT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sum of the values from all individual contributors that match the
     * rule.</p>
     */
    inline double GetAggregateValue() const { return m_aggregateValue; }
    inline void SetAggregateValue(double value) { m_aggregateValueHasBeenSet = true; m_aggregateValue = value; }
    inline GetInsightRuleReportResult& WithAggregateValue(double value) { SetAggregateValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An approximate count of the unique contributors found by this rule in this
     * time period.</p>
     */
    inline long long GetApproximateUniqueCount() const { return m_approximateUniqueCount; }
    inline void SetApproximateUniqueCount(long long value) { m_approximateUniqueCountHasBeenSet = true; m_approximateUniqueCount = value; }
    inline GetInsightRuleReportResult& WithApproximateUniqueCount(long long value) { SetApproximateUniqueCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of the unique contributors found by this rule in this time period.
     * If the rule contains multiple keys, each combination of values for the keys
     * counts as a unique contributor.</p>
     */
    inline const Aws::Vector<InsightRuleContributor>& GetContributors() const { return m_contributors; }
    template<typename ContributorsT = Aws::Vector<InsightRuleContributor>>
    void SetContributors(ContributorsT&& value) { m_contributorsHasBeenSet = true; m_contributors = std::forward<ContributorsT>(value); }
    template<typename ContributorsT = Aws::Vector<InsightRuleContributor>>
    GetInsightRuleReportResult& WithContributors(ContributorsT&& value) { SetContributors(std::forward<ContributorsT>(value)); return *this;}
    template<typename ContributorsT = InsightRuleContributor>
    GetInsightRuleReportResult& AddContributors(ContributorsT&& value) { m_contributorsHasBeenSet = true; m_contributors.emplace_back(std::forward<ContributorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A time series of metric data points that matches the time period in the rule
     * request.</p>
     */
    inline const Aws::Vector<InsightRuleMetricDatapoint>& GetMetricDatapoints() const { return m_metricDatapoints; }
    template<typename MetricDatapointsT = Aws::Vector<InsightRuleMetricDatapoint>>
    void SetMetricDatapoints(MetricDatapointsT&& value) { m_metricDatapointsHasBeenSet = true; m_metricDatapoints = std::forward<MetricDatapointsT>(value); }
    template<typename MetricDatapointsT = Aws::Vector<InsightRuleMetricDatapoint>>
    GetInsightRuleReportResult& WithMetricDatapoints(MetricDatapointsT&& value) { SetMetricDatapoints(std::forward<MetricDatapointsT>(value)); return *this;}
    template<typename MetricDatapointsT = InsightRuleMetricDatapoint>
    GetInsightRuleReportResult& AddMetricDatapoints(MetricDatapointsT&& value) { m_metricDatapointsHasBeenSet = true; m_metricDatapoints.emplace_back(std::forward<MetricDatapointsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetInsightRuleReportResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_keyLabels;
    bool m_keyLabelsHasBeenSet = false;

    Aws::String m_aggregationStatistic;
    bool m_aggregationStatisticHasBeenSet = false;

    double m_aggregateValue{0.0};
    bool m_aggregateValueHasBeenSet = false;

    long long m_approximateUniqueCount{0};
    bool m_approximateUniqueCountHasBeenSet = false;

    Aws::Vector<InsightRuleContributor> m_contributors;
    bool m_contributorsHasBeenSet = false;

    Aws::Vector<InsightRuleMetricDatapoint> m_metricDatapoints;
    bool m_metricDatapointsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
