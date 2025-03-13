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
    AWS_PI_API PerformanceInsightsMetric() = default;
    AWS_PI_API PerformanceInsightsMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_PI_API PerformanceInsightsMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Performance Insights metric.</p>
     */
    inline const Aws::String& GetMetric() const { return m_metric; }
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }
    template<typename MetricT = Aws::String>
    void SetMetric(MetricT&& value) { m_metricHasBeenSet = true; m_metric = std::forward<MetricT>(value); }
    template<typename MetricT = Aws::String>
    PerformanceInsightsMetric& WithMetric(MetricT&& value) { SetMetric(std::forward<MetricT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Performance Insights metric name.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    PerformanceInsightsMetric& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A dimension map that contains the dimensions for this partition.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDimensions() const { return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    template<typename DimensionsT = Aws::Map<Aws::String, Aws::String>>
    void SetDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::forward<DimensionsT>(value); }
    template<typename DimensionsT = Aws::Map<Aws::String, Aws::String>>
    PerformanceInsightsMetric& WithDimensions(DimensionsT&& value) { SetDimensions(std::forward<DimensionsT>(value)); return *this;}
    template<typename DimensionsKeyT = Aws::String, typename DimensionsValueT = Aws::String>
    PerformanceInsightsMetric& AddDimensions(DimensionsKeyT&& key, DimensionsValueT&& value) {
      m_dimensionsHasBeenSet = true; m_dimensions.emplace(std::forward<DimensionsKeyT>(key), std::forward<DimensionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The filter for the Performance Insights metric.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = Aws::Map<Aws::String, Aws::String>>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = Aws::Map<Aws::String, Aws::String>>
    PerformanceInsightsMetric& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    template<typename FilterKeyT = Aws::String, typename FilterValueT = Aws::String>
    PerformanceInsightsMetric& AddFilter(FilterKeyT&& key, FilterValueT&& value) {
      m_filterHasBeenSet = true; m_filter.emplace(std::forward<FilterKeyT>(key), std::forward<FilterValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The value of the metric. For example, <code>9</code> for
     * <code>db.load.avg</code>.</p>
     */
    inline double GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }
    inline PerformanceInsightsMetric& WithValue(double value) { SetValue(value); return *this;}
    ///@}
  private:

    Aws::String m_metric;
    bool m_metricHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_filter;
    bool m_filterHasBeenSet = false;

    double m_value{0.0};
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
