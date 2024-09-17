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
    AWS_QUICKSIGHT_API ColumnTooltipItem();
    AWS_QUICKSIGHT_API ColumnTooltipItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ColumnTooltipItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The target column of the tooltip item.</p>
     */
    inline const ColumnIdentifier& GetColumn() const{ return m_column; }
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }
    inline void SetColumn(const ColumnIdentifier& value) { m_columnHasBeenSet = true; m_column = value; }
    inline void SetColumn(ColumnIdentifier&& value) { m_columnHasBeenSet = true; m_column = std::move(value); }
    inline ColumnTooltipItem& WithColumn(const ColumnIdentifier& value) { SetColumn(value); return *this;}
    inline ColumnTooltipItem& WithColumn(ColumnIdentifier&& value) { SetColumn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label of the tooltip item.</p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
    inline void SetLabel(const Aws::String& value) { m_labelHasBeenSet = true; m_label = value; }
    inline void SetLabel(Aws::String&& value) { m_labelHasBeenSet = true; m_label = std::move(value); }
    inline void SetLabel(const char* value) { m_labelHasBeenSet = true; m_label.assign(value); }
    inline ColumnTooltipItem& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}
    inline ColumnTooltipItem& WithLabel(Aws::String&& value) { SetLabel(std::move(value)); return *this;}
    inline ColumnTooltipItem& WithLabel(const char* value) { SetLabel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visibility of the tooltip item.</p>
     */
    inline const Visibility& GetVisibility() const{ return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    inline void SetVisibility(const Visibility& value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline void SetVisibility(Visibility&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }
    inline ColumnTooltipItem& WithVisibility(const Visibility& value) { SetVisibility(value); return *this;}
    inline ColumnTooltipItem& WithVisibility(Visibility&& value) { SetVisibility(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The aggregation function of the column tooltip item.</p>
     */
    inline const AggregationFunction& GetAggregation() const{ return m_aggregation; }
    inline bool AggregationHasBeenSet() const { return m_aggregationHasBeenSet; }
    inline void SetAggregation(const AggregationFunction& value) { m_aggregationHasBeenSet = true; m_aggregation = value; }
    inline void SetAggregation(AggregationFunction&& value) { m_aggregationHasBeenSet = true; m_aggregation = std::move(value); }
    inline ColumnTooltipItem& WithAggregation(const AggregationFunction& value) { SetAggregation(value); return *this;}
    inline ColumnTooltipItem& WithAggregation(AggregationFunction&& value) { SetAggregation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the target of the column tooltip item in a combo chart visual.</p>
     */
    inline const TooltipTarget& GetTooltipTarget() const{ return m_tooltipTarget; }
    inline bool TooltipTargetHasBeenSet() const { return m_tooltipTargetHasBeenSet; }
    inline void SetTooltipTarget(const TooltipTarget& value) { m_tooltipTargetHasBeenSet = true; m_tooltipTarget = value; }
    inline void SetTooltipTarget(TooltipTarget&& value) { m_tooltipTargetHasBeenSet = true; m_tooltipTarget = std::move(value); }
    inline ColumnTooltipItem& WithTooltipTarget(const TooltipTarget& value) { SetTooltipTarget(value); return *this;}
    inline ColumnTooltipItem& WithTooltipTarget(TooltipTarget&& value) { SetTooltipTarget(std::move(value)); return *this;}
    ///@}
  private:

    ColumnIdentifier m_column;
    bool m_columnHasBeenSet = false;

    Aws::String m_label;
    bool m_labelHasBeenSet = false;

    Visibility m_visibility;
    bool m_visibilityHasBeenSet = false;

    AggregationFunction m_aggregation;
    bool m_aggregationHasBeenSet = false;

    TooltipTarget m_tooltipTarget;
    bool m_tooltipTargetHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
