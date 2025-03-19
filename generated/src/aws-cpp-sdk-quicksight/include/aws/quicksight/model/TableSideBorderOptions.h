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
    AWS_QUICKSIGHT_API TableSideBorderOptions() = default;
    AWS_QUICKSIGHT_API TableSideBorderOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TableSideBorderOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The table border options of the inner vertical border.</p>
     */
    inline const TableBorderOptions& GetInnerVertical() const { return m_innerVertical; }
    inline bool InnerVerticalHasBeenSet() const { return m_innerVerticalHasBeenSet; }
    template<typename InnerVerticalT = TableBorderOptions>
    void SetInnerVertical(InnerVerticalT&& value) { m_innerVerticalHasBeenSet = true; m_innerVertical = std::forward<InnerVerticalT>(value); }
    template<typename InnerVerticalT = TableBorderOptions>
    TableSideBorderOptions& WithInnerVertical(InnerVerticalT&& value) { SetInnerVertical(std::forward<InnerVerticalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The table border options of the inner horizontal border.</p>
     */
    inline const TableBorderOptions& GetInnerHorizontal() const { return m_innerHorizontal; }
    inline bool InnerHorizontalHasBeenSet() const { return m_innerHorizontalHasBeenSet; }
    template<typename InnerHorizontalT = TableBorderOptions>
    void SetInnerHorizontal(InnerHorizontalT&& value) { m_innerHorizontalHasBeenSet = true; m_innerHorizontal = std::forward<InnerHorizontalT>(value); }
    template<typename InnerHorizontalT = TableBorderOptions>
    TableSideBorderOptions& WithInnerHorizontal(InnerHorizontalT&& value) { SetInnerHorizontal(std::forward<InnerHorizontalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The table border options of the left border.</p>
     */
    inline const TableBorderOptions& GetLeft() const { return m_left; }
    inline bool LeftHasBeenSet() const { return m_leftHasBeenSet; }
    template<typename LeftT = TableBorderOptions>
    void SetLeft(LeftT&& value) { m_leftHasBeenSet = true; m_left = std::forward<LeftT>(value); }
    template<typename LeftT = TableBorderOptions>
    TableSideBorderOptions& WithLeft(LeftT&& value) { SetLeft(std::forward<LeftT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The table border options of the right border.</p>
     */
    inline const TableBorderOptions& GetRight() const { return m_right; }
    inline bool RightHasBeenSet() const { return m_rightHasBeenSet; }
    template<typename RightT = TableBorderOptions>
    void SetRight(RightT&& value) { m_rightHasBeenSet = true; m_right = std::forward<RightT>(value); }
    template<typename RightT = TableBorderOptions>
    TableSideBorderOptions& WithRight(RightT&& value) { SetRight(std::forward<RightT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The table border options of the top border.</p>
     */
    inline const TableBorderOptions& GetTop() const { return m_top; }
    inline bool TopHasBeenSet() const { return m_topHasBeenSet; }
    template<typename TopT = TableBorderOptions>
    void SetTop(TopT&& value) { m_topHasBeenSet = true; m_top = std::forward<TopT>(value); }
    template<typename TopT = TableBorderOptions>
    TableSideBorderOptions& WithTop(TopT&& value) { SetTop(std::forward<TopT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The table border options of the bottom border.</p>
     */
    inline const TableBorderOptions& GetBottom() const { return m_bottom; }
    inline bool BottomHasBeenSet() const { return m_bottomHasBeenSet; }
    template<typename BottomT = TableBorderOptions>
    void SetBottom(BottomT&& value) { m_bottomHasBeenSet = true; m_bottom = std::forward<BottomT>(value); }
    template<typename BottomT = TableBorderOptions>
    TableSideBorderOptions& WithBottom(BottomT&& value) { SetBottom(std::forward<BottomT>(value)); return *this;}
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
