/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-query/model/TimeSeriesDataPoint.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_TIMESTREAMQUERY_API Datum() = default;
    AWS_TIMESTREAMQUERY_API Datum(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Datum& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Indicates if the data point is a scalar value such as integer, string,
     * double, or Boolean. </p>
     */
    inline const Aws::String& GetScalarValue() const { return m_scalarValue; }
    inline bool ScalarValueHasBeenSet() const { return m_scalarValueHasBeenSet; }
    template<typename ScalarValueT = Aws::String>
    void SetScalarValue(ScalarValueT&& value) { m_scalarValueHasBeenSet = true; m_scalarValue = std::forward<ScalarValueT>(value); }
    template<typename ScalarValueT = Aws::String>
    Datum& WithScalarValue(ScalarValueT&& value) { SetScalarValue(std::forward<ScalarValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates if the data point is a timeseries data type. </p>
     */
    inline const Aws::Vector<TimeSeriesDataPoint>& GetTimeSeriesValue() const { return m_timeSeriesValue; }
    inline bool TimeSeriesValueHasBeenSet() const { return m_timeSeriesValueHasBeenSet; }
    template<typename TimeSeriesValueT = Aws::Vector<TimeSeriesDataPoint>>
    void SetTimeSeriesValue(TimeSeriesValueT&& value) { m_timeSeriesValueHasBeenSet = true; m_timeSeriesValue = std::forward<TimeSeriesValueT>(value); }
    template<typename TimeSeriesValueT = Aws::Vector<TimeSeriesDataPoint>>
    Datum& WithTimeSeriesValue(TimeSeriesValueT&& value) { SetTimeSeriesValue(std::forward<TimeSeriesValueT>(value)); return *this;}
    template<typename TimeSeriesValueT = TimeSeriesDataPoint>
    Datum& AddTimeSeriesValue(TimeSeriesValueT&& value) { m_timeSeriesValueHasBeenSet = true; m_timeSeriesValue.emplace_back(std::forward<TimeSeriesValueT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Indicates if the data point is an array. </p>
     */
    inline const Aws::Vector<Datum>& GetArrayValue() const { return m_arrayValue; }
    inline bool ArrayValueHasBeenSet() const { return m_arrayValueHasBeenSet; }
    template<typename ArrayValueT = Aws::Vector<Datum>>
    void SetArrayValue(ArrayValueT&& value) { m_arrayValueHasBeenSet = true; m_arrayValue = std::forward<ArrayValueT>(value); }
    template<typename ArrayValueT = Aws::Vector<Datum>>
    Datum& WithArrayValue(ArrayValueT&& value) { SetArrayValue(std::forward<ArrayValueT>(value)); return *this;}
    template<typename ArrayValueT = Datum>
    Datum& AddArrayValue(ArrayValueT&& value) { m_arrayValueHasBeenSet = true; m_arrayValue.emplace_back(std::forward<ArrayValueT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Indicates if the data point is a row. </p>
     */
    inline const Row& GetRowValue() const{
      return *m_rowValue;
    }
    inline bool RowValueHasBeenSet() const { return m_rowValueHasBeenSet; }
    template<typename RowValueT = Row>
    void SetRowValue(RowValueT&& value) {
      m_rowValueHasBeenSet = true; 
      m_rowValue = Aws::MakeShared<Row>("Datum", std::forward<RowValueT>(value));
    }
    template<typename RowValueT = Row>
    Datum& WithRowValue(RowValueT&& value) { SetRowValue(std::forward<RowValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates if the data point is null. </p>
     */
    inline bool GetNullValue() const { return m_nullValue; }
    inline bool NullValueHasBeenSet() const { return m_nullValueHasBeenSet; }
    inline void SetNullValue(bool value) { m_nullValueHasBeenSet = true; m_nullValue = value; }
    inline Datum& WithNullValue(bool value) { SetNullValue(value); return *this;}
    ///@}
  private:

    Aws::String m_scalarValue;
    bool m_scalarValueHasBeenSet = false;

    Aws::Vector<TimeSeriesDataPoint> m_timeSeriesValue;
    bool m_timeSeriesValueHasBeenSet = false;

    Aws::Vector<Datum> m_arrayValue;
    bool m_arrayValueHasBeenSet = false;

    std::shared_ptr<Row> m_rowValue;
    bool m_rowValueHasBeenSet = false;

    bool m_nullValue{false};
    bool m_nullValueHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
