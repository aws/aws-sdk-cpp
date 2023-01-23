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


    /**
     * <p>The tick label options of an axis.</p>
     */
    inline const AxisTickLabelOptions& GetTickLabelOptions() const{ return m_tickLabelOptions; }

    /**
     * <p>The tick label options of an axis.</p>
     */
    inline bool TickLabelOptionsHasBeenSet() const { return m_tickLabelOptionsHasBeenSet; }

    /**
     * <p>The tick label options of an axis.</p>
     */
    inline void SetTickLabelOptions(const AxisTickLabelOptions& value) { m_tickLabelOptionsHasBeenSet = true; m_tickLabelOptions = value; }

    /**
     * <p>The tick label options of an axis.</p>
     */
    inline void SetTickLabelOptions(AxisTickLabelOptions&& value) { m_tickLabelOptionsHasBeenSet = true; m_tickLabelOptions = std::move(value); }

    /**
     * <p>The tick label options of an axis.</p>
     */
    inline AxisDisplayOptions& WithTickLabelOptions(const AxisTickLabelOptions& value) { SetTickLabelOptions(value); return *this;}

    /**
     * <p>The tick label options of an axis.</p>
     */
    inline AxisDisplayOptions& WithTickLabelOptions(AxisTickLabelOptions&& value) { SetTickLabelOptions(std::move(value)); return *this;}


    /**
     * <p>Determines whether or not the axis line is visible.</p>
     */
    inline const Visibility& GetAxisLineVisibility() const{ return m_axisLineVisibility; }

    /**
     * <p>Determines whether or not the axis line is visible.</p>
     */
    inline bool AxisLineVisibilityHasBeenSet() const { return m_axisLineVisibilityHasBeenSet; }

    /**
     * <p>Determines whether or not the axis line is visible.</p>
     */
    inline void SetAxisLineVisibility(const Visibility& value) { m_axisLineVisibilityHasBeenSet = true; m_axisLineVisibility = value; }

    /**
     * <p>Determines whether or not the axis line is visible.</p>
     */
    inline void SetAxisLineVisibility(Visibility&& value) { m_axisLineVisibilityHasBeenSet = true; m_axisLineVisibility = std::move(value); }

    /**
     * <p>Determines whether or not the axis line is visible.</p>
     */
    inline AxisDisplayOptions& WithAxisLineVisibility(const Visibility& value) { SetAxisLineVisibility(value); return *this;}

    /**
     * <p>Determines whether or not the axis line is visible.</p>
     */
    inline AxisDisplayOptions& WithAxisLineVisibility(Visibility&& value) { SetAxisLineVisibility(std::move(value)); return *this;}


    /**
     * <p>Determines whether or not the grid line is visible.</p>
     */
    inline const Visibility& GetGridLineVisibility() const{ return m_gridLineVisibility; }

    /**
     * <p>Determines whether or not the grid line is visible.</p>
     */
    inline bool GridLineVisibilityHasBeenSet() const { return m_gridLineVisibilityHasBeenSet; }

    /**
     * <p>Determines whether or not the grid line is visible.</p>
     */
    inline void SetGridLineVisibility(const Visibility& value) { m_gridLineVisibilityHasBeenSet = true; m_gridLineVisibility = value; }

    /**
     * <p>Determines whether or not the grid line is visible.</p>
     */
    inline void SetGridLineVisibility(Visibility&& value) { m_gridLineVisibilityHasBeenSet = true; m_gridLineVisibility = std::move(value); }

    /**
     * <p>Determines whether or not the grid line is visible.</p>
     */
    inline AxisDisplayOptions& WithGridLineVisibility(const Visibility& value) { SetGridLineVisibility(value); return *this;}

    /**
     * <p>Determines whether or not the grid line is visible.</p>
     */
    inline AxisDisplayOptions& WithGridLineVisibility(Visibility&& value) { SetGridLineVisibility(std::move(value)); return *this;}


    /**
     * <p>The data options for an axis.</p>
     */
    inline const AxisDataOptions& GetDataOptions() const{ return m_dataOptions; }

    /**
     * <p>The data options for an axis.</p>
     */
    inline bool DataOptionsHasBeenSet() const { return m_dataOptionsHasBeenSet; }

    /**
     * <p>The data options for an axis.</p>
     */
    inline void SetDataOptions(const AxisDataOptions& value) { m_dataOptionsHasBeenSet = true; m_dataOptions = value; }

    /**
     * <p>The data options for an axis.</p>
     */
    inline void SetDataOptions(AxisDataOptions&& value) { m_dataOptionsHasBeenSet = true; m_dataOptions = std::move(value); }

    /**
     * <p>The data options for an axis.</p>
     */
    inline AxisDisplayOptions& WithDataOptions(const AxisDataOptions& value) { SetDataOptions(value); return *this;}

    /**
     * <p>The data options for an axis.</p>
     */
    inline AxisDisplayOptions& WithDataOptions(AxisDataOptions&& value) { SetDataOptions(std::move(value)); return *this;}


    /**
     * <p>The scroll bar options for an axis.</p>
     */
    inline const ScrollBarOptions& GetScrollbarOptions() const{ return m_scrollbarOptions; }

    /**
     * <p>The scroll bar options for an axis.</p>
     */
    inline bool ScrollbarOptionsHasBeenSet() const { return m_scrollbarOptionsHasBeenSet; }

    /**
     * <p>The scroll bar options for an axis.</p>
     */
    inline void SetScrollbarOptions(const ScrollBarOptions& value) { m_scrollbarOptionsHasBeenSet = true; m_scrollbarOptions = value; }

    /**
     * <p>The scroll bar options for an axis.</p>
     */
    inline void SetScrollbarOptions(ScrollBarOptions&& value) { m_scrollbarOptionsHasBeenSet = true; m_scrollbarOptions = std::move(value); }

    /**
     * <p>The scroll bar options for an axis.</p>
     */
    inline AxisDisplayOptions& WithScrollbarOptions(const ScrollBarOptions& value) { SetScrollbarOptions(value); return *this;}

    /**
     * <p>The scroll bar options for an axis.</p>
     */
    inline AxisDisplayOptions& WithScrollbarOptions(ScrollBarOptions&& value) { SetScrollbarOptions(std::move(value)); return *this;}


    /**
     * <p>The offset value that determines the starting placement of the axis within a
     * visual's bounds.</p>
     */
    inline const Aws::String& GetAxisOffset() const{ return m_axisOffset; }

    /**
     * <p>The offset value that determines the starting placement of the axis within a
     * visual's bounds.</p>
     */
    inline bool AxisOffsetHasBeenSet() const { return m_axisOffsetHasBeenSet; }

    /**
     * <p>The offset value that determines the starting placement of the axis within a
     * visual's bounds.</p>
     */
    inline void SetAxisOffset(const Aws::String& value) { m_axisOffsetHasBeenSet = true; m_axisOffset = value; }

    /**
     * <p>The offset value that determines the starting placement of the axis within a
     * visual's bounds.</p>
     */
    inline void SetAxisOffset(Aws::String&& value) { m_axisOffsetHasBeenSet = true; m_axisOffset = std::move(value); }

    /**
     * <p>The offset value that determines the starting placement of the axis within a
     * visual's bounds.</p>
     */
    inline void SetAxisOffset(const char* value) { m_axisOffsetHasBeenSet = true; m_axisOffset.assign(value); }

    /**
     * <p>The offset value that determines the starting placement of the axis within a
     * visual's bounds.</p>
     */
    inline AxisDisplayOptions& WithAxisOffset(const Aws::String& value) { SetAxisOffset(value); return *this;}

    /**
     * <p>The offset value that determines the starting placement of the axis within a
     * visual's bounds.</p>
     */
    inline AxisDisplayOptions& WithAxisOffset(Aws::String&& value) { SetAxisOffset(std::move(value)); return *this;}

    /**
     * <p>The offset value that determines the starting placement of the axis within a
     * visual's bounds.</p>
     */
    inline AxisDisplayOptions& WithAxisOffset(const char* value) { SetAxisOffset(value); return *this;}

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
