/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <memory>

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
    AWS_TIMESTREAMQUERY_API TimeSeriesDataPoint();
    AWS_TIMESTREAMQUERY_API TimeSeriesDataPoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API TimeSeriesDataPoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp when the measure value was collected.</p>
     */
    inline const Aws::String& GetTime() const{ return m_time; }
    inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }
    inline void SetTime(const Aws::String& value) { m_timeHasBeenSet = true; m_time = value; }
    inline void SetTime(Aws::String&& value) { m_timeHasBeenSet = true; m_time = std::move(value); }
    inline void SetTime(const char* value) { m_timeHasBeenSet = true; m_time.assign(value); }
    inline TimeSeriesDataPoint& WithTime(const Aws::String& value) { SetTime(value); return *this;}
    inline TimeSeriesDataPoint& WithTime(Aws::String&& value) { SetTime(std::move(value)); return *this;}
    inline TimeSeriesDataPoint& WithTime(const char* value) { SetTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The measure value for the data point.</p>
     */
    AWS_TIMESTREAMQUERY_API const Datum& GetValue() const;
    AWS_TIMESTREAMQUERY_API bool ValueHasBeenSet() const;
    AWS_TIMESTREAMQUERY_API void SetValue(const Datum& value);
    AWS_TIMESTREAMQUERY_API void SetValue(Datum&& value);
    AWS_TIMESTREAMQUERY_API TimeSeriesDataPoint& WithValue(const Datum& value);
    AWS_TIMESTREAMQUERY_API TimeSeriesDataPoint& WithValue(Datum&& value);
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
