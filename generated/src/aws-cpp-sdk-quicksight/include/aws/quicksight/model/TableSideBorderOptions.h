/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/TableBorderOptions.h>
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
   * <p>The side border options for a table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TableSideBorderOptions">AWS
   * API Reference</a></p>
   */
  class TableSideBorderOptions
  {
  public:
    AWS_QUICKSIGHT_API TableSideBorderOptions();
    AWS_QUICKSIGHT_API TableSideBorderOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TableSideBorderOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The table border options of the inner vertical border.</p>
     */
    inline const TableBorderOptions& GetInnerVertical() const{ return m_innerVertical; }
    inline bool InnerVerticalHasBeenSet() const { return m_innerVerticalHasBeenSet; }
    inline void SetInnerVertical(const TableBorderOptions& value) { m_innerVerticalHasBeenSet = true; m_innerVertical = value; }
    inline void SetInnerVertical(TableBorderOptions&& value) { m_innerVerticalHasBeenSet = true; m_innerVertical = std::move(value); }
    inline TableSideBorderOptions& WithInnerVertical(const TableBorderOptions& value) { SetInnerVertical(value); return *this;}
    inline TableSideBorderOptions& WithInnerVertical(TableBorderOptions&& value) { SetInnerVertical(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The table border options of the inner horizontal border.</p>
     */
    inline const TableBorderOptions& GetInnerHorizontal() const{ return m_innerHorizontal; }
    inline bool InnerHorizontalHasBeenSet() const { return m_innerHorizontalHasBeenSet; }
    inline void SetInnerHorizontal(const TableBorderOptions& value) { m_innerHorizontalHasBeenSet = true; m_innerHorizontal = value; }
    inline void SetInnerHorizontal(TableBorderOptions&& value) { m_innerHorizontalHasBeenSet = true; m_innerHorizontal = std::move(value); }
    inline TableSideBorderOptions& WithInnerHorizontal(const TableBorderOptions& value) { SetInnerHorizontal(value); return *this;}
    inline TableSideBorderOptions& WithInnerHorizontal(TableBorderOptions&& value) { SetInnerHorizontal(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The table border options of the left border.</p>
     */
    inline const TableBorderOptions& GetLeft() const{ return m_left; }
    inline bool LeftHasBeenSet() const { return m_leftHasBeenSet; }
    inline void SetLeft(const TableBorderOptions& value) { m_leftHasBeenSet = true; m_left = value; }
    inline void SetLeft(TableBorderOptions&& value) { m_leftHasBeenSet = true; m_left = std::move(value); }
    inline TableSideBorderOptions& WithLeft(const TableBorderOptions& value) { SetLeft(value); return *this;}
    inline TableSideBorderOptions& WithLeft(TableBorderOptions&& value) { SetLeft(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The table border options of the right border.</p>
     */
    inline const TableBorderOptions& GetRight() const{ return m_right; }
    inline bool RightHasBeenSet() const { return m_rightHasBeenSet; }
    inline void SetRight(const TableBorderOptions& value) { m_rightHasBeenSet = true; m_right = value; }
    inline void SetRight(TableBorderOptions&& value) { m_rightHasBeenSet = true; m_right = std::move(value); }
    inline TableSideBorderOptions& WithRight(const TableBorderOptions& value) { SetRight(value); return *this;}
    inline TableSideBorderOptions& WithRight(TableBorderOptions&& value) { SetRight(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The table border options of the top border.</p>
     */
    inline const TableBorderOptions& GetTop() const{ return m_top; }
    inline bool TopHasBeenSet() const { return m_topHasBeenSet; }
    inline void SetTop(const TableBorderOptions& value) { m_topHasBeenSet = true; m_top = value; }
    inline void SetTop(TableBorderOptions&& value) { m_topHasBeenSet = true; m_top = std::move(value); }
    inline TableSideBorderOptions& WithTop(const TableBorderOptions& value) { SetTop(value); return *this;}
    inline TableSideBorderOptions& WithTop(TableBorderOptions&& value) { SetTop(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The table border options of the bottom border.</p>
     */
    inline const TableBorderOptions& GetBottom() const{ return m_bottom; }
    inline bool BottomHasBeenSet() const { return m_bottomHasBeenSet; }
    inline void SetBottom(const TableBorderOptions& value) { m_bottomHasBeenSet = true; m_bottom = value; }
    inline void SetBottom(TableBorderOptions&& value) { m_bottomHasBeenSet = true; m_bottom = std::move(value); }
    inline TableSideBorderOptions& WithBottom(const TableBorderOptions& value) { SetBottom(value); return *this;}
    inline TableSideBorderOptions& WithBottom(TableBorderOptions&& value) { SetBottom(std::move(value)); return *this;}
    ///@}
  private:

    TableBorderOptions m_innerVertical;
    bool m_innerVerticalHasBeenSet = false;

    TableBorderOptions m_innerHorizontal;
    bool m_innerHorizontalHasBeenSet = false;

    TableBorderOptions m_left;
    bool m_leftHasBeenSet = false;

    TableBorderOptions m_right;
    bool m_rightHasBeenSet = false;

    TableBorderOptions m_top;
    bool m_topHasBeenSet = false;

    TableBorderOptions m_bottom;
    bool m_bottomHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
