/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/FieldSort.h>
#include <aws/quicksight/model/ColumnSort.h>
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
   * <p>The field sort options in a chart configuration.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FieldSortOptions">AWS
   * API Reference</a></p>
   */
  class FieldSortOptions
  {
  public:
    AWS_QUICKSIGHT_API FieldSortOptions() = default;
    AWS_QUICKSIGHT_API FieldSortOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FieldSortOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The sort configuration for a field in a field well.</p>
     */
    inline const FieldSort& GetFieldSort() const { return m_fieldSort; }
    inline bool FieldSortHasBeenSet() const { return m_fieldSortHasBeenSet; }
    template<typename FieldSortT = FieldSort>
    void SetFieldSort(FieldSortT&& value) { m_fieldSortHasBeenSet = true; m_fieldSort = std::forward<FieldSortT>(value); }
    template<typename FieldSortT = FieldSort>
    FieldSortOptions& WithFieldSort(FieldSortT&& value) { SetFieldSort(std::forward<FieldSortT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort configuration for a column that is not used in a field well.</p>
     */
    inline const ColumnSort& GetColumnSort() const { return m_columnSort; }
    inline bool ColumnSortHasBeenSet() const { return m_columnSortHasBeenSet; }
    template<typename ColumnSortT = ColumnSort>
    void SetColumnSort(ColumnSortT&& value) { m_columnSortHasBeenSet = true; m_columnSort = std::forward<ColumnSortT>(value); }
    template<typename ColumnSortT = ColumnSort>
    FieldSortOptions& WithColumnSort(ColumnSortT&& value) { SetColumnSort(std::forward<ColumnSortT>(value)); return *this;}
    ///@}
  private:

    FieldSort m_fieldSort;
    bool m_fieldSortHasBeenSet = false;

    ColumnSort m_columnSort;
    bool m_columnSortHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
