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
    AWS_MWAA_API MetricDatum();
    AWS_MWAA_API MetricDatum(Aws::Utils::Json::JsonView jsonValue);
    AWS_MWAA_API MetricDatum& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MWAA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> <b>Internal only</b>. The name of the metric.</p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }
    inline MetricDatum& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}
    inline MetricDatum& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}
    inline MetricDatum& WithMetricName(const char* value) { SetMetricName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>Internal only</b>. The time the metric data was received.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }
    inline MetricDatum& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}
    inline MetricDatum& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>Internal only</b>. The dimensions associated with the metric.</p>
     */
    inline const Aws::Vector<Dimension>& GetDimensions() const{ return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    inline void SetDimensions(const Aws::Vector<Dimension>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }
    inline void SetDimensions(Aws::Vector<Dimension>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }
    inline MetricDatum& WithDimensions(const Aws::Vector<Dimension>& value) { SetDimensions(value); return *this;}
    inline MetricDatum& WithDimensions(Aws::Vector<Dimension>&& value) { SetDimensions(std::move(value)); return *this;}
    inline MetricDatum& AddDimensions(const Dimension& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(value); return *this; }
    inline MetricDatum& AddDimensions(Dimension&& value) { m_dimensionsHasBeenSet = true; m_dimensions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> <b>Internal only</b>. The value for the metric.</p>
     */
    inline double GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }
    inline MetricDatum& WithValue(double value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>Internal only</b>. The unit used to store the metric.</p>
     */
    inline const Unit& GetUnit() const{ return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(const Unit& value) { m_unitHasBeenSet = true; m_unit = value; }
    inline void SetUnit(Unit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }
    inline MetricDatum& WithUnit(const Unit& value) { SetUnit(value); return *this;}
    inline MetricDatum& WithUnit(Unit&& value) { SetUnit(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>Internal only</b>. The statistical values for the metric.</p>
     */
    inline const StatisticSet& GetStatisticValues() const{ return m_statisticValues; }
    inline bool StatisticValuesHasBeenSet() const { return m_statisticValuesHasBeenSet; }
    inline void SetStatisticValues(const StatisticSet& value) { m_statisticValuesHasBeenSet = true; m_statisticValues = value; }
    inline void SetStatisticValues(StatisticSet&& value) { m_statisticValuesHasBeenSet = true; m_statisticValues = std::move(value); }
    inline MetricDatum& WithStatisticValues(const StatisticSet& value) { SetStatisticValues(value); return *this;}
    inline MetricDatum& WithStatisticValues(StatisticSet&& value) { SetStatisticValues(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;

    Aws::Vector<Dimension> m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    double m_value;
    bool m_valueHasBeenSet = false;

    Unit m_unit;
    bool m_unitHasBeenSet = false;

    StatisticSet m_statisticValues;
    bool m_statisticValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws
