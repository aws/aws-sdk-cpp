/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mwaa/model/Unit.h>
#include <aws/mwaa/model/StatisticSet.h>
#include <aws/mwaa/model/Dimension.h>
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
namespace MWAA
{
namespace Model
{

  /**
   * <p> <b>Internal only</b>. Collects Apache Airflow metrics. To learn more about
   * the metrics published to Amazon CloudWatch, see <a
   * href="https://docs.aws.amazon.com/mwaa/latest/userguide/cw-metrics.html">Amazon
   * MWAA performance metrics in Amazon CloudWatch</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/MetricDatum">AWS
   * API Reference</a></p>
   */
  class MetricDatum
  {
  public:
    AWS_MWAA_API MetricDatum() = default;
    AWS_MWAA_API MetricDatum(Aws::Utils::Json::JsonView jsonValue);
    AWS_MWAA_API MetricDatum& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MWAA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> <b>Internal only</b>. The name of the metric.</p>
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
     * <p> <b>Internal only</b>. The time the metric data was received.</p>
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
     * <p> <b>Internal only</b>. The dimensions associated with the metric.</p>
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
     * <p> <b>Internal only</b>. The value for the metric.</p>
     */
    inline double GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }
    inline MetricDatum& WithValue(double value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>Internal only</b>. The unit used to store the metric.</p>
     */
    inline Unit GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(Unit value) { m_unitHasBeenSet = true; m_unit = value; }
    inline MetricDatum& WithUnit(Unit value) { SetUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>Internal only</b>. The statistical values for the metric.</p>
     */
    inline const StatisticSet& GetStatisticValues() const { return m_statisticValues; }
    inline bool StatisticValuesHasBeenSet() const { return m_statisticValuesHasBeenSet; }
    template<typename StatisticValuesT = StatisticSet>
    void SetStatisticValues(StatisticValuesT&& value) { m_statisticValuesHasBeenSet = true; m_statisticValues = std::forward<StatisticValuesT>(value); }
    template<typename StatisticValuesT = StatisticSet>
    MetricDatum& WithStatisticValues(StatisticValuesT&& value) { SetStatisticValues(std::forward<StatisticValuesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp{};
    bool m_timestampHasBeenSet = false;

    Aws::Vector<Dimension> m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    double m_value{0.0};
    bool m_valueHasBeenSet = false;

    Unit m_unit{Unit::NOT_SET};
    bool m_unitHasBeenSet = false;

    StatisticSet m_statisticValues;
    bool m_statisticValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws
