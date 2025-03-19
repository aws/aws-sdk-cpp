/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ColumnIdentifier.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/Visibility.h>
#include <aws/quicksight/model/AggregationFunction.h>
#include <aws/quicksight/model/TooltipTarget.h>
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
   * <p>The tooltip item for the columns that are not part of a field
   * well.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ColumnTooltipItem">AWS
   * API Reference</a></p>
   */
  class ColumnTooltipItem
  {
  public:
    AWS_QUICKSIGHT_API ColumnTooltipItem() = default;
    AWS_QUICKSIGHT_API ColumnTooltipItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ColumnTooltipItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The target column of the tooltip item.</p>
     */
    inline const ColumnIdentifier& GetColumn() const { return m_column; }
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }
    template<typename ColumnT = ColumnIdentifier>
    void SetColumn(ColumnT&& value) { m_columnHasBeenSet = true; m_column = std::forward<ColumnT>(value); }
    template<typename ColumnT = ColumnIdentifier>
    ColumnTooltipItem& WithColumn(ColumnT&& value) { SetColumn(std::forward<ColumnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label of the tooltip item.</p>
     */
    inline const Aws::String& GetLabel() const { return m_label; }
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
    template<typename LabelT = Aws::String>
    void SetLabel(LabelT&& value) { m_labelHasBeenSet = true; m_label = std::forward<LabelT>(value); }
    template<typename LabelT = Aws::String>
    ColumnTooltipItem& WithLabel(LabelT&& value) { SetLabel(std::forward<LabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visibility of the tooltip item.</p>
     */
    inline Visibility GetVisibility() const { return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    inline void SetVisibility(Visibility value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline ColumnTooltipItem& WithVisibility(Visibility value) { SetVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The aggregation function of the column tooltip item.</p>
     */
    inline const AggregationFunction& GetAggregation() const { return m_aggregation; }
    inline bool AggregationHasBeenSet() const { return m_aggregationHasBeenSet; }
    template<typename AggregationT = AggregationFunction>
    void SetAggregation(AggregationT&& value) { m_aggregationHasBeenSet = true; m_aggregation = std::forward<AggregationT>(value); }
    template<typename AggregationT = AggregationFunction>
    ColumnTooltipItem& WithAggregation(AggregationT&& value) { SetAggregation(std::forward<AggregationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the target of the column tooltip item in a combo chart visual.</p>
     */
    inline TooltipTarget GetTooltipTarget() const { return m_tooltipTarget; }
    inline bool TooltipTargetHasBeenSet() const { return m_tooltipTargetHasBeenSet; }
    inline void SetTooltipTarget(TooltipTarget value) { m_tooltipTargetHasBeenSet = true; m_tooltipTarget = value; }
    inline ColumnTooltipItem& WithTooltipTarget(TooltipTarget value) { SetTooltipTarget(value); return *this;}
    ///@}
  private:

    ColumnIdentifier m_column;
    bool m_columnHasBeenSet = false;

    Aws::String m_label;
    bool m_labelHasBeenSet = false;

    Visibility m_visibility{Visibility::NOT_SET};
    bool m_visibilityHasBeenSet = false;

    AggregationFunction m_aggregation;
    bool m_aggregationHasBeenSet = false;

    TooltipTarget m_tooltipTarget{TooltipTarget::NOT_SET};
    bool m_tooltipTargetHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
