/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/timestream-query/model/ScalarType.h>
#include <aws/timestream-query/model/ColumnInfo.h>
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
  class ColumnInfo;

  /**
   * <p>Contains the data type of a column in a query result set. The data type can
   * be scalar or complex. The supported scalar data types are integers, Boolean,
   * string, double, timestamp, date, time, and intervals. The supported complex data
   * types are arrays, rows, and timeseries.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/Type">AWS
   * API Reference</a></p>
   */
  class Type
  {
  public:
    AWS_TIMESTREAMQUERY_API Type() = default;
    AWS_TIMESTREAMQUERY_API Type(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Type& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates if the column is of type string, integer, Boolean, double,
     * timestamp, date, time. For more information, see <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/supported-data-types.html">Supported
     * data types</a>.</p>
     */
    inline ScalarType GetScalarType() const { return m_scalarType; }
    inline bool ScalarTypeHasBeenSet() const { return m_scalarTypeHasBeenSet; }
    inline void SetScalarType(ScalarType value) { m_scalarTypeHasBeenSet = true; m_scalarType = value; }
    inline Type& WithScalarType(ScalarType value) { SetScalarType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the column is an array.</p>
     */
    inline const ColumnInfo& GetArrayColumnInfo() const{
      return *m_arrayColumnInfo;
    }
    inline bool ArrayColumnInfoHasBeenSet() const { return m_arrayColumnInfoHasBeenSet; }
    template<typename ArrayColumnInfoT = ColumnInfo>
    void SetArrayColumnInfo(ArrayColumnInfoT&& value) {
      m_arrayColumnInfoHasBeenSet = true; 
      m_arrayColumnInfo = Aws::MakeShared<ColumnInfo>("Type", std::forward<ArrayColumnInfoT>(value));
    }
    template<typename ArrayColumnInfoT = ColumnInfo>
    Type& WithArrayColumnInfo(ArrayColumnInfoT&& value) { SetArrayColumnInfo(std::forward<ArrayColumnInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the column is a timeseries data type.</p>
     */
    inline const ColumnInfo& GetTimeSeriesMeasureValueColumnInfo() const{
      return *m_timeSeriesMeasureValueColumnInfo;
    }
    inline bool TimeSeriesMeasureValueColumnInfoHasBeenSet() const { return m_timeSeriesMeasureValueColumnInfoHasBeenSet; }
    template<typename TimeSeriesMeasureValueColumnInfoT = ColumnInfo>
    void SetTimeSeriesMeasureValueColumnInfo(TimeSeriesMeasureValueColumnInfoT&& value) {
      m_timeSeriesMeasureValueColumnInfoHasBeenSet = true; 
      m_timeSeriesMeasureValueColumnInfo = Aws::MakeShared<ColumnInfo>("Type", std::forward<TimeSeriesMeasureValueColumnInfoT>(value));
    }
    template<typename TimeSeriesMeasureValueColumnInfoT = ColumnInfo>
    Type& WithTimeSeriesMeasureValueColumnInfo(TimeSeriesMeasureValueColumnInfoT&& value) { SetTimeSeriesMeasureValueColumnInfo(std::forward<TimeSeriesMeasureValueColumnInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the column is a row.</p>
     */
    inline const Aws::Vector<ColumnInfo>& GetRowColumnInfo() const { return m_rowColumnInfo; }
    inline bool RowColumnInfoHasBeenSet() const { return m_rowColumnInfoHasBeenSet; }
    template<typename RowColumnInfoT = Aws::Vector<ColumnInfo>>
    void SetRowColumnInfo(RowColumnInfoT&& value) { m_rowColumnInfoHasBeenSet = true; m_rowColumnInfo = std::forward<RowColumnInfoT>(value); }
    template<typename RowColumnInfoT = Aws::Vector<ColumnInfo>>
    Type& WithRowColumnInfo(RowColumnInfoT&& value) { SetRowColumnInfo(std::forward<RowColumnInfoT>(value)); return *this;}
    template<typename RowColumnInfoT = ColumnInfo>
    Type& AddRowColumnInfo(RowColumnInfoT&& value) { m_rowColumnInfoHasBeenSet = true; m_rowColumnInfo.emplace_back(std::forward<RowColumnInfoT>(value)); return *this; }
    ///@}
  private:

    ScalarType m_scalarType{ScalarType::NOT_SET};
    bool m_scalarTypeHasBeenSet = false;

    std::shared_ptr<ColumnInfo> m_arrayColumnInfo;
    bool m_arrayColumnInfoHasBeenSet = false;

    std::shared_ptr<ColumnInfo> m_timeSeriesMeasureValueColumnInfo;
    bool m_timeSeriesMeasureValueColumnInfoHasBeenSet = false;

    Aws::Vector<ColumnInfo> m_rowColumnInfo;
    bool m_rowColumnInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
