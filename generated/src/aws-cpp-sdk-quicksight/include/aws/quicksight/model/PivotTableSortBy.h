/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/FieldSort.h>
#include <aws/quicksight/model/ColumnSort.h>
#include <aws/quicksight/model/DataPathSort.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The sort by field for the field sort options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PivotTableSortBy">AWS
   * API Reference</a></p>
   */
  class PivotTableSortBy
  {
  public:
    AWS_QUICKSIGHT_API PivotTableSortBy() = default;
    AWS_QUICKSIGHT_API PivotTableSortBy(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PivotTableSortBy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field sort (field id, direction) for the pivot table sort by options.</p>
     */
    inline const FieldSort& GetField() const { return m_field; }
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }
    template<typename FieldT = FieldSort>
    void SetField(FieldT&& value) { m_fieldHasBeenSet = true; m_field = std::forward<FieldT>(value); }
    template<typename FieldT = FieldSort>
    PivotTableSortBy& WithField(FieldT&& value) { SetField(std::forward<FieldT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The column sort (field id, direction) for the pivot table sort by
     * options.</p>
     */
    inline const ColumnSort& GetColumn() const { return m_column; }
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }
    template<typename ColumnT = ColumnSort>
    void SetColumn(ColumnT&& value) { m_columnHasBeenSet = true; m_column = std::forward<ColumnT>(value); }
    template<typename ColumnT = ColumnSort>
    PivotTableSortBy& WithColumn(ColumnT&& value) { SetColumn(std::forward<ColumnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data path sort (data path value, direction) for the pivot table sort by
     * options.</p>
     */
    inline const DataPathSort& GetDataPath() const { return m_dataPath; }
    inline bool DataPathHasBeenSet() const { return m_dataPathHasBeenSet; }
    template<typename DataPathT = DataPathSort>
    void SetDataPath(DataPathT&& value) { m_dataPathHasBeenSet = true; m_dataPath = std::forward<DataPathT>(value); }
    template<typename DataPathT = DataPathSort>
    PivotTableSortBy& WithDataPath(DataPathT&& value) { SetDataPath(std::forward<DataPathT>(value)); return *this;}
    ///@}
  private:

    FieldSort m_field;
    bool m_fieldHasBeenSet = false;

    ColumnSort m_column;
    bool m_columnHasBeenSet = false;

    DataPathSort m_dataPath;
    bool m_dataPathHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
