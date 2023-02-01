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


    /**
     * <p>The table border options of the inner vertical border.</p>
     */
    inline const TableBorderOptions& GetInnerVertical() const{ return m_innerVertical; }

    /**
     * <p>The table border options of the inner vertical border.</p>
     */
    inline bool InnerVerticalHasBeenSet() const { return m_innerVerticalHasBeenSet; }

    /**
     * <p>The table border options of the inner vertical border.</p>
     */
    inline void SetInnerVertical(const TableBorderOptions& value) { m_innerVerticalHasBeenSet = true; m_innerVertical = value; }

    /**
     * <p>The table border options of the inner vertical border.</p>
     */
    inline void SetInnerVertical(TableBorderOptions&& value) { m_innerVerticalHasBeenSet = true; m_innerVertical = std::move(value); }

    /**
     * <p>The table border options of the inner vertical border.</p>
     */
    inline TableSideBorderOptions& WithInnerVertical(const TableBorderOptions& value) { SetInnerVertical(value); return *this;}

    /**
     * <p>The table border options of the inner vertical border.</p>
     */
    inline TableSideBorderOptions& WithInnerVertical(TableBorderOptions&& value) { SetInnerVertical(std::move(value)); return *this;}


    /**
     * <p>The table border options of the inner horizontal border.</p>
     */
    inline const TableBorderOptions& GetInnerHorizontal() const{ return m_innerHorizontal; }

    /**
     * <p>The table border options of the inner horizontal border.</p>
     */
    inline bool InnerHorizontalHasBeenSet() const { return m_innerHorizontalHasBeenSet; }

    /**
     * <p>The table border options of the inner horizontal border.</p>
     */
    inline void SetInnerHorizontal(const TableBorderOptions& value) { m_innerHorizontalHasBeenSet = true; m_innerHorizontal = value; }

    /**
     * <p>The table border options of the inner horizontal border.</p>
     */
    inline void SetInnerHorizontal(TableBorderOptions&& value) { m_innerHorizontalHasBeenSet = true; m_innerHorizontal = std::move(value); }

    /**
     * <p>The table border options of the inner horizontal border.</p>
     */
    inline TableSideBorderOptions& WithInnerHorizontal(const TableBorderOptions& value) { SetInnerHorizontal(value); return *this;}

    /**
     * <p>The table border options of the inner horizontal border.</p>
     */
    inline TableSideBorderOptions& WithInnerHorizontal(TableBorderOptions&& value) { SetInnerHorizontal(std::move(value)); return *this;}


    /**
     * <p>The table border options of the left border.</p>
     */
    inline const TableBorderOptions& GetLeft() const{ return m_left; }

    /**
     * <p>The table border options of the left border.</p>
     */
    inline bool LeftHasBeenSet() const { return m_leftHasBeenSet; }

    /**
     * <p>The table border options of the left border.</p>
     */
    inline void SetLeft(const TableBorderOptions& value) { m_leftHasBeenSet = true; m_left = value; }

    /**
     * <p>The table border options of the left border.</p>
     */
    inline void SetLeft(TableBorderOptions&& value) { m_leftHasBeenSet = true; m_left = std::move(value); }

    /**
     * <p>The table border options of the left border.</p>
     */
    inline TableSideBorderOptions& WithLeft(const TableBorderOptions& value) { SetLeft(value); return *this;}

    /**
     * <p>The table border options of the left border.</p>
     */
    inline TableSideBorderOptions& WithLeft(TableBorderOptions&& value) { SetLeft(std::move(value)); return *this;}


    /**
     * <p>The table border options of the right border.</p>
     */
    inline const TableBorderOptions& GetRight() const{ return m_right; }

    /**
     * <p>The table border options of the right border.</p>
     */
    inline bool RightHasBeenSet() const { return m_rightHasBeenSet; }

    /**
     * <p>The table border options of the right border.</p>
     */
    inline void SetRight(const TableBorderOptions& value) { m_rightHasBeenSet = true; m_right = value; }

    /**
     * <p>The table border options of the right border.</p>
     */
    inline void SetRight(TableBorderOptions&& value) { m_rightHasBeenSet = true; m_right = std::move(value); }

    /**
     * <p>The table border options of the right border.</p>
     */
    inline TableSideBorderOptions& WithRight(const TableBorderOptions& value) { SetRight(value); return *this;}

    /**
     * <p>The table border options of the right border.</p>
     */
    inline TableSideBorderOptions& WithRight(TableBorderOptions&& value) { SetRight(std::move(value)); return *this;}


    /**
     * <p>The table border options of the top border.</p>
     */
    inline const TableBorderOptions& GetTop() const{ return m_top; }

    /**
     * <p>The table border options of the top border.</p>
     */
    inline bool TopHasBeenSet() const { return m_topHasBeenSet; }

    /**
     * <p>The table border options of the top border.</p>
     */
    inline void SetTop(const TableBorderOptions& value) { m_topHasBeenSet = true; m_top = value; }

    /**
     * <p>The table border options of the top border.</p>
     */
    inline void SetTop(TableBorderOptions&& value) { m_topHasBeenSet = true; m_top = std::move(value); }

    /**
     * <p>The table border options of the top border.</p>
     */
    inline TableSideBorderOptions& WithTop(const TableBorderOptions& value) { SetTop(value); return *this;}

    /**
     * <p>The table border options of the top border.</p>
     */
    inline TableSideBorderOptions& WithTop(TableBorderOptions&& value) { SetTop(std::move(value)); return *this;}


    /**
     * <p>The table border options of the bottom border.</p>
     */
    inline const TableBorderOptions& GetBottom() const{ return m_bottom; }

    /**
     * <p>The table border options of the bottom border.</p>
     */
    inline bool BottomHasBeenSet() const { return m_bottomHasBeenSet; }

    /**
     * <p>The table border options of the bottom border.</p>
     */
    inline void SetBottom(const TableBorderOptions& value) { m_bottomHasBeenSet = true; m_bottom = value; }

    /**
     * <p>The table border options of the bottom border.</p>
     */
    inline void SetBottom(TableBorderOptions&& value) { m_bottomHasBeenSet = true; m_bottom = std::move(value); }

    /**
     * <p>The table border options of the bottom border.</p>
     */
    inline TableSideBorderOptions& WithBottom(const TableBorderOptions& value) { SetBottom(value); return *this;}

    /**
     * <p>The table border options of the bottom border.</p>
     */
    inline TableSideBorderOptions& WithBottom(TableBorderOptions&& value) { SetBottom(std::move(value)); return *this;}

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
