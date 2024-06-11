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
    AWS_QUICKSIGHT_API AxisDisplayOptions();
    AWS_QUICKSIGHT_API AxisDisplayOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AxisDisplayOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The tick label options of an axis.</p>
     */
    inline const AxisTickLabelOptions& GetTickLabelOptions() const{ return m_tickLabelOptions; }
    inline bool TickLabelOptionsHasBeenSet() const { return m_tickLabelOptionsHasBeenSet; }
    inline void SetTickLabelOptions(const AxisTickLabelOptions& value) { m_tickLabelOptionsHasBeenSet = true; m_tickLabelOptions = value; }
    inline void SetTickLabelOptions(AxisTickLabelOptions&& value) { m_tickLabelOptionsHasBeenSet = true; m_tickLabelOptions = std::move(value); }
    inline AxisDisplayOptions& WithTickLabelOptions(const AxisTickLabelOptions& value) { SetTickLabelOptions(value); return *this;}
    inline AxisDisplayOptions& WithTickLabelOptions(AxisTickLabelOptions&& value) { SetTickLabelOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether or not the axis line is visible.</p>
     */
    inline const Visibility& GetAxisLineVisibility() const{ return m_axisLineVisibility; }
    inline bool AxisLineVisibilityHasBeenSet() const { return m_axisLineVisibilityHasBeenSet; }
    inline void SetAxisLineVisibility(const Visibility& value) { m_axisLineVisibilityHasBeenSet = true; m_axisLineVisibility = value; }
    inline void SetAxisLineVisibility(Visibility&& value) { m_axisLineVisibilityHasBeenSet = true; m_axisLineVisibility = std::move(value); }
    inline AxisDisplayOptions& WithAxisLineVisibility(const Visibility& value) { SetAxisLineVisibility(value); return *this;}
    inline AxisDisplayOptions& WithAxisLineVisibility(Visibility&& value) { SetAxisLineVisibility(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether or not the grid line is visible.</p>
     */
    inline const Visibility& GetGridLineVisibility() const{ return m_gridLineVisibility; }
    inline bool GridLineVisibilityHasBeenSet() const { return m_gridLineVisibilityHasBeenSet; }
    inline void SetGridLineVisibility(const Visibility& value) { m_gridLineVisibilityHasBeenSet = true; m_gridLineVisibility = value; }
    inline void SetGridLineVisibility(Visibility&& value) { m_gridLineVisibilityHasBeenSet = true; m_gridLineVisibility = std::move(value); }
    inline AxisDisplayOptions& WithGridLineVisibility(const Visibility& value) { SetGridLineVisibility(value); return *this;}
    inline AxisDisplayOptions& WithGridLineVisibility(Visibility&& value) { SetGridLineVisibility(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data options for an axis.</p>
     */
    inline const AxisDataOptions& GetDataOptions() const{ return m_dataOptions; }
    inline bool DataOptionsHasBeenSet() const { return m_dataOptionsHasBeenSet; }
    inline void SetDataOptions(const AxisDataOptions& value) { m_dataOptionsHasBeenSet = true; m_dataOptions = value; }
    inline void SetDataOptions(AxisDataOptions&& value) { m_dataOptionsHasBeenSet = true; m_dataOptions = std::move(value); }
    inline AxisDisplayOptions& WithDataOptions(const AxisDataOptions& value) { SetDataOptions(value); return *this;}
    inline AxisDisplayOptions& WithDataOptions(AxisDataOptions&& value) { SetDataOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scroll bar options for an axis.</p>
     */
    inline const ScrollBarOptions& GetScrollbarOptions() const{ return m_scrollbarOptions; }
    inline bool ScrollbarOptionsHasBeenSet() const { return m_scrollbarOptionsHasBeenSet; }
    inline void SetScrollbarOptions(const ScrollBarOptions& value) { m_scrollbarOptionsHasBeenSet = true; m_scrollbarOptions = value; }
    inline void SetScrollbarOptions(ScrollBarOptions&& value) { m_scrollbarOptionsHasBeenSet = true; m_scrollbarOptions = std::move(value); }
    inline AxisDisplayOptions& WithScrollbarOptions(const ScrollBarOptions& value) { SetScrollbarOptions(value); return *this;}
    inline AxisDisplayOptions& WithScrollbarOptions(ScrollBarOptions&& value) { SetScrollbarOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The offset value that determines the starting placement of the axis within a
     * visual's bounds.</p>
     */
    inline const Aws::String& GetAxisOffset() const{ return m_axisOffset; }
    inline bool AxisOffsetHasBeenSet() const { return m_axisOffsetHasBeenSet; }
    inline void SetAxisOffset(const Aws::String& value) { m_axisOffsetHasBeenSet = true; m_axisOffset = value; }
    inline void SetAxisOffset(Aws::String&& value) { m_axisOffsetHasBeenSet = true; m_axisOffset = std::move(value); }
    inline void SetAxisOffset(const char* value) { m_axisOffsetHasBeenSet = true; m_axisOffset.assign(value); }
    inline AxisDisplayOptions& WithAxisOffset(const Aws::String& value) { SetAxisOffset(value); return *this;}
    inline AxisDisplayOptions& WithAxisOffset(Aws::String&& value) { SetAxisOffset(std::move(value)); return *this;}
    inline AxisDisplayOptions& WithAxisOffset(const char* value) { SetAxisOffset(value); return *this;}
    ///@}
  private:

    AxisTickLabelOptions m_tickLabelOptions;
    bool m_tickLabelOptionsHasBeenSet = false;

    Visibility m_axisLineVisibility;
    bool m_axisLineVisibilityHasBeenSet = false;

    Visibility m_gridLineVisibility;
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
