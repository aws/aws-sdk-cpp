/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/monitoring/model/StatisticSet.h>
#include <aws/monitoring/model/StandardUnit.h>
#include <aws/monitoring/model/Dimension.h>
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
namespace CloudWatch
{
namespace Model
{

  /**
   * <p>Encapsulates the information sent to either create a metric or add new values
   * to be aggregated into an existing metric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/MetricDatum">AWS
   * API Reference</a></p>
   */
  class MetricDatum
  {
  public:
    AWS_CLOUDWATCH_API MetricDatum() = default;
    AWS_CLOUDWATCH_API MetricDatum(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDWATCH_API MetricDatum& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the metric.</p>
     */
    inline const Aws::String& GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    template<typename MetricNameT = Aws::String>
    void SetMetricName(MetricNameT&& value) { m_metricNameHasBeenSet = true; m_metricName = std::forward<MetricNameT>(value); }
    template<typename MetricNameT = Aws::String>
    MetricDatum& WithMetricName(MetricNameT&& value) { SetMetricName(std::forward<MetricNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dimensions associated with the metric. </p>
     */
    inline const Aws::Vector<Dimension>& GetDimensions() const { return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    template<typename DimensionsT = Aws::Vector<Dimension>>
    void SetDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::forward<DimensionsT>(value); }
    template<typename DimensionsT = Aws::Vector<Dimension>>
    MetricDatum& WithDimensions(DimensionsT&& value) { SetDimensions(std::forward<DimensionsT>(value)); return *this;}
    template<typename DimensionsT = Dimension>
    MetricDatum& AddDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace_back(std::forward<DimensionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time the metric data was received, expressed as the number of
     * milliseconds since Jan 1, 1970 00:00:00 UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = Aws::Utils::DateTime>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::Utils::DateTime>
    MetricDatum& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value for the metric.</p> <p>Although the parameter accepts numbers of
     * type Double, CloudWatch rejects values that are either too small or too large.
     * Values must be in the range of -2^360 to 2^360. In addition, special values (for
     * example, NaN, +Infinity, -Infinity) are not supported.</p>
     */
    inline double GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }
    inline MetricDatum& WithValue(double value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The statistical values for the metric.</p>
     */
    inline const StatisticSet& GetStatisticValues() const { return m_statisticValues; }
    inline bool StatisticValuesHasBeenSet() const { return m_statisticValuesHasBeenSet; }
    template<typename StatisticValuesT = StatisticSet>
    void SetStatisticValues(StatisticValuesT&& value) { m_statisticValuesHasBeenSet = true; m_statisticValues = std::forward<StatisticValuesT>(value); }
    template<typename StatisticValuesT = StatisticSet>
    MetricDatum& WithStatisticValues(StatisticValuesT&& value) { SetStatisticValues(std::forward<StatisticValuesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Array of numbers representing the values for the metric during the period.
     * Each unique value is listed just once in this array, and the corresponding
     * number in the <code>Counts</code> array specifies the number of times that value
     * occurred during the period. You can include up to 150 unique values in each
     * <code>PutMetricData</code> action that specifies a <code>Values</code>
     * array.</p> <p>Although the <code>Values</code> array accepts numbers of type
     * <code>Double</code>, CloudWatch rejects values that are either too small or too
     * large. Values must be in the range of -2^360 to 2^360. In addition, special
     * values (for example, NaN, +Infinity, -Infinity) are not supported.</p>
     */
    inline const Aws::Vector<double>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<double>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<double>>
    MetricDatum& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    inline MetricDatum& AddValues(double value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Array of numbers that is used along with the <code>Values</code> array. Each
     * number in the <code>Count</code> array is the number of times the corresponding
     * value in the <code>Values</code> array occurred during the period. </p> <p>If
     * you omit the <code>Counts</code> array, the default of 1 is used as the value
     * for each count. If you include a <code>Counts</code> array, it must include the
     * same amount of values as the <code>Values</code> array.</p>
     */
    inline const Aws::Vector<double>& GetCounts() const { return m_counts; }
    inline bool CountsHasBeenSet() const { return m_countsHasBeenSet; }
    template<typename CountsT = Aws::Vector<double>>
    void SetCounts(CountsT&& value) { m_countsHasBeenSet = true; m_counts = std::forward<CountsT>(value); }
    template<typename CountsT = Aws::Vector<double>>
    MetricDatum& WithCounts(CountsT&& value) { SetCounts(std::forward<CountsT>(value)); return *this;}
    inline MetricDatum& AddCounts(double value) { m_countsHasBeenSet = true; m_counts.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>When you are using a <code>Put</code> operation, this defines what unit you
     * want to use when storing the metric.</p> <p>In a <code>Get</code> operation,
     * this displays the unit that is used for the metric.</p>
     */
    inline StandardUnit GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(StandardUnit value) { m_unitHasBeenSet = true; m_unit = value; }
    inline MetricDatum& WithUnit(StandardUnit value) { SetUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Valid values are 1 and 60. Setting this to 1 specifies this metric as a
     * high-resolution metric, so that CloudWatch stores the metric with sub-minute
     * resolution down to one second. Setting this to 60 specifies this metric as a
     * regular-resolution metric, which CloudWatch stores at 1-minute resolution.
     * Currently, high resolution is available only for custom metrics. For more
     * information about high-resolution metrics, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/publishingMetrics.html#high-resolution-metrics">High-Resolution
     * Metrics</a> in the <i>Amazon CloudWatch User Guide</i>. </p> <p>This field is
     * optional, if you do not specify it the default of 60 is used.</p>
     */
    inline int GetStorageResolution() const { return m_storageResolution; }
    inline bool StorageResolutionHasBeenSet() const { return m_storageResolutionHasBeenSet; }
    inline void SetStorageResolution(int value) { m_storageResolutionHasBeenSet = true; m_storageResolution = value; }
    inline MetricDatum& WithStorageResolution(int value) { SetStorageResolution(value); return *this;}
    ///@}
  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::Vector<Dimension> m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp{};
    bool m_timestampHasBeenSet = false;

    double m_value{0.0};
    bool m_valueHasBeenSet = false;

    StatisticSet m_statisticValues;
    bool m_statisticValuesHasBeenSet = false;

    Aws::Vector<double> m_values;
    bool m_valuesHasBeenSet = false;

    Aws::Vector<double> m_counts;
    bool m_countsHasBeenSet = false;

    StandardUnit m_unit{StandardUnit::NOT_SET};
    bool m_unitHasBeenSet = false;

    int m_storageResolution{0};
    bool m_storageResolutionHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
