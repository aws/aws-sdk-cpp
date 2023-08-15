/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/pi/model/PerformanceInsightsMetric.h>
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
   * <p>List of data objects which provide details about source metrics. This field
   * can be used to determine the PI metric to render for the insight. This data type
   * also includes static values for the metrics for the Insight that were calculated
   * and included in text and annotations on the DB load chart.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/Data">AWS API
   * Reference</a></p>
   */
  class Data
  {
  public:
    AWS_PI_API Data();
    AWS_PI_API Data(Aws::Utils::Json::JsonView jsonValue);
    AWS_PI_API Data& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PI_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>This field determines the Performance Insights metric to render for the
     * insight. The <code>name</code> field refers to a Performance Insights metric.
     * </p>
     */
    inline const PerformanceInsightsMetric& GetPerformanceInsightsMetric() const{ return m_performanceInsightsMetric; }

    /**
     * <p>This field determines the Performance Insights metric to render for the
     * insight. The <code>name</code> field refers to a Performance Insights metric.
     * </p>
     */
    inline bool PerformanceInsightsMetricHasBeenSet() const { return m_performanceInsightsMetricHasBeenSet; }

    /**
     * <p>This field determines the Performance Insights metric to render for the
     * insight. The <code>name</code> field refers to a Performance Insights metric.
     * </p>
     */
    inline void SetPerformanceInsightsMetric(const PerformanceInsightsMetric& value) { m_performanceInsightsMetricHasBeenSet = true; m_performanceInsightsMetric = value; }

    /**
     * <p>This field determines the Performance Insights metric to render for the
     * insight. The <code>name</code> field refers to a Performance Insights metric.
     * </p>
     */
    inline void SetPerformanceInsightsMetric(PerformanceInsightsMetric&& value) { m_performanceInsightsMetricHasBeenSet = true; m_performanceInsightsMetric = std::move(value); }

    /**
     * <p>This field determines the Performance Insights metric to render for the
     * insight. The <code>name</code> field refers to a Performance Insights metric.
     * </p>
     */
    inline Data& WithPerformanceInsightsMetric(const PerformanceInsightsMetric& value) { SetPerformanceInsightsMetric(value); return *this;}

    /**
     * <p>This field determines the Performance Insights metric to render for the
     * insight. The <code>name</code> field refers to a Performance Insights metric.
     * </p>
     */
    inline Data& WithPerformanceInsightsMetric(PerformanceInsightsMetric&& value) { SetPerformanceInsightsMetric(std::move(value)); return *this;}

  private:

    PerformanceInsightsMetric m_performanceInsightsMetric;
    bool m_performanceInsightsMetricHasBeenSet = false;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
