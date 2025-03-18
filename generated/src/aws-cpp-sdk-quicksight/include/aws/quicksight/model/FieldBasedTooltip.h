/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Visibility.h>
#include <aws/quicksight/model/TooltipTitleType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/TooltipItem.h>
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
   * <p>The setup for the detailed tooltip.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FieldBasedTooltip">AWS
   * API Reference</a></p>
   */
  class FieldBasedTooltip
  {
  public:
    AWS_QUICKSIGHT_API FieldBasedTooltip() = default;
    AWS_QUICKSIGHT_API FieldBasedTooltip(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FieldBasedTooltip& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The visibility of <code>Show aggregations</code>.</p>
     */
    inline Visibility GetAggregationVisibility() const { return m_aggregationVisibility; }
    inline bool AggregationVisibilityHasBeenSet() const { return m_aggregationVisibilityHasBeenSet; }
    inline void SetAggregationVisibility(Visibility value) { m_aggregationVisibilityHasBeenSet = true; m_aggregationVisibility = value; }
    inline FieldBasedTooltip& WithAggregationVisibility(Visibility value) { SetAggregationVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type for the &gt;tooltip title. Choose one of the following options:</p>
     * <ul> <li> <p> <code>NONE</code>: Doesn't use the primary value as the title.</p>
     * </li> <li> <p> <code>PRIMARY_VALUE</code>: Uses primary value as the title.</p>
     * </li> </ul>
     */
    inline TooltipTitleType GetTooltipTitleType() const { return m_tooltipTitleType; }
    inline bool TooltipTitleTypeHasBeenSet() const { return m_tooltipTitleTypeHasBeenSet; }
    inline void SetTooltipTitleType(TooltipTitleType value) { m_tooltipTitleTypeHasBeenSet = true; m_tooltipTitleType = value; }
    inline FieldBasedTooltip& WithTooltipTitleType(TooltipTitleType value) { SetTooltipTitleType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fields configuration in the tooltip.</p>
     */
    inline const Aws::Vector<TooltipItem>& GetTooltipFields() const { return m_tooltipFields; }
    inline bool TooltipFieldsHasBeenSet() const { return m_tooltipFieldsHasBeenSet; }
    template<typename TooltipFieldsT = Aws::Vector<TooltipItem>>
    void SetTooltipFields(TooltipFieldsT&& value) { m_tooltipFieldsHasBeenSet = true; m_tooltipFields = std::forward<TooltipFieldsT>(value); }
    template<typename TooltipFieldsT = Aws::Vector<TooltipItem>>
    FieldBasedTooltip& WithTooltipFields(TooltipFieldsT&& value) { SetTooltipFields(std::forward<TooltipFieldsT>(value)); return *this;}
    template<typename TooltipFieldsT = TooltipItem>
    FieldBasedTooltip& AddTooltipFields(TooltipFieldsT&& value) { m_tooltipFieldsHasBeenSet = true; m_tooltipFields.emplace_back(std::forward<TooltipFieldsT>(value)); return *this; }
    ///@}
  private:

    Visibility m_aggregationVisibility{Visibility::NOT_SET};
    bool m_aggregationVisibilityHasBeenSet = false;

    TooltipTitleType m_tooltipTitleType{TooltipTitleType::NOT_SET};
    bool m_tooltipTitleTypeHasBeenSet = false;

    Aws::Vector<TooltipItem> m_tooltipFields;
    bool m_tooltipFieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
