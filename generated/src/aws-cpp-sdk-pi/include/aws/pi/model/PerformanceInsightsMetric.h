/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>This data type helps to determine Performance Insights metric to render for
   * the insight.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/PerformanceInsightsMetric">AWS
   * API Reference</a></p>
   */
  class PerformanceInsightsMetric
  {
  public:
    AWS_PI_API PerformanceInsightsMetric();
    AWS_PI_API PerformanceInsightsMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_PI_API PerformanceInsightsMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PI_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Performance Insights metric.</p>
     */
    inline const Aws::String& GetMetric() const{ return m_metric; }

    /**
     * <p>The Performance Insights metric.</p>
     */
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }

    /**
     * <p>The Performance Insights metric.</p>
     */
    inline void SetMetric(const Aws::String& value) { m_metricHasBeenSet = true; m_metric = value; }

    /**
     * <p>The Performance Insights metric.</p>
     */
    inline void SetMetric(Aws::String&& value) { m_metricHasBeenSet = true; m_metric = std::move(value); }

    /**
     * <p>The Performance Insights metric.</p>
     */
    inline void SetMetric(const char* value) { m_metricHasBeenSet = true; m_metric.assign(value); }

    /**
     * <p>The Performance Insights metric.</p>
     */
    inline PerformanceInsightsMetric& WithMetric(const Aws::String& value) { SetMetric(value); return *this;}

    /**
     * <p>The Performance Insights metric.</p>
     */
    inline PerformanceInsightsMetric& WithMetric(Aws::String&& value) { SetMetric(std::move(value)); return *this;}

    /**
     * <p>The Performance Insights metric.</p>
     */
    inline PerformanceInsightsMetric& WithMetric(const char* value) { SetMetric(value); return *this;}


    /**
     * <p>The Performance Insights metric name.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The Performance Insights metric name.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The Performance Insights metric name.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The Performance Insights metric name.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The Performance Insights metric name.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The Performance Insights metric name.</p>
     */
    inline PerformanceInsightsMetric& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The Performance Insights metric name.</p>
     */
    inline PerformanceInsightsMetric& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The Performance Insights metric name.</p>
     */
    inline PerformanceInsightsMetric& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>A dimension map that contains the dimensions for this partition.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>A dimension map that contains the dimensions for this partition.</p>
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * <p>A dimension map that contains the dimensions for this partition.</p>
     */
    inline void SetDimensions(const Aws::Map<Aws::String, Aws::String>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>A dimension map that contains the dimensions for this partition.</p>
     */
    inline void SetDimensions(Aws::Map<Aws::String, Aws::String>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * <p>A dimension map that contains the dimensions for this partition.</p>
     */
    inline PerformanceInsightsMetric& WithDimensions(const Aws::Map<Aws::String, Aws::String>& value) { SetDimensions(value); return *this;}

    /**
     * <p>A dimension map that contains the dimensions for this partition.</p>
     */
    inline PerformanceInsightsMetric& WithDimensions(Aws::Map<Aws::String, Aws::String>&& value) { SetDimensions(std::move(value)); return *this;}

    /**
     * <p>A dimension map that contains the dimensions for this partition.</p>
     */
    inline PerformanceInsightsMetric& AddDimensions(const Aws::String& key, const Aws::String& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(key, value); return *this; }

    /**
     * <p>A dimension map that contains the dimensions for this partition.</p>
     */
    inline PerformanceInsightsMetric& AddDimensions(Aws::String&& key, const Aws::String& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(std::move(key), value); return *this; }

    /**
     * <p>A dimension map that contains the dimensions for this partition.</p>
     */
    inline PerformanceInsightsMetric& AddDimensions(const Aws::String& key, Aws::String&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A dimension map that contains the dimensions for this partition.</p>
     */
    inline PerformanceInsightsMetric& AddDimensions(Aws::String&& key, Aws::String&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A dimension map that contains the dimensions for this partition.</p>
     */
    inline PerformanceInsightsMetric& AddDimensions(const char* key, Aws::String&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A dimension map that contains the dimensions for this partition.</p>
     */
    inline PerformanceInsightsMetric& AddDimensions(Aws::String&& key, const char* value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(std::move(key), value); return *this; }

    /**
     * <p>A dimension map that contains the dimensions for this partition.</p>
     */
    inline PerformanceInsightsMetric& AddDimensions(const char* key, const char* value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(key, value); return *this; }


    /**
     * <p>The value of the metric. For example, <code>9</code> for
     * <code>db.load.avg</code>.</p>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p>The value of the metric. For example, <code>9</code> for
     * <code>db.load.avg</code>.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the metric. For example, <code>9</code> for
     * <code>db.load.avg</code>.</p>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the metric. For example, <code>9</code> for
     * <code>db.load.avg</code>.</p>
     */
    inline PerformanceInsightsMetric& WithValue(double value) { SetValue(value); return *this;}

  private:

    Aws::String m_metric;
    bool m_metricHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    double m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
