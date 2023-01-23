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
   * <p>The paginated report options for a table visual.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TablePaginatedReportOptions">AWS
   * API Reference</a></p>
   */
  class TablePaginatedReportOptions
  {
  public:
    AWS_QUICKSIGHT_API TablePaginatedReportOptions();
    AWS_QUICKSIGHT_API TablePaginatedReportOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TablePaginatedReportOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The visibility of printing table overflow across pages.</p>
     */
    inline const Visibility& GetVerticalOverflowVisibility() const{ return m_verticalOverflowVisibility; }

    /**
     * <p>The visibility of printing table overflow across pages.</p>
     */
    inline bool VerticalOverflowVisibilityHasBeenSet() const { return m_verticalOverflowVisibilityHasBeenSet; }

    /**
     * <p>The visibility of printing table overflow across pages.</p>
     */
    inline void SetVerticalOverflowVisibility(const Visibility& value) { m_verticalOverflowVisibilityHasBeenSet = true; m_verticalOverflowVisibility = value; }

    /**
     * <p>The visibility of printing table overflow across pages.</p>
     */
    inline void SetVerticalOverflowVisibility(Visibility&& value) { m_verticalOverflowVisibilityHasBeenSet = true; m_verticalOverflowVisibility = std::move(value); }

    /**
     * <p>The visibility of printing table overflow across pages.</p>
     */
    inline TablePaginatedReportOptions& WithVerticalOverflowVisibility(const Visibility& value) { SetVerticalOverflowVisibility(value); return *this;}

    /**
     * <p>The visibility of printing table overflow across pages.</p>
     */
    inline TablePaginatedReportOptions& WithVerticalOverflowVisibility(Visibility&& value) { SetVerticalOverflowVisibility(std::move(value)); return *this;}


    /**
     * <p>The visibility of repeating header rows on each page.</p>
     */
    inline const Visibility& GetOverflowColumnHeaderVisibility() const{ return m_overflowColumnHeaderVisibility; }

    /**
     * <p>The visibility of repeating header rows on each page.</p>
     */
    inline bool OverflowColumnHeaderVisibilityHasBeenSet() const { return m_overflowColumnHeaderVisibilityHasBeenSet; }

    /**
     * <p>The visibility of repeating header rows on each page.</p>
     */
    inline void SetOverflowColumnHeaderVisibility(const Visibility& value) { m_overflowColumnHeaderVisibilityHasBeenSet = true; m_overflowColumnHeaderVisibility = value; }

    /**
     * <p>The visibility of repeating header rows on each page.</p>
     */
    inline void SetOverflowColumnHeaderVisibility(Visibility&& value) { m_overflowColumnHeaderVisibilityHasBeenSet = true; m_overflowColumnHeaderVisibility = std::move(value); }

    /**
     * <p>The visibility of repeating header rows on each page.</p>
     */
    inline TablePaginatedReportOptions& WithOverflowColumnHeaderVisibility(const Visibility& value) { SetOverflowColumnHeaderVisibility(value); return *this;}

    /**
     * <p>The visibility of repeating header rows on each page.</p>
     */
    inline TablePaginatedReportOptions& WithOverflowColumnHeaderVisibility(Visibility&& value) { SetOverflowColumnHeaderVisibility(std::move(value)); return *this;}

  private:

    Visibility m_verticalOverflowVisibility;
    bool m_verticalOverflowVisibilityHasBeenSet = false;

    Visibility m_overflowColumnHeaderVisibility;
    bool m_overflowColumnHeaderVisibilityHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
