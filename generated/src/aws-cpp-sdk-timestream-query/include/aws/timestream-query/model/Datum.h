/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-query/model/TimeSeriesDataPoint.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class Row;
  class TimeSeriesDataPoint;

  /**
   * <p> Datum represents a single data point in a query result. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/Datum">AWS
   * API Reference</a></p>
   */
  class Datum
  {
  public:
    AWS_TIMESTREAMQUERY_API Datum();
    AWS_TIMESTREAMQUERY_API Datum(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Datum& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Indicates if the data point is a scalar value such as integer, string,
     * double, or Boolean. </p>
     */
    inline const Aws::String& GetScalarValue() const{ return m_scalarValue; }

    /**
     * <p> Indicates if the data point is a scalar value such as integer, string,
     * double, or Boolean. </p>
     */
    inline bool ScalarValueHasBeenSet() const { return m_scalarValueHasBeenSet; }

    /**
     * <p> Indicates if the data point is a scalar value such as integer, string,
     * double, or Boolean. </p>
     */
    inline void SetScalarValue(const Aws::String& value) { m_scalarValueHasBeenSet = true; m_scalarValue = value; }

    /**
     * <p> Indicates if the data point is a scalar value such as integer, string,
     * double, or Boolean. </p>
     */
    inline void SetScalarValue(Aws::String&& value) { m_scalarValueHasBeenSet = true; m_scalarValue = std::move(value); }

    /**
     * <p> Indicates if the data point is a scalar value such as integer, string,
     * double, or Boolean. </p>
     */
    inline void SetScalarValue(const char* value) { m_scalarValueHasBeenSet = true; m_scalarValue.assign(value); }

    /**
     * <p> Indicates if the data point is a scalar value such as integer, string,
     * double, or Boolean. </p>
     */
    inline Datum& WithScalarValue(const Aws::String& value) { SetScalarValue(value); return *this;}

    /**
     * <p> Indicates if the data point is a scalar value such as integer, string,
     * double, or Boolean. </p>
     */
    inline Datum& WithScalarValue(Aws::String&& value) { SetScalarValue(std::move(value)); return *this;}

    /**
     * <p> Indicates if the data point is a scalar value such as integer, string,
     * double, or Boolean. </p>
     */
    inline Datum& WithScalarValue(const char* value) { SetScalarValue(value); return *this;}


    /**
     * <p> Indicates if the data point is a timeseries data type. </p>
     */
    inline const Aws::Vector<TimeSeriesDataPoint>& GetTimeSeriesValue() const{ return m_timeSeriesValue; }

    /**
     * <p> Indicates if the data point is a timeseries data type. </p>
     */
    inline bool TimeSeriesValueHasBeenSet() const { return m_timeSeriesValueHasBeenSet; }

    /**
     * <p> Indicates if the data point is a timeseries data type. </p>
     */
    inline void SetTimeSeriesValue(const Aws::Vector<TimeSeriesDataPoint>& value) { m_timeSeriesValueHasBeenSet = true; m_timeSeriesValue = value; }

    /**
     * <p> Indicates if the data point is a timeseries data type. </p>
     */
    inline void SetTimeSeriesValue(Aws::Vector<TimeSeriesDataPoint>&& value) { m_timeSeriesValueHasBeenSet = true; m_timeSeriesValue = std::move(value); }

    /**
     * <p> Indicates if the data point is a timeseries data type. </p>
     */
    inline Datum& WithTimeSeriesValue(const Aws::Vector<TimeSeriesDataPoint>& value) { SetTimeSeriesValue(value); return *this;}

    /**
     * <p> Indicates if the data point is a timeseries data type. </p>
     */
    inline Datum& WithTimeSeriesValue(Aws::Vector<TimeSeriesDataPoint>&& value) { SetTimeSeriesValue(std::move(value)); return *this;}

    /**
     * <p> Indicates if the data point is a timeseries data type. </p>
     */
    inline Datum& AddTimeSeriesValue(const TimeSeriesDataPoint& value) { m_timeSeriesValueHasBeenSet = true; m_timeSeriesValue.push_back(value); return *this; }

    /**
     * <p> Indicates if the data point is a timeseries data type. </p>
     */
    inline Datum& AddTimeSeriesValue(TimeSeriesDataPoint&& value) { m_timeSeriesValueHasBeenSet = true; m_timeSeriesValue.push_back(std::move(value)); return *this; }


    /**
     * <p> Indicates if the data point is an array. </p>
     */
    inline const Aws::Vector<Datum>& GetArrayValue() const{ return m_arrayValue; }

    /**
     * <p> Indicates if the data point is an array. </p>
     */
    inline bool ArrayValueHasBeenSet() const { return m_arrayValueHasBeenSet; }

    /**
     * <p> Indicates if the data point is an array. </p>
     */
    inline void SetArrayValue(const Aws::Vector<Datum>& value) { m_arrayValueHasBeenSet = true; m_arrayValue = value; }

    /**
     * <p> Indicates if the data point is an array. </p>
     */
    inline void SetArrayValue(Aws::Vector<Datum>&& value) { m_arrayValueHasBeenSet = true; m_arrayValue = std::move(value); }

    /**
     * <p> Indicates if the data point is an array. </p>
     */
    inline Datum& WithArrayValue(const Aws::Vector<Datum>& value) { SetArrayValue(value); return *this;}

    /**
     * <p> Indicates if the data point is an array. </p>
     */
    inline Datum& WithArrayValue(Aws::Vector<Datum>&& value) { SetArrayValue(std::move(value)); return *this;}

    /**
     * <p> Indicates if the data point is an array. </p>
     */
    inline Datum& AddArrayValue(const Datum& value) { m_arrayValueHasBeenSet = true; m_arrayValue.push_back(value); return *this; }

    /**
     * <p> Indicates if the data point is an array. </p>
     */
    inline Datum& AddArrayValue(Datum&& value) { m_arrayValueHasBeenSet = true; m_arrayValue.push_back(std::move(value)); return *this; }


    /**
     * <p> Indicates if the data point is a row. </p>
     */
    AWS_TIMESTREAMQUERY_API const Row& GetRowValue() const;

    /**
     * <p> Indicates if the data point is a row. </p>
     */
    AWS_TIMESTREAMQUERY_API bool RowValueHasBeenSet() const;

    /**
     * <p> Indicates if the data point is a row. </p>
     */
    AWS_TIMESTREAMQUERY_API void SetRowValue(const Row& value);

    /**
     * <p> Indicates if the data point is a row. </p>
     */
    AWS_TIMESTREAMQUERY_API void SetRowValue(Row&& value);

    /**
     * <p> Indicates if the data point is a row. </p>
     */
    AWS_TIMESTREAMQUERY_API Datum& WithRowValue(const Row& value);

    /**
     * <p> Indicates if the data point is a row. </p>
     */
    AWS_TIMESTREAMQUERY_API Datum& WithRowValue(Row&& value);


    /**
     * <p> Indicates if the data point is null. </p>
     */
    inline bool GetNullValue() const{ return m_nullValue; }

    /**
     * <p> Indicates if the data point is null. </p>
     */
    inline bool NullValueHasBeenSet() const { return m_nullValueHasBeenSet; }

    /**
     * <p> Indicates if the data point is null. </p>
     */
    inline void SetNullValue(bool value) { m_nullValueHasBeenSet = true; m_nullValue = value; }

    /**
     * <p> Indicates if the data point is null. </p>
     */
    inline Datum& WithNullValue(bool value) { SetNullValue(value); return *this;}

  private:

    Aws::String m_scalarValue;
    bool m_scalarValueHasBeenSet = false;

    Aws::Vector<TimeSeriesDataPoint> m_timeSeriesValue;
    bool m_timeSeriesValueHasBeenSet = false;

    Aws::Vector<Datum> m_arrayValue;
    bool m_arrayValueHasBeenSet = false;

    std::shared_ptr<Row> m_rowValue;
    bool m_rowValueHasBeenSet = false;

    bool m_nullValue;
    bool m_nullValueHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
