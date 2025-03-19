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
   * <p>An object describing a Performance Insights metric and one or more dimensions
   * for that metric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/ResponseResourceMetricKey">AWS
   * API Reference</a></p>
   */
  class ResponseResourceMetricKey
  {
  public:
    AWS_PI_API ResponseResourceMetricKey() = default;
    AWS_PI_API ResponseResourceMetricKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_PI_API ResponseResourceMetricKey& operator=(Aws::Utils::Json::JsonView jsonValue);
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
     * cases, you can query <code>db.load.avg</code> only. </p>
     */
    inline const Aws::String& GetMetric() const { return m_metric; }
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }
    template<typename MetricT = Aws::String>
    void SetMetric(MetricT&& value) { m_metricHasBeenSet = true; m_metric = std::forward<MetricT>(value); }
    template<typename MetricT = Aws::String>
    ResponseResourceMetricKey& WithMetric(MetricT&& value) { SetMetric(std::forward<MetricT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The valid dimensions for the metric.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDimensions() const { return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    template<typename DimensionsT = Aws::Map<Aws::String, Aws::String>>
    void SetDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::forward<DimensionsT>(value); }
    template<typename DimensionsT = Aws::Map<Aws::String, Aws::String>>
    ResponseResourceMetricKey& WithDimensions(DimensionsT&& value) { SetDimensions(std::forward<DimensionsT>(value)); return *this;}
    template<typename DimensionsKeyT = Aws::String, typename DimensionsValueT = Aws::String>
    ResponseResourceMetricKey& AddDimensions(DimensionsKeyT&& key, DimensionsValueT&& value) {
      m_dimensionsHasBeenSet = true; m_dimensions.emplace(std::forward<DimensionsKeyT>(key), std::forward<DimensionsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_metric;
    bool m_metricHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_dimensions;
    bool m_dimensionsHasBeenSet = false;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
