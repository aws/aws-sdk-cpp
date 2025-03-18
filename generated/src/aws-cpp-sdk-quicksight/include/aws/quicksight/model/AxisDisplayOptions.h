/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AxisTickLabelOptions.h>
#include <aws/quicksight/model/Visibility.h>
#include <aws/quicksight/model/AxisDataOptions.h>
#include <aws/quicksight/model/ScrollBarOptions.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The display options for the axis label.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AxisDisplayOptions">AWS
   * API Reference</a></p>
   */
  class AxisDisplayOptions
  {
  public:
    AWS_QUICKSIGHT_API AxisDisplayOptions() = default;
    AWS_QUICKSIGHT_API AxisDisplayOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AxisDisplayOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The tick label options of an axis.</p>
     */
    inline const AxisTickLabelOptions& GetTickLabelOptions() const { return m_tickLabelOptions; }
    inline bool TickLabelOptionsHasBeenSet() const { return m_tickLabelOptionsHasBeenSet; }
    template<typename TickLabelOptionsT = AxisTickLabelOptions>
    void SetTickLabelOptions(TickLabelOptionsT&& value) { m_tickLabelOptionsHasBeenSet = true; m_tickLabelOptions = std::forward<TickLabelOptionsT>(value); }
    template<typename TickLabelOptionsT = AxisTickLabelOptions>
    AxisDisplayOptions& WithTickLabelOptions(TickLabelOptionsT&& value) { SetTickLabelOptions(std::forward<TickLabelOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether or not the axis line is visible.</p>
     */
    inline Visibility GetAxisLineVisibility() const { return m_axisLineVisibility; }
    inline bool AxisLineVisibilityHasBeenSet() const { return m_axisLineVisibilityHasBeenSet; }
    inline void SetAxisLineVisibility(Visibility value) { m_axisLineVisibilityHasBeenSet = true; m_axisLineVisibility = value; }
    inline AxisDisplayOptions& WithAxisLineVisibility(Visibility value) { SetAxisLineVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether or not the grid line is visible.</p>
     */
    inline Visibility GetGridLineVisibility() const { return m_gridLineVisibility; }
    inline bool GridLineVisibilityHasBeenSet() const { return m_gridLineVisibilityHasBeenSet; }
    inline void SetGridLineVisibility(Visibility value) { m_gridLineVisibilityHasBeenSet = true; m_gridLineVisibility = value; }
    inline AxisDisplayOptions& WithGridLineVisibility(Visibility value) { SetGridLineVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data options for an axis.</p>
     */
    inline const AxisDataOptions& GetDataOptions() const { return m_dataOptions; }
    inline bool DataOptionsHasBeenSet() const { return m_dataOptionsHasBeenSet; }
    template<typename DataOptionsT = AxisDataOptions>
    void SetDataOptions(DataOptionsT&& value) { m_dataOptionsHasBeenSet = true; m_dataOptions = std::forward<DataOptionsT>(value); }
    template<typename DataOptionsT = AxisDataOptions>
    AxisDisplayOptions& WithDataOptions(DataOptionsT&& value) { SetDataOptions(std::forward<DataOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scroll bar options for an axis.</p>
     */
    inline const ScrollBarOptions& GetScrollbarOptions() const { return m_scrollbarOptions; }
    inline bool ScrollbarOptionsHasBeenSet() const { return m_scrollbarOptionsHasBeenSet; }
    template<typename ScrollbarOptionsT = ScrollBarOptions>
    void SetScrollbarOptions(ScrollbarOptionsT&& value) { m_scrollbarOptionsHasBeenSet = true; m_scrollbarOptions = std::forward<ScrollbarOptionsT>(value); }
    template<typename ScrollbarOptionsT = ScrollBarOptions>
    AxisDisplayOptions& WithScrollbarOptions(ScrollbarOptionsT&& value) { SetScrollbarOptions(std::forward<ScrollbarOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The offset value that determines the starting placement of the axis within a
     * visual's bounds.</p>
     */
    inline const Aws::String& GetAxisOffset() const { return m_axisOffset; }
    inline bool AxisOffsetHasBeenSet() const { return m_axisOffsetHasBeenSet; }
    template<typename AxisOffsetT = Aws::String>
    void SetAxisOffset(AxisOffsetT&& value) { m_axisOffsetHasBeenSet = true; m_axisOffset = std::forward<AxisOffsetT>(value); }
    template<typename AxisOffsetT = Aws::String>
    AxisDisplayOptions& WithAxisOffset(AxisOffsetT&& value) { SetAxisOffset(std::forward<AxisOffsetT>(value)); return *this;}
    ///@}
  private:

    AxisTickLabelOptions m_tickLabelOptions;
    bool m_tickLabelOptionsHasBeenSet = false;

    Visibility m_axisLineVisibility{Visibility::NOT_SET};
    bool m_axisLineVisibilityHasBeenSet = false;

    Visibility m_gridLineVisibility{Visibility::NOT_SET};
    bool m_gridLineVisibilityHasBeenSet = false;

    AxisDataOptions m_dataOptions;
    bool m_dataOptionsHasBeenSet = false;

    ScrollBarOptions m_scrollbarOptions;
    bool m_scrollbarOptionsHasBeenSet = false;

    Aws::String m_axisOffset;
    bool m_axisOffsetHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
