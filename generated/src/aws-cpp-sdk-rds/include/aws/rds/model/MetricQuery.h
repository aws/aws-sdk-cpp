/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/rds/model/PerformanceInsightsMetricQuery.h>
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
   * <p>The query to retrieve metric data points.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/MetricQuery">AWS API
   * Reference</a></p>
   */
  class MetricQuery
  {
  public:
    AWS_RDS_API MetricQuery();
    AWS_RDS_API MetricQuery(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API MetricQuery& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Performance Insights query that you can use to retrieve Performance
     * Insights metric data points.</p>
     */
    inline const PerformanceInsightsMetricQuery& GetPerformanceInsightsMetricQuery() const{ return m_performanceInsightsMetricQuery; }

    /**
     * <p>The Performance Insights query that you can use to retrieve Performance
     * Insights metric data points.</p>
     */
    inline bool PerformanceInsightsMetricQueryHasBeenSet() const { return m_performanceInsightsMetricQueryHasBeenSet; }

    /**
     * <p>The Performance Insights query that you can use to retrieve Performance
     * Insights metric data points.</p>
     */
    inline void SetPerformanceInsightsMetricQuery(const PerformanceInsightsMetricQuery& value) { m_performanceInsightsMetricQueryHasBeenSet = true; m_performanceInsightsMetricQuery = value; }

    /**
     * <p>The Performance Insights query that you can use to retrieve Performance
     * Insights metric data points.</p>
     */
    inline void SetPerformanceInsightsMetricQuery(PerformanceInsightsMetricQuery&& value) { m_performanceInsightsMetricQueryHasBeenSet = true; m_performanceInsightsMetricQuery = std::move(value); }

    /**
     * <p>The Performance Insights query that you can use to retrieve Performance
     * Insights metric data points.</p>
     */
    inline MetricQuery& WithPerformanceInsightsMetricQuery(const PerformanceInsightsMetricQuery& value) { SetPerformanceInsightsMetricQuery(value); return *this;}

    /**
     * <p>The Performance Insights query that you can use to retrieve Performance
     * Insights metric data points.</p>
     */
    inline MetricQuery& WithPerformanceInsightsMetricQuery(PerformanceInsightsMetricQuery&& value) { SetPerformanceInsightsMetricQuery(std::move(value)); return *this;}

  private:

    PerformanceInsightsMetricQuery m_performanceInsightsMetricQuery;
    bool m_performanceInsightsMetricQueryHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
