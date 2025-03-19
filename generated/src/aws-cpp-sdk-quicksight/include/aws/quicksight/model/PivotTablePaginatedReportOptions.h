/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Visibility.h>
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
   * <p>The paginated report options for a pivot table visual.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PivotTablePaginatedReportOptions">AWS
   * API Reference</a></p>
   */
  class PivotTablePaginatedReportOptions
  {
  public:
    AWS_QUICKSIGHT_API PivotTablePaginatedReportOptions() = default;
    AWS_QUICKSIGHT_API PivotTablePaginatedReportOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PivotTablePaginatedReportOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The visibility of the printing table overflow across pages.</p>
     */
    inline Visibility GetVerticalOverflowVisibility() const { return m_verticalOverflowVisibility; }
    inline bool VerticalOverflowVisibilityHasBeenSet() const { return m_verticalOverflowVisibilityHasBeenSet; }
    inline void SetVerticalOverflowVisibility(Visibility value) { m_verticalOverflowVisibilityHasBeenSet = true; m_verticalOverflowVisibility = value; }
    inline PivotTablePaginatedReportOptions& WithVerticalOverflowVisibility(Visibility value) { SetVerticalOverflowVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visibility of the repeating header rows on each page.</p>
     */
    inline Visibility GetOverflowColumnHeaderVisibility() const { return m_overflowColumnHeaderVisibility; }
    inline bool OverflowColumnHeaderVisibilityHasBeenSet() const { return m_overflowColumnHeaderVisibilityHasBeenSet; }
    inline void SetOverflowColumnHeaderVisibility(Visibility value) { m_overflowColumnHeaderVisibilityHasBeenSet = true; m_overflowColumnHeaderVisibility = value; }
    inline PivotTablePaginatedReportOptions& WithOverflowColumnHeaderVisibility(Visibility value) { SetOverflowColumnHeaderVisibility(value); return *this;}
    ///@}
  private:

    Visibility m_verticalOverflowVisibility{Visibility::NOT_SET};
    bool m_verticalOverflowVisibilityHasBeenSet = false;

    Visibility m_overflowColumnHeaderVisibility{Visibility::NOT_SET};
    bool m_overflowColumnHeaderVisibilityHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
