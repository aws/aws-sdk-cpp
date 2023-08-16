/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /**
   */
  class GetInsightRuleReportRequest : public CloudWatchRequest
  {
  public:
    AWS_CLOUDWATCH_API GetInsightRuleReportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetInsightRuleReport"; }

    AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDWATCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the rule that you want to see data from.</p>
     */
    inline const Aws::String& GetRuleName() const{ return m_ruleName; }

    /**
     * <p>The name of the rule that you want to see data from.</p>
     */
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }

    /**
     * <p>The name of the rule that you want to see data from.</p>
     */
    inline void SetRuleName(const Aws::String& value) { m_ruleNameHasBeenSet = true; m_ruleName = value; }

    /**
     * <p>The name of the rule that you want to see data from.</p>
     */
    inline void SetRuleName(Aws::String&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::move(value); }

    /**
     * <p>The name of the rule that you want to see data from.</p>
     */
    inline void SetRuleName(const char* value) { m_ruleNameHasBeenSet = true; m_ruleName.assign(value); }

    /**
     * <p>The name of the rule that you want to see data from.</p>
     */
    inline GetInsightRuleReportRequest& WithRuleName(const Aws::String& value) { SetRuleName(value); return *this;}

    /**
     * <p>The name of the rule that you want to see data from.</p>
     */
    inline GetInsightRuleReportRequest& WithRuleName(Aws::String&& value) { SetRuleName(std::move(value)); return *this;}

    /**
     * <p>The name of the rule that you want to see data from.</p>
     */
    inline GetInsightRuleReportRequest& WithRuleName(const char* value) { SetRuleName(value); return *this;}


    /**
     * <p>The start time of the data to use in the report. When used in a raw HTTP
     * Query API, it is formatted as <code>yyyy-MM-dd'T'HH:mm:ss</code>. For example,
     * <code>2019-07-01T23:59:59</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start time of the data to use in the report. When used in a raw HTTP
     * Query API, it is formatted as <code>yyyy-MM-dd'T'HH:mm:ss</code>. For example,
     * <code>2019-07-01T23:59:59</code>.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start time of the data to use in the report. When used in a raw HTTP
     * Query API, it is formatted as <code>yyyy-MM-dd'T'HH:mm:ss</code>. For example,
     * <code>2019-07-01T23:59:59</code>.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start time of the data to use in the report. When used in a raw HTTP
     * Query API, it is formatted as <code>yyyy-MM-dd'T'HH:mm:ss</code>. For example,
     * <code>2019-07-01T23:59:59</code>.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start time of the data to use in the report. When used in a raw HTTP
     * Query API, it is formatted as <code>yyyy-MM-dd'T'HH:mm:ss</code>. For example,
     * <code>2019-07-01T23:59:59</code>.</p>
     */
    inline GetInsightRuleReportRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start time of the data to use in the report. When used in a raw HTTP
     * Query API, it is formatted as <code>yyyy-MM-dd'T'HH:mm:ss</code>. For example,
     * <code>2019-07-01T23:59:59</code>.</p>
     */
    inline GetInsightRuleReportRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The end time of the data to use in the report. When used in a raw HTTP Query
     * API, it is formatted as <code>yyyy-MM-dd'T'HH:mm:ss</code>. For example,
     * <code>2019-07-01T23:59:59</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end time of the data to use in the report. When used in a raw HTTP Query
     * API, it is formatted as <code>yyyy-MM-dd'T'HH:mm:ss</code>. For example,
     * <code>2019-07-01T23:59:59</code>.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end time of the data to use in the report. When used in a raw HTTP Query
     * API, it is formatted as <code>yyyy-MM-dd'T'HH:mm:ss</code>. For example,
     * <code>2019-07-01T23:59:59</code>.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end time of the data to use in the report. When used in a raw HTTP Query
     * API, it is formatted as <code>yyyy-MM-dd'T'HH:mm:ss</code>. For example,
     * <code>2019-07-01T23:59:59</code>.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end time of the data to use in the report. When used in a raw HTTP Query
     * API, it is formatted as <code>yyyy-MM-dd'T'HH:mm:ss</code>. For example,
     * <code>2019-07-01T23:59:59</code>.</p>
     */
    inline GetInsightRuleReportRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end time of the data to use in the report. When used in a raw HTTP Query
     * API, it is formatted as <code>yyyy-MM-dd'T'HH:mm:ss</code>. For example,
     * <code>2019-07-01T23:59:59</code>.</p>
     */
    inline GetInsightRuleReportRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The period, in seconds, to use for the statistics in the
     * <code>InsightRuleMetricDatapoint</code> results.</p>
     */
    inline int GetPeriod() const{ return m_period; }

    /**
     * <p>The period, in seconds, to use for the statistics in the
     * <code>InsightRuleMetricDatapoint</code> results.</p>
     */
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }

    /**
     * <p>The period, in seconds, to use for the statistics in the
     * <code>InsightRuleMetricDatapoint</code> results.</p>
     */
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }

    /**
     * <p>The period, in seconds, to use for the statistics in the
     * <code>InsightRuleMetricDatapoint</code> results.</p>
     */
    inline GetInsightRuleReportRequest& WithPeriod(int value) { SetPeriod(value); return *this;}


    /**
     * <p>The maximum number of contributors to include in the report. The range is 1
     * to 100. If you omit this, the default of 10 is used.</p>
     */
    inline int GetMaxContributorCount() const{ return m_maxContributorCount; }

    /**
     * <p>The maximum number of contributors to include in the report. The range is 1
     * to 100. If you omit this, the default of 10 is used.</p>
     */
    inline bool MaxContributorCountHasBeenSet() const { return m_maxContributorCountHasBeenSet; }

    /**
     * <p>The maximum number of contributors to include in the report. The range is 1
     * to 100. If you omit this, the default of 10 is used.</p>
     */
    inline void SetMaxContributorCount(int value) { m_maxContributorCountHasBeenSet = true; m_maxContributorCount = value; }

    /**
     * <p>The maximum number of contributors to include in the report. The range is 1
     * to 100. If you omit this, the default of 10 is used.</p>
     */
    inline GetInsightRuleReportRequest& WithMaxContributorCount(int value) { SetMaxContributorCount(value); return *this;}


    /**
     * <p>Specifies which metrics to use for aggregation of contributor values for the
     * report. You can specify one or more of the following metrics:</p> <ul> <li> <p>
     * <code>UniqueContributors</code> -- the number of unique contributors for each
     * data point.</p> </li> <li> <p> <code>MaxContributorValue</code> -- the value of
     * the top contributor for each data point. The identity of the contributor might
     * change for each data point in the graph.</p> <p>If this rule aggregates by
     * COUNT, the top contributor for each data point is the contributor with the most
     * occurrences in that period. If the rule aggregates by SUM, the top contributor
     * is the contributor with the highest sum in the log field specified by the rule's
     * <code>Value</code>, during that period.</p> </li> <li> <p>
     * <code>SampleCount</code> -- the number of data points matched by the rule.</p>
     * </li> <li> <p> <code>Sum</code> -- the sum of the values from all contributors
     * during the time period represented by that data point.</p> </li> <li> <p>
     * <code>Minimum</code> -- the minimum value from a single observation during the
     * time period represented by that data point.</p> </li> <li> <p>
     * <code>Maximum</code> -- the maximum value from a single observation during the
     * time period represented by that data point.</p> </li> <li> <p>
     * <code>Average</code> -- the average value from all contributors during the time
     * period represented by that data point.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetMetrics() const{ return m_metrics; }

    /**
     * <p>Specifies which metrics to use for aggregation of contributor values for the
     * report. You can specify one or more of the following metrics:</p> <ul> <li> <p>
     * <code>UniqueContributors</code> -- the number of unique contributors for each
     * data point.</p> </li> <li> <p> <code>MaxContributorValue</code> -- the value of
     * the top contributor for each data point. The identity of the contributor might
     * change for each data point in the graph.</p> <p>If this rule aggregates by
     * COUNT, the top contributor for each data point is the contributor with the most
     * occurrences in that period. If the rule aggregates by SUM, the top contributor
     * is the contributor with the highest sum in the log field specified by the rule's
     * <code>Value</code>, during that period.</p> </li> <li> <p>
     * <code>SampleCount</code> -- the number of data points matched by the rule.</p>
     * </li> <li> <p> <code>Sum</code> -- the sum of the values from all contributors
     * during the time period represented by that data point.</p> </li> <li> <p>
     * <code>Minimum</code> -- the minimum value from a single observation during the
     * time period represented by that data point.</p> </li> <li> <p>
     * <code>Maximum</code> -- the maximum value from a single observation during the
     * time period represented by that data point.</p> </li> <li> <p>
     * <code>Average</code> -- the average value from all contributors during the time
     * period represented by that data point.</p> </li> </ul>
     */
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }

    /**
     * <p>Specifies which metrics to use for aggregation of contributor values for the
     * report. You can specify one or more of the following metrics:</p> <ul> <li> <p>
     * <code>UniqueContributors</code> -- the number of unique contributors for each
     * data point.</p> </li> <li> <p> <code>MaxContributorValue</code> -- the value of
     * the top contributor for each data point. The identity of the contributor might
     * change for each data point in the graph.</p> <p>If this rule aggregates by
     * COUNT, the top contributor for each data point is the contributor with the most
     * occurrences in that period. If the rule aggregates by SUM, the top contributor
     * is the contributor with the highest sum in the log field specified by the rule's
     * <code>Value</code>, during that period.</p> </li> <li> <p>
     * <code>SampleCount</code> -- the number of data points matched by the rule.</p>
     * </li> <li> <p> <code>Sum</code> -- the sum of the values from all contributors
     * during the time period represented by that data point.</p> </li> <li> <p>
     * <code>Minimum</code> -- the minimum value from a single observation during the
     * time period represented by that data point.</p> </li> <li> <p>
     * <code>Maximum</code> -- the maximum value from a single observation during the
     * time period represented by that data point.</p> </li> <li> <p>
     * <code>Average</code> -- the average value from all contributors during the time
     * period represented by that data point.</p> </li> </ul>
     */
    inline void SetMetrics(const Aws::Vector<Aws::String>& value) { m_metricsHasBeenSet = true; m_metrics = value; }

    /**
     * <p>Specifies which metrics to use for aggregation of contributor values for the
     * report. You can specify one or more of the following metrics:</p> <ul> <li> <p>
     * <code>UniqueContributors</code> -- the number of unique contributors for each
     * data point.</p> </li> <li> <p> <code>MaxContributorValue</code> -- the value of
     * the top contributor for each data point. The identity of the contributor might
     * change for each data point in the graph.</p> <p>If this rule aggregates by
     * COUNT, the top contributor for each data point is the contributor with the most
     * occurrences in that period. If the rule aggregates by SUM, the top contributor
     * is the contributor with the highest sum in the log field specified by the rule's
     * <code>Value</code>, during that period.</p> </li> <li> <p>
     * <code>SampleCount</code> -- the number of data points matched by the rule.</p>
     * </li> <li> <p> <code>Sum</code> -- the sum of the values from all contributors
     * during the time period represented by that data point.</p> </li> <li> <p>
     * <code>Minimum</code> -- the minimum value from a single observation during the
     * time period represented by that data point.</p> </li> <li> <p>
     * <code>Maximum</code> -- the maximum value from a single observation during the
     * time period represented by that data point.</p> </li> <li> <p>
     * <code>Average</code> -- the average value from all contributors during the time
     * period represented by that data point.</p> </li> </ul>
     */
    inline void SetMetrics(Aws::Vector<Aws::String>&& value) { m_metricsHasBeenSet = true; m_metrics = std::move(value); }

    /**
     * <p>Specifies which metrics to use for aggregation of contributor values for the
     * report. You can specify one or more of the following metrics:</p> <ul> <li> <p>
     * <code>UniqueContributors</code> -- the number of unique contributors for each
     * data point.</p> </li> <li> <p> <code>MaxContributorValue</code> -- the value of
     * the top contributor for each data point. The identity of the contributor might
     * change for each data point in the graph.</p> <p>If this rule aggregates by
     * COUNT, the top contributor for each data point is the contributor with the most
     * occurrences in that period. If the rule aggregates by SUM, the top contributor
     * is the contributor with the highest sum in the log field specified by the rule's
     * <code>Value</code>, during that period.</p> </li> <li> <p>
     * <code>SampleCount</code> -- the number of data points matched by the rule.</p>
     * </li> <li> <p> <code>Sum</code> -- the sum of the values from all contributors
     * during the time period represented by that data point.</p> </li> <li> <p>
     * <code>Minimum</code> -- the minimum value from a single observation during the
     * time period represented by that data point.</p> </li> <li> <p>
     * <code>Maximum</code> -- the maximum value from a single observation during the
     * time period represented by that data point.</p> </li> <li> <p>
     * <code>Average</code> -- the average value from all contributors during the time
     * period represented by that data point.</p> </li> </ul>
     */
    inline GetInsightRuleReportRequest& WithMetrics(const Aws::Vector<Aws::String>& value) { SetMetrics(value); return *this;}

    /**
     * <p>Specifies which metrics to use for aggregation of contributor values for the
     * report. You can specify one or more of the following metrics:</p> <ul> <li> <p>
     * <code>UniqueContributors</code> -- the number of unique contributors for each
     * data point.</p> </li> <li> <p> <code>MaxContributorValue</code> -- the value of
     * the top contributor for each data point. The identity of the contributor might
     * change for each data point in the graph.</p> <p>If this rule aggregates by
     * COUNT, the top contributor for each data point is the contributor with the most
     * occurrences in that period. If the rule aggregates by SUM, the top contributor
     * is the contributor with the highest sum in the log field specified by the rule's
     * <code>Value</code>, during that period.</p> </li> <li> <p>
     * <code>SampleCount</code> -- the number of data points matched by the rule.</p>
     * </li> <li> <p> <code>Sum</code> -- the sum of the values from all contributors
     * during the time period represented by that data point.</p> </li> <li> <p>
     * <code>Minimum</code> -- the minimum value from a single observation during the
     * time period represented by that data point.</p> </li> <li> <p>
     * <code>Maximum</code> -- the maximum value from a single observation during the
     * time period represented by that data point.</p> </li> <li> <p>
     * <code>Average</code> -- the average value from all contributors during the time
     * period represented by that data point.</p> </li> </ul>
     */
    inline GetInsightRuleReportRequest& WithMetrics(Aws::Vector<Aws::String>&& value) { SetMetrics(std::move(value)); return *this;}

    /**
     * <p>Specifies which metrics to use for aggregation of contributor values for the
     * report. You can specify one or more of the following metrics:</p> <ul> <li> <p>
     * <code>UniqueContributors</code> -- the number of unique contributors for each
     * data point.</p> </li> <li> <p> <code>MaxContributorValue</code> -- the value of
     * the top contributor for each data point. The identity of the contributor might
     * change for each data point in the graph.</p> <p>If this rule aggregates by
     * COUNT, the top contributor for each data point is the contributor with the most
     * occurrences in that period. If the rule aggregates by SUM, the top contributor
     * is the contributor with the highest sum in the log field specified by the rule's
     * <code>Value</code>, during that period.</p> </li> <li> <p>
     * <code>SampleCount</code> -- the number of data points matched by the rule.</p>
     * </li> <li> <p> <code>Sum</code> -- the sum of the values from all contributors
     * during the time period represented by that data point.</p> </li> <li> <p>
     * <code>Minimum</code> -- the minimum value from a single observation during the
     * time period represented by that data point.</p> </li> <li> <p>
     * <code>Maximum</code> -- the maximum value from a single observation during the
     * time period represented by that data point.</p> </li> <li> <p>
     * <code>Average</code> -- the average value from all contributors during the time
     * period represented by that data point.</p> </li> </ul>
     */
    inline GetInsightRuleReportRequest& AddMetrics(const Aws::String& value) { m_metricsHasBeenSet = true; m_metrics.push_back(value); return *this; }

    /**
     * <p>Specifies which metrics to use for aggregation of contributor values for the
     * report. You can specify one or more of the following metrics:</p> <ul> <li> <p>
     * <code>UniqueContributors</code> -- the number of unique contributors for each
     * data point.</p> </li> <li> <p> <code>MaxContributorValue</code> -- the value of
     * the top contributor for each data point. The identity of the contributor might
     * change for each data point in the graph.</p> <p>If this rule aggregates by
     * COUNT, the top contributor for each data point is the contributor with the most
     * occurrences in that period. If the rule aggregates by SUM, the top contributor
     * is the contributor with the highest sum in the log field specified by the rule's
     * <code>Value</code>, during that period.</p> </li> <li> <p>
     * <code>SampleCount</code> -- the number of data points matched by the rule.</p>
     * </li> <li> <p> <code>Sum</code> -- the sum of the values from all contributors
     * during the time period represented by that data point.</p> </li> <li> <p>
     * <code>Minimum</code> -- the minimum value from a single observation during the
     * time period represented by that data point.</p> </li> <li> <p>
     * <code>Maximum</code> -- the maximum value from a single observation during the
     * time period represented by that data point.</p> </li> <li> <p>
     * <code>Average</code> -- the average value from all contributors during the time
     * period represented by that data point.</p> </li> </ul>
     */
    inline GetInsightRuleReportRequest& AddMetrics(Aws::String&& value) { m_metricsHasBeenSet = true; m_metrics.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies which metrics to use for aggregation of contributor values for the
     * report. You can specify one or more of the following metrics:</p> <ul> <li> <p>
     * <code>UniqueContributors</code> -- the number of unique contributors for each
     * data point.</p> </li> <li> <p> <code>MaxContributorValue</code> -- the value of
     * the top contributor for each data point. The identity of the contributor might
     * change for each data point in the graph.</p> <p>If this rule aggregates by
     * COUNT, the top contributor for each data point is the contributor with the most
     * occurrences in that period. If the rule aggregates by SUM, the top contributor
     * is the contributor with the highest sum in the log field specified by the rule's
     * <code>Value</code>, during that period.</p> </li> <li> <p>
     * <code>SampleCount</code> -- the number of data points matched by the rule.</p>
     * </li> <li> <p> <code>Sum</code> -- the sum of the values from all contributors
     * during the time period represented by that data point.</p> </li> <li> <p>
     * <code>Minimum</code> -- the minimum value from a single observation during the
     * time period represented by that data point.</p> </li> <li> <p>
     * <code>Maximum</code> -- the maximum value from a single observation during the
     * time period represented by that data point.</p> </li> <li> <p>
     * <code>Average</code> -- the average value from all contributors during the time
     * period represented by that data point.</p> </li> </ul>
     */
    inline GetInsightRuleReportRequest& AddMetrics(const char* value) { m_metricsHasBeenSet = true; m_metrics.push_back(value); return *this; }


    /**
     * <p>Determines what statistic to use to rank the contributors. Valid values are
     * <code>Sum</code> and <code>Maximum</code>.</p>
     */
    inline const Aws::String& GetOrderBy() const{ return m_orderBy; }

    /**
     * <p>Determines what statistic to use to rank the contributors. Valid values are
     * <code>Sum</code> and <code>Maximum</code>.</p>
     */
    inline bool OrderByHasBeenSet() const { return m_orderByHasBeenSet; }

    /**
     * <p>Determines what statistic to use to rank the contributors. Valid values are
     * <code>Sum</code> and <code>Maximum</code>.</p>
     */
    inline void SetOrderBy(const Aws::String& value) { m_orderByHasBeenSet = true; m_orderBy = value; }

    /**
     * <p>Determines what statistic to use to rank the contributors. Valid values are
     * <code>Sum</code> and <code>Maximum</code>.</p>
     */
    inline void SetOrderBy(Aws::String&& value) { m_orderByHasBeenSet = true; m_orderBy = std::move(value); }

    /**
     * <p>Determines what statistic to use to rank the contributors. Valid values are
     * <code>Sum</code> and <code>Maximum</code>.</p>
     */
    inline void SetOrderBy(const char* value) { m_orderByHasBeenSet = true; m_orderBy.assign(value); }

    /**
     * <p>Determines what statistic to use to rank the contributors. Valid values are
     * <code>Sum</code> and <code>Maximum</code>.</p>
     */
    inline GetInsightRuleReportRequest& WithOrderBy(const Aws::String& value) { SetOrderBy(value); return *this;}

    /**
     * <p>Determines what statistic to use to rank the contributors. Valid values are
     * <code>Sum</code> and <code>Maximum</code>.</p>
     */
    inline GetInsightRuleReportRequest& WithOrderBy(Aws::String&& value) { SetOrderBy(std::move(value)); return *this;}

    /**
     * <p>Determines what statistic to use to rank the contributors. Valid values are
     * <code>Sum</code> and <code>Maximum</code>.</p>
     */
    inline GetInsightRuleReportRequest& WithOrderBy(const char* value) { SetOrderBy(value); return *this;}

  private:

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    int m_period;
    bool m_periodHasBeenSet = false;

    int m_maxContributorCount;
    bool m_maxContributorCountHasBeenSet = false;

    Aws::Vector<Aws::String> m_metrics;
    bool m_metricsHasBeenSet = false;

    Aws::String m_orderBy;
    bool m_orderByHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
