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
    AWS_CLOUDWATCH_API GetInsightRuleReportResult();
    AWS_CLOUDWATCH_API GetInsightRuleReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDWATCH_API GetInsightRuleReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>An array of the strings used as the keys for this rule. The keys are the
     * dimensions used to classify contributors. If the rule contains more than one
     * key, then each unique combination of values for the keys is counted as a unique
     * contributor.</p>
     */
    inline const Aws::Vector<Aws::String>& GetKeyLabels() const{ return m_keyLabels; }

    /**
     * <p>An array of the strings used as the keys for this rule. The keys are the
     * dimensions used to classify contributors. If the rule contains more than one
     * key, then each unique combination of values for the keys is counted as a unique
     * contributor.</p>
     */
    inline void SetKeyLabels(const Aws::Vector<Aws::String>& value) { m_keyLabels = value; }

    /**
     * <p>An array of the strings used as the keys for this rule. The keys are the
     * dimensions used to classify contributors. If the rule contains more than one
     * key, then each unique combination of values for the keys is counted as a unique
     * contributor.</p>
     */
    inline void SetKeyLabels(Aws::Vector<Aws::String>&& value) { m_keyLabels = std::move(value); }

    /**
     * <p>An array of the strings used as the keys for this rule. The keys are the
     * dimensions used to classify contributors. If the rule contains more than one
     * key, then each unique combination of values for the keys is counted as a unique
     * contributor.</p>
     */
    inline GetInsightRuleReportResult& WithKeyLabels(const Aws::Vector<Aws::String>& value) { SetKeyLabels(value); return *this;}

    /**
     * <p>An array of the strings used as the keys for this rule. The keys are the
     * dimensions used to classify contributors. If the rule contains more than one
     * key, then each unique combination of values for the keys is counted as a unique
     * contributor.</p>
     */
    inline GetInsightRuleReportResult& WithKeyLabels(Aws::Vector<Aws::String>&& value) { SetKeyLabels(std::move(value)); return *this;}

    /**
     * <p>An array of the strings used as the keys for this rule. The keys are the
     * dimensions used to classify contributors. If the rule contains more than one
     * key, then each unique combination of values for the keys is counted as a unique
     * contributor.</p>
     */
    inline GetInsightRuleReportResult& AddKeyLabels(const Aws::String& value) { m_keyLabels.push_back(value); return *this; }

    /**
     * <p>An array of the strings used as the keys for this rule. The keys are the
     * dimensions used to classify contributors. If the rule contains more than one
     * key, then each unique combination of values for the keys is counted as a unique
     * contributor.</p>
     */
    inline GetInsightRuleReportResult& AddKeyLabels(Aws::String&& value) { m_keyLabels.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of the strings used as the keys for this rule. The keys are the
     * dimensions used to classify contributors. If the rule contains more than one
     * key, then each unique combination of values for the keys is counted as a unique
     * contributor.</p>
     */
    inline GetInsightRuleReportResult& AddKeyLabels(const char* value) { m_keyLabels.push_back(value); return *this; }


    /**
     * <p>Specifies whether this rule aggregates contributor data by COUNT or SUM.</p>
     */
    inline const Aws::String& GetAggregationStatistic() const{ return m_aggregationStatistic; }

    /**
     * <p>Specifies whether this rule aggregates contributor data by COUNT or SUM.</p>
     */
    inline void SetAggregationStatistic(const Aws::String& value) { m_aggregationStatistic = value; }

    /**
     * <p>Specifies whether this rule aggregates contributor data by COUNT or SUM.</p>
     */
    inline void SetAggregationStatistic(Aws::String&& value) { m_aggregationStatistic = std::move(value); }

    /**
     * <p>Specifies whether this rule aggregates contributor data by COUNT or SUM.</p>
     */
    inline void SetAggregationStatistic(const char* value) { m_aggregationStatistic.assign(value); }

    /**
     * <p>Specifies whether this rule aggregates contributor data by COUNT or SUM.</p>
     */
    inline GetInsightRuleReportResult& WithAggregationStatistic(const Aws::String& value) { SetAggregationStatistic(value); return *this;}

    /**
     * <p>Specifies whether this rule aggregates contributor data by COUNT or SUM.</p>
     */
    inline GetInsightRuleReportResult& WithAggregationStatistic(Aws::String&& value) { SetAggregationStatistic(std::move(value)); return *this;}

    /**
     * <p>Specifies whether this rule aggregates contributor data by COUNT or SUM.</p>
     */
    inline GetInsightRuleReportResult& WithAggregationStatistic(const char* value) { SetAggregationStatistic(value); return *this;}


    /**
     * <p>The sum of the values from all individual contributors that match the
     * rule.</p>
     */
    inline double GetAggregateValue() const{ return m_aggregateValue; }

    /**
     * <p>The sum of the values from all individual contributors that match the
     * rule.</p>
     */
    inline void SetAggregateValue(double value) { m_aggregateValue = value; }

    /**
     * <p>The sum of the values from all individual contributors that match the
     * rule.</p>
     */
    inline GetInsightRuleReportResult& WithAggregateValue(double value) { SetAggregateValue(value); return *this;}


    /**
     * <p>An approximate count of the unique contributors found by this rule in this
     * time period.</p>
     */
    inline long long GetApproximateUniqueCount() const{ return m_approximateUniqueCount; }

    /**
     * <p>An approximate count of the unique contributors found by this rule in this
     * time period.</p>
     */
    inline void SetApproximateUniqueCount(long long value) { m_approximateUniqueCount = value; }

    /**
     * <p>An approximate count of the unique contributors found by this rule in this
     * time period.</p>
     */
    inline GetInsightRuleReportResult& WithApproximateUniqueCount(long long value) { SetApproximateUniqueCount(value); return *this;}


    /**
     * <p>An array of the unique contributors found by this rule in this time period.
     * If the rule contains multiple keys, each combination of values for the keys
     * counts as a unique contributor.</p>
     */
    inline const Aws::Vector<InsightRuleContributor>& GetContributors() const{ return m_contributors; }

    /**
     * <p>An array of the unique contributors found by this rule in this time period.
     * If the rule contains multiple keys, each combination of values for the keys
     * counts as a unique contributor.</p>
     */
    inline void SetContributors(const Aws::Vector<InsightRuleContributor>& value) { m_contributors = value; }

    /**
     * <p>An array of the unique contributors found by this rule in this time period.
     * If the rule contains multiple keys, each combination of values for the keys
     * counts as a unique contributor.</p>
     */
    inline void SetContributors(Aws::Vector<InsightRuleContributor>&& value) { m_contributors = std::move(value); }

    /**
     * <p>An array of the unique contributors found by this rule in this time period.
     * If the rule contains multiple keys, each combination of values for the keys
     * counts as a unique contributor.</p>
     */
    inline GetInsightRuleReportResult& WithContributors(const Aws::Vector<InsightRuleContributor>& value) { SetContributors(value); return *this;}

    /**
     * <p>An array of the unique contributors found by this rule in this time period.
     * If the rule contains multiple keys, each combination of values for the keys
     * counts as a unique contributor.</p>
     */
    inline GetInsightRuleReportResult& WithContributors(Aws::Vector<InsightRuleContributor>&& value) { SetContributors(std::move(value)); return *this;}

    /**
     * <p>An array of the unique contributors found by this rule in this time period.
     * If the rule contains multiple keys, each combination of values for the keys
     * counts as a unique contributor.</p>
     */
    inline GetInsightRuleReportResult& AddContributors(const InsightRuleContributor& value) { m_contributors.push_back(value); return *this; }

    /**
     * <p>An array of the unique contributors found by this rule in this time period.
     * If the rule contains multiple keys, each combination of values for the keys
     * counts as a unique contributor.</p>
     */
    inline GetInsightRuleReportResult& AddContributors(InsightRuleContributor&& value) { m_contributors.push_back(std::move(value)); return *this; }


    /**
     * <p>A time series of metric data points that matches the time period in the rule
     * request.</p>
     */
    inline const Aws::Vector<InsightRuleMetricDatapoint>& GetMetricDatapoints() const{ return m_metricDatapoints; }

    /**
     * <p>A time series of metric data points that matches the time period in the rule
     * request.</p>
     */
    inline void SetMetricDatapoints(const Aws::Vector<InsightRuleMetricDatapoint>& value) { m_metricDatapoints = value; }

    /**
     * <p>A time series of metric data points that matches the time period in the rule
     * request.</p>
     */
    inline void SetMetricDatapoints(Aws::Vector<InsightRuleMetricDatapoint>&& value) { m_metricDatapoints = std::move(value); }

    /**
     * <p>A time series of metric data points that matches the time period in the rule
     * request.</p>
     */
    inline GetInsightRuleReportResult& WithMetricDatapoints(const Aws::Vector<InsightRuleMetricDatapoint>& value) { SetMetricDatapoints(value); return *this;}

    /**
     * <p>A time series of metric data points that matches the time period in the rule
     * request.</p>
     */
    inline GetInsightRuleReportResult& WithMetricDatapoints(Aws::Vector<InsightRuleMetricDatapoint>&& value) { SetMetricDatapoints(std::move(value)); return *this;}

    /**
     * <p>A time series of metric data points that matches the time period in the rule
     * request.</p>
     */
    inline GetInsightRuleReportResult& AddMetricDatapoints(const InsightRuleMetricDatapoint& value) { m_metricDatapoints.push_back(value); return *this; }

    /**
     * <p>A time series of metric data points that matches the time period in the rule
     * request.</p>
     */
    inline GetInsightRuleReportResult& AddMetricDatapoints(InsightRuleMetricDatapoint&& value) { m_metricDatapoints.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetInsightRuleReportResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetInsightRuleReportResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_keyLabels;

    Aws::String m_aggregationStatistic;

    double m_aggregateValue;

    long long m_approximateUniqueCount;

    Aws::Vector<InsightRuleContributor> m_contributors;

    Aws::Vector<InsightRuleMetricDatapoint> m_metricDatapoints;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
