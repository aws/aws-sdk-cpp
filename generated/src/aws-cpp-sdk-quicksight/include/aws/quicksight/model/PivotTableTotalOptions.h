/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/SubtotalOptions.h>
#include <aws/quicksight/model/PivotTotalOptions.h>
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
   * <p>The total options for a pivot table visual.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PivotTableTotalOptions">AWS
   * API Reference</a></p>
   */
  class PivotTableTotalOptions
  {
  public:
    AWS_QUICKSIGHT_API PivotTableTotalOptions();
    AWS_QUICKSIGHT_API PivotTableTotalOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PivotTableTotalOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The row subtotal options.</p>
     */
    inline const SubtotalOptions& GetRowSubtotalOptions() const{ return m_rowSubtotalOptions; }

    /**
     * <p>The row subtotal options.</p>
     */
    inline bool RowSubtotalOptionsHasBeenSet() const { return m_rowSubtotalOptionsHasBeenSet; }

    /**
     * <p>The row subtotal options.</p>
     */
    inline void SetRowSubtotalOptions(const SubtotalOptions& value) { m_rowSubtotalOptionsHasBeenSet = true; m_rowSubtotalOptions = value; }

    /**
     * <p>The row subtotal options.</p>
     */
    inline void SetRowSubtotalOptions(SubtotalOptions&& value) { m_rowSubtotalOptionsHasBeenSet = true; m_rowSubtotalOptions = std::move(value); }

    /**
     * <p>The row subtotal options.</p>
     */
    inline PivotTableTotalOptions& WithRowSubtotalOptions(const SubtotalOptions& value) { SetRowSubtotalOptions(value); return *this;}

    /**
     * <p>The row subtotal options.</p>
     */
    inline PivotTableTotalOptions& WithRowSubtotalOptions(SubtotalOptions&& value) { SetRowSubtotalOptions(std::move(value)); return *this;}


    /**
     * <p>The column subtotal options.</p>
     */
    inline const SubtotalOptions& GetColumnSubtotalOptions() const{ return m_columnSubtotalOptions; }

    /**
     * <p>The column subtotal options.</p>
     */
    inline bool ColumnSubtotalOptionsHasBeenSet() const { return m_columnSubtotalOptionsHasBeenSet; }

    /**
     * <p>The column subtotal options.</p>
     */
    inline void SetColumnSubtotalOptions(const SubtotalOptions& value) { m_columnSubtotalOptionsHasBeenSet = true; m_columnSubtotalOptions = value; }

    /**
     * <p>The column subtotal options.</p>
     */
    inline void SetColumnSubtotalOptions(SubtotalOptions&& value) { m_columnSubtotalOptionsHasBeenSet = true; m_columnSubtotalOptions = std::move(value); }

    /**
     * <p>The column subtotal options.</p>
     */
    inline PivotTableTotalOptions& WithColumnSubtotalOptions(const SubtotalOptions& value) { SetColumnSubtotalOptions(value); return *this;}

    /**
     * <p>The column subtotal options.</p>
     */
    inline PivotTableTotalOptions& WithColumnSubtotalOptions(SubtotalOptions&& value) { SetColumnSubtotalOptions(std::move(value)); return *this;}


    /**
     * <p>The row total options.</p>
     */
    inline const PivotTotalOptions& GetRowTotalOptions() const{ return m_rowTotalOptions; }

    /**
     * <p>The row total options.</p>
     */
    inline bool RowTotalOptionsHasBeenSet() const { return m_rowTotalOptionsHasBeenSet; }

    /**
     * <p>The row total options.</p>
     */
    inline void SetRowTotalOptions(const PivotTotalOptions& value) { m_rowTotalOptionsHasBeenSet = true; m_rowTotalOptions = value; }

    /**
     * <p>The row total options.</p>
     */
    inline void SetRowTotalOptions(PivotTotalOptions&& value) { m_rowTotalOptionsHasBeenSet = true; m_rowTotalOptions = std::move(value); }

    /**
     * <p>The row total options.</p>
     */
    inline PivotTableTotalOptions& WithRowTotalOptions(const PivotTotalOptions& value) { SetRowTotalOptions(value); return *this;}

    /**
     * <p>The row total options.</p>
     */
    inline PivotTableTotalOptions& WithRowTotalOptions(PivotTotalOptions&& value) { SetRowTotalOptions(std::move(value)); return *this;}


    /**
     * <p>The column total options.</p>
     */
    inline const PivotTotalOptions& GetColumnTotalOptions() const{ return m_columnTotalOptions; }

    /**
     * <p>The column total options.</p>
     */
    inline bool ColumnTotalOptionsHasBeenSet() const { return m_columnTotalOptionsHasBeenSet; }

    /**
     * <p>The column total options.</p>
     */
    inline void SetColumnTotalOptions(const PivotTotalOptions& value) { m_columnTotalOptionsHasBeenSet = true; m_columnTotalOptions = value; }

    /**
     * <p>The column total options.</p>
     */
    inline void SetColumnTotalOptions(PivotTotalOptions&& value) { m_columnTotalOptionsHasBeenSet = true; m_columnTotalOptions = std::move(value); }

    /**
     * <p>The column total options.</p>
     */
    inline PivotTableTotalOptions& WithColumnTotalOptions(const PivotTotalOptions& value) { SetColumnTotalOptions(value); return *this;}

    /**
     * <p>The column total options.</p>
     */
    inline PivotTableTotalOptions& WithColumnTotalOptions(PivotTotalOptions&& value) { SetColumnTotalOptions(std::move(value)); return *this;}

  private:

    SubtotalOptions m_rowSubtotalOptions;
    bool m_rowSubtotalOptionsHasBeenSet = false;

    SubtotalOptions m_columnSubtotalOptions;
    bool m_columnSubtotalOptionsHasBeenSet = false;

    PivotTotalOptions m_rowTotalOptions;
    bool m_rowTotalOptionsHasBeenSet = false;

    PivotTotalOptions m_columnTotalOptions;
    bool m_columnTotalOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
