/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/rds/model/PerformanceInsightsMetricDimensionGroup.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{

  /**
   * <p>A single Performance Insights metric query to process. You must provide the
   * metric to the query. If other parameters aren't specified, Performance Insights
   * returns all data points for the specified metric. Optionally, you can request
   * the data points to be aggregated by dimension group (<code>GroupBy</code>) and
   * return only those data points that match your criteria
   * (<code>Filter</code>).</p> <p>Constraints:</p> <ul> <li> <p>Must be a valid
   * Performance Insights query.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/PerformanceInsightsMetricQuery">AWS
   * API Reference</a></p>
   */
  class PerformanceInsightsMetricQuery
  {
  public:
    AWS_RDS_API PerformanceInsightsMetricQuery();
    AWS_RDS_API PerformanceInsightsMetricQuery(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API PerformanceInsightsMetricQuery& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>A specification for how to aggregate the data points from a query result. You
     * must specify a valid dimension group. Performance Insights will return all of
     * the dimensions within that group, unless you provide the names of specific
     * dimensions within that group. You can also request that Performance Insights
     * return a limited number of values for a dimension.</p>
     */
    inline const PerformanceInsightsMetricDimensionGroup& GetGroupBy() const{ return m_groupBy; }

    /**
     * <p>A specification for how to aggregate the data points from a query result. You
     * must specify a valid dimension group. Performance Insights will return all of
     * the dimensions within that group, unless you provide the names of specific
     * dimensions within that group. You can also request that Performance Insights
     * return a limited number of values for a dimension.</p>
     */
    inline bool GroupByHasBeenSet() const { return m_groupByHasBeenSet; }

    /**
     * <p>A specification for how to aggregate the data points from a query result. You
     * must specify a valid dimension group. Performance Insights will return all of
     * the dimensions within that group, unless you provide the names of specific
     * dimensions within that group. You can also request that Performance Insights
     * return a limited number of values for a dimension.</p>
     */
    inline void SetGroupBy(const PerformanceInsightsMetricDimensionGroup& value) { m_groupByHasBeenSet = true; m_groupBy = value; }

    /**
     * <p>A specification for how to aggregate the data points from a query result. You
     * must specify a valid dimension group. Performance Insights will return all of
     * the dimensions within that group, unless you provide the names of specific
     * dimensions within that group. You can also request that Performance Insights
     * return a limited number of values for a dimension.</p>
     */
    inline void SetGroupBy(PerformanceInsightsMetricDimensionGroup&& value) { m_groupByHasBeenSet = true; m_groupBy = std::move(value); }

    /**
     * <p>A specification for how to aggregate the data points from a query result. You
     * must specify a valid dimension group. Performance Insights will return all of
     * the dimensions within that group, unless you provide the names of specific
     * dimensions within that group. You can also request that Performance Insights
     * return a limited number of values for a dimension.</p>
     */
    inline PerformanceInsightsMetricQuery& WithGroupBy(const PerformanceInsightsMetricDimensionGroup& value) { SetGroupBy(value); return *this;}

    /**
     * <p>A specification for how to aggregate the data points from a query result. You
     * must specify a valid dimension group. Performance Insights will return all of
     * the dimensions within that group, unless you provide the names of specific
     * dimensions within that group. You can also request that Performance Insights
     * return a limited number of values for a dimension.</p>
     */
    inline PerformanceInsightsMetricQuery& WithGroupBy(PerformanceInsightsMetricDimensionGroup&& value) { SetGroupBy(std::move(value)); return *this;}


    /**
     * <p>The name of a Performance Insights metric to be measured.</p> <p>Valid
     * Values:</p> <ul> <li> <p> <code>db.load.avg</code> - A scaled representation of
     * the number of active sessions for the database engine.</p> </li> <li> <p>
     * <code>db.sampledload.avg</code> - The raw number of active sessions for the
     * database engine.</p> </li> <li> <p>The counter metrics listed in <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_PerfInsights_Counters.html#USER_PerfInsights_Counters.OS">Performance
     * Insights operating system counters</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> </li> </ul> <p>If the number of active sessions is less than an
     * internal Performance Insights threshold, <code>db.load.avg</code> and
     * <code>db.sampledload.avg</code> are the same value. If the number of active
     * sessions is greater than the internal threshold, Performance Insights samples
     * the active sessions, with <code>db.load.avg</code> showing the scaled values,
     * <code>db.sampledload.avg</code> showing the raw values, and
     * <code>db.sampledload.avg</code> less than <code>db.load.avg</code>. For most use
     * cases, you can query <code>db.load.avg</code> only.</p>
     */
    inline const Aws::String& GetMetric() const{ return m_metric; }

    /**
     * <p>The name of a Performance Insights metric to be measured.</p> <p>Valid
     * Values:</p> <ul> <li> <p> <code>db.load.avg</code> - A scaled representation of
     * the number of active sessions for the database engine.</p> </li> <li> <p>
     * <code>db.sampledload.avg</code> - The raw number of active sessions for the
     * database engine.</p> </li> <li> <p>The counter metrics listed in <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_PerfInsights_Counters.html#USER_PerfInsights_Counters.OS">Performance
     * Insights operating system counters</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> </li> </ul> <p>If the number of active sessions is less than an
     * internal Performance Insights threshold, <code>db.load.avg</code> and
     * <code>db.sampledload.avg</code> are the same value. If the number of active
     * sessions is greater than the internal threshold, Performance Insights samples
     * the active sessions, with <code>db.load.avg</code> showing the scaled values,
     * <code>db.sampledload.avg</code> showing the raw values, and
     * <code>db.sampledload.avg</code> less than <code>db.load.avg</code>. For most use
     * cases, you can query <code>db.load.avg</code> only.</p>
     */
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }

    /**
     * <p>The name of a Performance Insights metric to be measured.</p> <p>Valid
     * Values:</p> <ul> <li> <p> <code>db.load.avg</code> - A scaled representation of
     * the number of active sessions for the database engine.</p> </li> <li> <p>
     * <code>db.sampledload.avg</code> - The raw number of active sessions for the
     * database engine.</p> </li> <li> <p>The counter metrics listed in <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_PerfInsights_Counters.html#USER_PerfInsights_Counters.OS">Performance
     * Insights operating system counters</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> </li> </ul> <p>If the number of active sessions is less than an
     * internal Performance Insights threshold, <code>db.load.avg</code> and
     * <code>db.sampledload.avg</code> are the same value. If the number of active
     * sessions is greater than the internal threshold, Performance Insights samples
     * the active sessions, with <code>db.load.avg</code> showing the scaled values,
     * <code>db.sampledload.avg</code> showing the raw values, and
     * <code>db.sampledload.avg</code> less than <code>db.load.avg</code>. For most use
     * cases, you can query <code>db.load.avg</code> only.</p>
     */
    inline void SetMetric(const Aws::String& value) { m_metricHasBeenSet = true; m_metric = value; }

    /**
     * <p>The name of a Performance Insights metric to be measured.</p> <p>Valid
     * Values:</p> <ul> <li> <p> <code>db.load.avg</code> - A scaled representation of
     * the number of active sessions for the database engine.</p> </li> <li> <p>
     * <code>db.sampledload.avg</code> - The raw number of active sessions for the
     * database engine.</p> </li> <li> <p>The counter metrics listed in <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_PerfInsights_Counters.html#USER_PerfInsights_Counters.OS">Performance
     * Insights operating system counters</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> </li> </ul> <p>If the number of active sessions is less than an
     * internal Performance Insights threshold, <code>db.load.avg</code> and
     * <code>db.sampledload.avg</code> are the same value. If the number of active
     * sessions is greater than the internal threshold, Performance Insights samples
     * the active sessions, with <code>db.load.avg</code> showing the scaled values,
     * <code>db.sampledload.avg</code> showing the raw values, and
     * <code>db.sampledload.avg</code> less than <code>db.load.avg</code>. For most use
     * cases, you can query <code>db.load.avg</code> only.</p>
     */
    inline void SetMetric(Aws::String&& value) { m_metricHasBeenSet = true; m_metric = std::move(value); }

    /**
     * <p>The name of a Performance Insights metric to be measured.</p> <p>Valid
     * Values:</p> <ul> <li> <p> <code>db.load.avg</code> - A scaled representation of
     * the number of active sessions for the database engine.</p> </li> <li> <p>
     * <code>db.sampledload.avg</code> - The raw number of active sessions for the
     * database engine.</p> </li> <li> <p>The counter metrics listed in <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_PerfInsights_Counters.html#USER_PerfInsights_Counters.OS">Performance
     * Insights operating system counters</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> </li> </ul> <p>If the number of active sessions is less than an
     * internal Performance Insights threshold, <code>db.load.avg</code> and
     * <code>db.sampledload.avg</code> are the same value. If the number of active
     * sessions is greater than the internal threshold, Performance Insights samples
     * the active sessions, with <code>db.load.avg</code> showing the scaled values,
     * <code>db.sampledload.avg</code> showing the raw values, and
     * <code>db.sampledload.avg</code> less than <code>db.load.avg</code>. For most use
     * cases, you can query <code>db.load.avg</code> only.</p>
     */
    inline void SetMetric(const char* value) { m_metricHasBeenSet = true; m_metric.assign(value); }

    /**
     * <p>The name of a Performance Insights metric to be measured.</p> <p>Valid
     * Values:</p> <ul> <li> <p> <code>db.load.avg</code> - A scaled representation of
     * the number of active sessions for the database engine.</p> </li> <li> <p>
     * <code>db.sampledload.avg</code> - The raw number of active sessions for the
     * database engine.</p> </li> <li> <p>The counter metrics listed in <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_PerfInsights_Counters.html#USER_PerfInsights_Counters.OS">Performance
     * Insights operating system counters</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> </li> </ul> <p>If the number of active sessions is less than an
     * internal Performance Insights threshold, <code>db.load.avg</code> and
     * <code>db.sampledload.avg</code> are the same value. If the number of active
     * sessions is greater than the internal threshold, Performance Insights samples
     * the active sessions, with <code>db.load.avg</code> showing the scaled values,
     * <code>db.sampledload.avg</code> showing the raw values, and
     * <code>db.sampledload.avg</code> less than <code>db.load.avg</code>. For most use
     * cases, you can query <code>db.load.avg</code> only.</p>
     */
    inline PerformanceInsightsMetricQuery& WithMetric(const Aws::String& value) { SetMetric(value); return *this;}

    /**
     * <p>The name of a Performance Insights metric to be measured.</p> <p>Valid
     * Values:</p> <ul> <li> <p> <code>db.load.avg</code> - A scaled representation of
     * the number of active sessions for the database engine.</p> </li> <li> <p>
     * <code>db.sampledload.avg</code> - The raw number of active sessions for the
     * database engine.</p> </li> <li> <p>The counter metrics listed in <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_PerfInsights_Counters.html#USER_PerfInsights_Counters.OS">Performance
     * Insights operating system counters</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> </li> </ul> <p>If the number of active sessions is less than an
     * internal Performance Insights threshold, <code>db.load.avg</code> and
     * <code>db.sampledload.avg</code> are the same value. If the number of active
     * sessions is greater than the internal threshold, Performance Insights samples
     * the active sessions, with <code>db.load.avg</code> showing the scaled values,
     * <code>db.sampledload.avg</code> showing the raw values, and
     * <code>db.sampledload.avg</code> less than <code>db.load.avg</code>. For most use
     * cases, you can query <code>db.load.avg</code> only.</p>
     */
    inline PerformanceInsightsMetricQuery& WithMetric(Aws::String&& value) { SetMetric(std::move(value)); return *this;}

    /**
     * <p>The name of a Performance Insights metric to be measured.</p> <p>Valid
     * Values:</p> <ul> <li> <p> <code>db.load.avg</code> - A scaled representation of
     * the number of active sessions for the database engine.</p> </li> <li> <p>
     * <code>db.sampledload.avg</code> - The raw number of active sessions for the
     * database engine.</p> </li> <li> <p>The counter metrics listed in <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_PerfInsights_Counters.html#USER_PerfInsights_Counters.OS">Performance
     * Insights operating system counters</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> </li> </ul> <p>If the number of active sessions is less than an
     * internal Performance Insights threshold, <code>db.load.avg</code> and
     * <code>db.sampledload.avg</code> are the same value. If the number of active
     * sessions is greater than the internal threshold, Performance Insights samples
     * the active sessions, with <code>db.load.avg</code> showing the scaled values,
     * <code>db.sampledload.avg</code> showing the raw values, and
     * <code>db.sampledload.avg</code> less than <code>db.load.avg</code>. For most use
     * cases, you can query <code>db.load.avg</code> only.</p>
     */
    inline PerformanceInsightsMetricQuery& WithMetric(const char* value) { SetMetric(value); return *this;}

  private:

    PerformanceInsightsMetricDimensionGroup m_groupBy;
    bool m_groupByHasBeenSet = false;

    Aws::String m_metric;
    bool m_metricHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
