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
    AWS_CLOUDWATCH_API GetInsightRuleReportRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetInsightRuleReport"; }

    AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDWATCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the rule that you want to see data from.</p>
     */
    inline const Aws::String& GetRuleName() const { return m_ruleName; }
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }
    template<typename RuleNameT = Aws::String>
    void SetRuleName(RuleNameT&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::forward<RuleNameT>(value); }
    template<typename RuleNameT = Aws::String>
    GetInsightRuleReportRequest& WithRuleName(RuleNameT&& value) { SetRuleName(std::forward<RuleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of the data to use in the report. When used in a raw HTTP
     * Query API, it is formatted as <code>yyyy-MM-dd'T'HH:mm:ss</code>. For example,
     * <code>2019-07-01T23:59:59</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    GetInsightRuleReportRequest& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time of the data to use in the report. When used in a raw HTTP Query
     * API, it is formatted as <code>yyyy-MM-dd'T'HH:mm:ss</code>. For example,
     * <code>2019-07-01T23:59:59</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    GetInsightRuleReportRequest& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The period, in seconds, to use for the statistics in the
     * <code>InsightRuleMetricDatapoint</code> results.</p>
     */
    inline int GetPeriod() const { return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }
    inline GetInsightRuleReportRequest& WithPeriod(int value) { SetPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of contributors to include in the report. The range is 1
     * to 100. If you omit this, the default of 10 is used.</p>
     */
    inline int GetMaxContributorCount() const { return m_maxContributorCount; }
    inline bool MaxContributorCountHasBeenSet() const { return m_maxContributorCountHasBeenSet; }
    inline void SetMaxContributorCount(int value) { m_maxContributorCountHasBeenSet = true; m_maxContributorCount = value; }
    inline GetInsightRuleReportRequest& WithMaxContributorCount(int value) { SetMaxContributorCount(value); return *this;}
    ///@}

    ///@{
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
    inline const Aws::Vector<Aws::String>& GetMetrics() const { return m_metrics; }
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
    template<typename MetricsT = Aws::Vector<Aws::String>>
    void SetMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics = std::forward<MetricsT>(value); }
    template<typename MetricsT = Aws::Vector<Aws::String>>
    GetInsightRuleReportRequest& WithMetrics(MetricsT&& value) { SetMetrics(std::forward<MetricsT>(value)); return *this;}
    template<typename MetricsT = Aws::String>
    GetInsightRuleReportRequest& AddMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics.emplace_back(std::forward<MetricsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Determines what statistic to use to rank the contributors. Valid values are
     * <code>Sum</code> and <code>Maximum</code>.</p>
     */
    inline const Aws::String& GetOrderBy() const { return m_orderBy; }
    inline bool OrderByHasBeenSet() const { return m_orderByHasBeenSet; }
    template<typename OrderByT = Aws::String>
    void SetOrderBy(OrderByT&& value) { m_orderByHasBeenSet = true; m_orderBy = std::forward<OrderByT>(value); }
    template<typename OrderByT = Aws::String>
    GetInsightRuleReportRequest& WithOrderBy(OrderByT&& value) { SetOrderBy(std::forward<OrderByT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    int m_period{0};
    bool m_periodHasBeenSet = false;

    int m_maxContributorCount{0};
    bool m_maxContributorCountHasBeenSet = false;

    Aws::Vector<Aws::String> m_metrics;
    bool m_metricsHasBeenSet = false;

    Aws::String m_orderBy;
    bool m_orderByHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
