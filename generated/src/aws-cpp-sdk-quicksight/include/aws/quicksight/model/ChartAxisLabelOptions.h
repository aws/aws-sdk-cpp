/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Visibility.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/AxisLabelOptions.h>
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
   * <p>The label options for an axis on a chart.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ChartAxisLabelOptions">AWS
   * API Reference</a></p>
   */
  class ChartAxisLabelOptions
  {
  public:
    AWS_QUICKSIGHT_API ChartAxisLabelOptions() = default;
    AWS_QUICKSIGHT_API ChartAxisLabelOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ChartAxisLabelOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The visibility of an axis label on a chart. Choose one of the following
     * options:</p> <ul> <li> <p> <code>VISIBLE</code>: Shows the axis.</p> </li> <li>
     * <p> <code>HIDDEN</code>: Hides the axis.</p> </li> </ul>
     */
    inline Visibility GetVisibility() const { return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    inline void SetVisibility(Visibility value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline ChartAxisLabelOptions& WithVisibility(Visibility value) { SetVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visibility configuration of the sort icon on a chart's axis label.</p>
     */
    inline Visibility GetSortIconVisibility() const { return m_sortIconVisibility; }
    inline bool SortIconVisibilityHasBeenSet() const { return m_sortIconVisibilityHasBeenSet; }
    inline void SetSortIconVisibility(Visibility value) { m_sortIconVisibilityHasBeenSet = true; m_sortIconVisibility = value; }
    inline ChartAxisLabelOptions& WithSortIconVisibility(Visibility value) { SetSortIconVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label options for a chart axis.</p>
     */
    inline const Aws::Vector<AxisLabelOptions>& GetAxisLabelOptions() const { return m_axisLabelOptions; }
    inline bool AxisLabelOptionsHasBeenSet() const { return m_axisLabelOptionsHasBeenSet; }
    template<typename AxisLabelOptionsT = Aws::Vector<AxisLabelOptions>>
    void SetAxisLabelOptions(AxisLabelOptionsT&& value) { m_axisLabelOptionsHasBeenSet = true; m_axisLabelOptions = std::forward<AxisLabelOptionsT>(value); }
    template<typename AxisLabelOptionsT = Aws::Vector<AxisLabelOptions>>
    ChartAxisLabelOptions& WithAxisLabelOptions(AxisLabelOptionsT&& value) { SetAxisLabelOptions(std::forward<AxisLabelOptionsT>(value)); return *this;}
    template<typename AxisLabelOptionsT = AxisLabelOptions>
    ChartAxisLabelOptions& AddAxisLabelOptions(AxisLabelOptionsT&& value) { m_axisLabelOptionsHasBeenSet = true; m_axisLabelOptions.emplace_back(std::forward<AxisLabelOptionsT>(value)); return *this; }
    ///@}
  private:

    Visibility m_visibility{Visibility::NOT_SET};
    bool m_visibilityHasBeenSet = false;

    Visibility m_sortIconVisibility{Visibility::NOT_SET};
    bool m_sortIconVisibilityHasBeenSet = false;

    Aws::Vector<AxisLabelOptions> m_axisLabelOptions;
    bool m_axisLabelOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
