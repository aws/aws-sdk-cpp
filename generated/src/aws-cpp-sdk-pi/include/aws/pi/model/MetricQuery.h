/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pi/model/DimensionGroup.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace PI
{
namespace Model
{

  /**
   * <p>A single query to be processed. You must provide the metric to query and
   * append an aggregate function to the metric. For example, to find the average for
   * the metric <code>db.load</code> you must use <code>db.load.avg</code>. Valid
   * values for aggregate functions include <code>.avg</code>, <code>.min</code>,
   * <code>.max</code>, and <code>.sum</code>. If no other parameters are specified,
   * Performance Insights returns all data points for the specified metric.
   * Optionally, you can request that the data points be aggregated by dimension
   * group (<code>GroupBy</code>), and return only those data points that match your
   * criteria (<code>Filter</code>).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/MetricQuery">AWS API
   * Reference</a></p>
   */
  class MetricQuery
  {
  public:
    AWS_PI_API MetricQuery() = default;
    AWS_PI_API MetricQuery(Aws::Utils::Json::JsonView jsonValue);
    AWS_PI_API MetricQuery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of a Performance Insights metric to be measured.</p> <p>Valid values
     * for <code>Metric</code> are:</p> <ul> <li> <p> <code>db.load.avg</code> - A
     * scaled representation of the number of active sessions for the database
     * engine.</p> </li> <li> <p> <code>db.sampledload.avg</code> - The raw number of
     * active sessions for the database engine.</p> </li> <li> <p>The counter metrics
     * listed in <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_PerfInsights_Counters.html#USER_PerfInsights_Counters.OS">Performance
     * Insights operating system counters</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> </li> <li> <p>The counter metrics listed in <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PerfInsights_Counters.html#USER_PerfInsights_Counters.OS">Performance
     * Insights operating system counters</a> in the <i>Amazon RDS User Guide</i>.</p>
     * </li> </ul> <p>If the number of active sessions is less than an internal
     * Performance Insights threshold, <code>db.load.avg</code> and
     * <code>db.sampledload.avg</code> are the same value. If the number of active
     * sessions is greater than the internal threshold, Performance Insights samples
     * the active sessions, with <code>db.load.avg</code> showing the scaled values,
     * <code>db.sampledload.avg</code> showing the raw values, and
     * <code>db.sampledload.avg</code> less than <code>db.load.avg</code>. For most use
     * cases, you can query <code>db.load.avg</code> only.</p>
     */
    inline const Aws::String& GetMetric() const { return m_metric; }
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }
    template<typename MetricT = Aws::String>
    void SetMetric(MetricT&& value) { m_metricHasBeenSet = true; m_metric = std::forward<MetricT>(value); }
    template<typename MetricT = Aws::String>
    MetricQuery& WithMetric(MetricT&& value) { SetMetric(std::forward<MetricT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A specification for how to aggregate the data points from a query result. You
     * must specify a valid dimension group. Performance Insights will return all of
     * the dimensions within that group, unless you provide the names of specific
     * dimensions within that group. You can also request that Performance Insights
     * return a limited number of values for a dimension.</p>
     */
    inline const DimensionGroup& GetGroupBy() const { return m_groupBy; }
    inline bool GroupByHasBeenSet() const { return m_groupByHasBeenSet; }
    template<typename GroupByT = DimensionGroup>
    void SetGroupBy(GroupByT&& value) { m_groupByHasBeenSet = true; m_groupBy = std::forward<GroupByT>(value); }
    template<typename GroupByT = DimensionGroup>
    MetricQuery& WithGroupBy(GroupByT&& value) { SetGroupBy(std::forward<GroupByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more filters to apply in the request. Restrictions:</p> <ul> <li>
     * <p>Any number of filters by the same dimension, as specified in the
     * <code>GroupBy</code> parameter.</p> </li> <li> <p>A single filter for any other
     * dimension in this dimension group.</p> </li> </ul>  <p>The
     * <code>db.sql.db_id</code> filter isn't available for RDS for SQL Server DB
     * instances.</p> 
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = Aws::Map<Aws::String, Aws::String>>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = Aws::Map<Aws::String, Aws::String>>
    MetricQuery& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    template<typename FilterKeyT = Aws::String, typename FilterValueT = Aws::String>
    MetricQuery& AddFilter(FilterKeyT&& key, FilterValueT&& value) {
      m_filterHasBeenSet = true; m_filter.emplace(std::forward<FilterKeyT>(key), std::forward<FilterValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_metric;
    bool m_metricHasBeenSet = false;

    DimensionGroup m_groupBy;
    bool m_groupByHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_filter;
    bool m_filterHasBeenSet = false;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
