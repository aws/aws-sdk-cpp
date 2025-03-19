/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSAllocator.h>
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
namespace TimestreamQuery
{
namespace Model
{
  class Datum;

  /**
   * <p>The timeseries data type represents the values of a measure over time. A time
   * series is an array of rows of timestamps and measure values, with rows sorted in
   * ascending order of time. A TimeSeriesDataPoint is a single data point in the
   * time series. It represents a tuple of (time, measure value) in a time series.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/TimeSeriesDataPoint">AWS
   * API Reference</a></p>
   */
  class TimeSeriesDataPoint
  {
  public:
    AWS_TIMESTREAMQUERY_API TimeSeriesDataPoint() = default;
    AWS_TIMESTREAMQUERY_API TimeSeriesDataPoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API TimeSeriesDataPoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp when the measure value was collected.</p>
     */
    inline const Aws::String& GetTime() const { return m_time; }
    inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }
    template<typename TimeT = Aws::String>
    void SetTime(TimeT&& value) { m_timeHasBeenSet = true; m_time = std::forward<TimeT>(value); }
    template<typename TimeT = Aws::String>
    TimeSeriesDataPoint& WithTime(TimeT&& value) { SetTime(std::forward<TimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The measure value for the data point.</p>
     */
    inline const Datum& GetValue() const{
      return *m_value;
    }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Datum>
    void SetValue(ValueT&& value) {
      m_valueHasBeenSet = true; 
      m_value = Aws::MakeShared<Datum>("TimeSeriesDataPoint", std::forward<ValueT>(value));
    }
    template<typename ValueT = Datum>
    TimeSeriesDataPoint& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_time;
    bool m_timeHasBeenSet = false;

    std::shared_ptr<Datum> m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
