/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/DateTime.h>
#include <aws/monitoring/model/StandardUnit.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace CloudWatch
{
namespace Model
{

  /**
   * <p>Encapsulates the statistical data that CloudWatch computes from metric
   * data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/Datapoint">AWS
   * API Reference</a></p>
   */
  class Datapoint
  {
  public:
    AWS_CLOUDWATCH_API Datapoint();
    AWS_CLOUDWATCH_API Datapoint(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDWATCH_API Datapoint& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The time stamp used for the data point.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }
    inline Datapoint& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}
    inline Datapoint& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of metric values that contributed to the aggregate value of this
     * data point.</p>
     */
    inline double GetSampleCount() const{ return m_sampleCount; }
    inline bool SampleCountHasBeenSet() const { return m_sampleCountHasBeenSet; }
    inline void SetSampleCount(double value) { m_sampleCountHasBeenSet = true; m_sampleCount = value; }
    inline Datapoint& WithSampleCount(double value) { SetSampleCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The average of the metric values that correspond to the data point.</p>
     */
    inline double GetAverage() const{ return m_average; }
    inline bool AverageHasBeenSet() const { return m_averageHasBeenSet; }
    inline void SetAverage(double value) { m_averageHasBeenSet = true; m_average = value; }
    inline Datapoint& WithAverage(double value) { SetAverage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sum of the metric values for the data point.</p>
     */
    inline double GetSum() const{ return m_sum; }
    inline bool SumHasBeenSet() const { return m_sumHasBeenSet; }
    inline void SetSum(double value) { m_sumHasBeenSet = true; m_sum = value; }
    inline Datapoint& WithSum(double value) { SetSum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum metric value for the data point.</p>
     */
    inline double GetMinimum() const{ return m_minimum; }
    inline bool MinimumHasBeenSet() const { return m_minimumHasBeenSet; }
    inline void SetMinimum(double value) { m_minimumHasBeenSet = true; m_minimum = value; }
    inline Datapoint& WithMinimum(double value) { SetMinimum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum metric value for the data point.</p>
     */
    inline double GetMaximum() const{ return m_maximum; }
    inline bool MaximumHasBeenSet() const { return m_maximumHasBeenSet; }
    inline void SetMaximum(double value) { m_maximumHasBeenSet = true; m_maximum = value; }
    inline Datapoint& WithMaximum(double value) { SetMaximum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The standard unit for the data point.</p>
     */
    inline const StandardUnit& GetUnit() const{ return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(const StandardUnit& value) { m_unitHasBeenSet = true; m_unit = value; }
    inline void SetUnit(StandardUnit&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }
    inline Datapoint& WithUnit(const StandardUnit& value) { SetUnit(value); return *this;}
    inline Datapoint& WithUnit(StandardUnit&& value) { SetUnit(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentile statistic for the data point.</p>
     */
    inline const Aws::Map<Aws::String, double>& GetExtendedStatistics() const{ return m_extendedStatistics; }
    inline bool ExtendedStatisticsHasBeenSet() const { return m_extendedStatisticsHasBeenSet; }
    inline void SetExtendedStatistics(const Aws::Map<Aws::String, double>& value) { m_extendedStatisticsHasBeenSet = true; m_extendedStatistics = value; }
    inline void SetExtendedStatistics(Aws::Map<Aws::String, double>&& value) { m_extendedStatisticsHasBeenSet = true; m_extendedStatistics = std::move(value); }
    inline Datapoint& WithExtendedStatistics(const Aws::Map<Aws::String, double>& value) { SetExtendedStatistics(value); return *this;}
    inline Datapoint& WithExtendedStatistics(Aws::Map<Aws::String, double>&& value) { SetExtendedStatistics(std::move(value)); return *this;}
    inline Datapoint& AddExtendedStatistics(const Aws::String& key, double value) { m_extendedStatisticsHasBeenSet = true; m_extendedStatistics.emplace(key, value); return *this; }
    inline Datapoint& AddExtendedStatistics(Aws::String&& key, double value) { m_extendedStatisticsHasBeenSet = true; m_extendedStatistics.emplace(std::move(key), value); return *this; }
    inline Datapoint& AddExtendedStatistics(const char* key, double value) { m_extendedStatisticsHasBeenSet = true; m_extendedStatistics.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;

    double m_sampleCount;
    bool m_sampleCountHasBeenSet = false;

    double m_average;
    bool m_averageHasBeenSet = false;

    double m_sum;
    bool m_sumHasBeenSet = false;

    double m_minimum;
    bool m_minimumHasBeenSet = false;

    double m_maximum;
    bool m_maximumHasBeenSet = false;

    StandardUnit m_unit;
    bool m_unitHasBeenSet = false;

    Aws::Map<Aws::String, double> m_extendedStatistics;
    bool m_extendedStatisticsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
