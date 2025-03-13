/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-write/model/MeasureValueType.h>
#include <aws/timestream-write/model/TimeUnit.h>
#include <aws/timestream-write/model/Dimension.h>
#include <aws/timestream-write/model/MeasureValue.h>
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
namespace TimestreamWrite
{
namespace Model
{

  /**
   * <p>Represents a time-series data point being written into Timestream. Each
   * record contains an array of dimensions. Dimensions represent the metadata
   * attributes of a time-series data point, such as the instance name or
   * Availability Zone of an EC2 instance. A record also contains the measure name,
   * which is the name of the measure being collected (for example, the CPU
   * utilization of an EC2 instance). Additionally, a record contains the measure
   * value and the value type, which is the data type of the measure value. Also, the
   * record contains the timestamp of when the measure was collected and the
   * timestamp unit, which represents the granularity of the timestamp. </p> <p>
   * Records have a <code>Version</code> field, which is a 64-bit <code>long</code>
   * that you can use for updating data points. Writes of a duplicate record with the
   * same dimension, timestamp, and measure name but different measure value will
   * only succeed if the <code>Version</code> attribute of the record in the write
   * request is higher than that of the existing record. Timestream defaults to a
   * <code>Version</code> of <code>1</code> for records without the
   * <code>Version</code> field. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/Record">AWS
   * API Reference</a></p>
   */
  class Record
  {
  public:
    AWS_TIMESTREAMWRITE_API Record() = default;
    AWS_TIMESTREAMWRITE_API Record(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API Record& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains the list of dimensions for time-series data points.</p>
     */
    inline const Aws::Vector<Dimension>& GetDimensions() const { return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    template<typename DimensionsT = Aws::Vector<Dimension>>
    void SetDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::forward<DimensionsT>(value); }
    template<typename DimensionsT = Aws::Vector<Dimension>>
    Record& WithDimensions(DimensionsT&& value) { SetDimensions(std::forward<DimensionsT>(value)); return *this;}
    template<typename DimensionsT = Dimension>
    Record& AddDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace_back(std::forward<DimensionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Measure represents the data attribute of the time series. For example, the
     * CPU utilization of an EC2 instance or the RPM of a wind turbine are measures.
     * </p>
     */
    inline const Aws::String& GetMeasureName() const { return m_measureName; }
    inline bool MeasureNameHasBeenSet() const { return m_measureNameHasBeenSet; }
    template<typename MeasureNameT = Aws::String>
    void SetMeasureName(MeasureNameT&& value) { m_measureNameHasBeenSet = true; m_measureName = std::forward<MeasureNameT>(value); }
    template<typename MeasureNameT = Aws::String>
    Record& WithMeasureName(MeasureNameT&& value) { SetMeasureName(std::forward<MeasureNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Contains the measure value for the time-series data point. </p>
     */
    inline const Aws::String& GetMeasureValue() const { return m_measureValue; }
    inline bool MeasureValueHasBeenSet() const { return m_measureValueHasBeenSet; }
    template<typename MeasureValueT = Aws::String>
    void SetMeasureValue(MeasureValueT&& value) { m_measureValueHasBeenSet = true; m_measureValue = std::forward<MeasureValueT>(value); }
    template<typename MeasureValueT = Aws::String>
    Record& WithMeasureValue(MeasureValueT&& value) { SetMeasureValue(std::forward<MeasureValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Contains the data type of the measure value for the time-series data point.
     * Default type is <code>DOUBLE</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/writes.html#writes.data-types">Data
     * types</a>.</p>
     */
    inline MeasureValueType GetMeasureValueType() const { return m_measureValueType; }
    inline bool MeasureValueTypeHasBeenSet() const { return m_measureValueTypeHasBeenSet; }
    inline void SetMeasureValueType(MeasureValueType value) { m_measureValueTypeHasBeenSet = true; m_measureValueType = value; }
    inline Record& WithMeasureValueType(MeasureValueType value) { SetMeasureValueType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Contains the time at which the measure value for the data point was
     * collected. The time value plus the unit provides the time elapsed since the
     * epoch. For example, if the time value is <code>12345</code> and the unit is
     * <code>ms</code>, then <code>12345 ms</code> have elapsed since the epoch. </p>
     */
    inline const Aws::String& GetTime() const { return m_time; }
    inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }
    template<typename TimeT = Aws::String>
    void SetTime(TimeT&& value) { m_timeHasBeenSet = true; m_time = std::forward<TimeT>(value); }
    template<typename TimeT = Aws::String>
    Record& WithTime(TimeT&& value) { SetTime(std::forward<TimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The granularity of the timestamp unit. It indicates if the time value is in
     * seconds, milliseconds, nanoseconds, or other supported values. Default is
     * <code>MILLISECONDS</code>. </p>
     */
    inline TimeUnit GetTimeUnit() const { return m_timeUnit; }
    inline bool TimeUnitHasBeenSet() const { return m_timeUnitHasBeenSet; }
    inline void SetTimeUnit(TimeUnit value) { m_timeUnitHasBeenSet = true; m_timeUnit = value; }
    inline Record& WithTimeUnit(TimeUnit value) { SetTimeUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>64-bit attribute used for record updates. Write requests for duplicate data
     * with a higher version number will update the existing measure value and version.
     * In cases where the measure value is the same, <code>Version</code> will still be
     * updated. Default value is <code>1</code>.</p>  <p> <code>Version</code>
     * must be <code>1</code> or greater, or you will receive a
     * <code>ValidationException</code> error.</p> 
     */
    inline long long GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(long long value) { m_versionHasBeenSet = true; m_version = value; }
    inline Record& WithVersion(long long value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Contains the list of MeasureValue for time-series data points. </p> <p> This
     * is only allowed for type <code>MULTI</code>. For scalar values, use
     * <code>MeasureValue</code> attribute of the record directly. </p>
     */
    inline const Aws::Vector<MeasureValue>& GetMeasureValues() const { return m_measureValues; }
    inline bool MeasureValuesHasBeenSet() const { return m_measureValuesHasBeenSet; }
    template<typename MeasureValuesT = Aws::Vector<MeasureValue>>
    void SetMeasureValues(MeasureValuesT&& value) { m_measureValuesHasBeenSet = true; m_measureValues = std::forward<MeasureValuesT>(value); }
    template<typename MeasureValuesT = Aws::Vector<MeasureValue>>
    Record& WithMeasureValues(MeasureValuesT&& value) { SetMeasureValues(std::forward<MeasureValuesT>(value)); return *this;}
    template<typename MeasureValuesT = MeasureValue>
    Record& AddMeasureValues(MeasureValuesT&& value) { m_measureValuesHasBeenSet = true; m_measureValues.emplace_back(std::forward<MeasureValuesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Dimension> m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    Aws::String m_measureName;
    bool m_measureNameHasBeenSet = false;

    Aws::String m_measureValue;
    bool m_measureValueHasBeenSet = false;

    MeasureValueType m_measureValueType{MeasureValueType::NOT_SET};
    bool m_measureValueTypeHasBeenSet = false;

    Aws::String m_time;
    bool m_timeHasBeenSet = false;

    TimeUnit m_timeUnit{TimeUnit::NOT_SET};
    bool m_timeUnitHasBeenSet = false;

    long long m_version{0};
    bool m_versionHasBeenSet = false;

    Aws::Vector<MeasureValue> m_measureValues;
    bool m_measureValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
