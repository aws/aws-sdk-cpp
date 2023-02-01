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


    /**
     * <p>The target column of the tooltip item.</p>
     */
    inline const ColumnIdentifier& GetColumn() const{ return m_column; }

    /**
     * <p>The target column of the tooltip item.</p>
     */
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }

    /**
     * <p>The target column of the tooltip item.</p>
     */
    inline void SetColumn(const ColumnIdentifier& value) { m_columnHasBeenSet = true; m_column = value; }

    /**
     * <p>The target column of the tooltip item.</p>
     */
    inline void SetColumn(ColumnIdentifier&& value) { m_columnHasBeenSet = true; m_column = std::move(value); }

    /**
     * <p>The target column of the tooltip item.</p>
     */
    inline ColumnTooltipItem& WithColumn(const ColumnIdentifier& value) { SetColumn(value); return *this;}

    /**
     * <p>The target column of the tooltip item.</p>
     */
    inline ColumnTooltipItem& WithColumn(ColumnIdentifier&& value) { SetColumn(std::move(value)); return *this;}


    /**
     * <p>The label of the tooltip item.</p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }

    /**
     * <p>The label of the tooltip item.</p>
     */
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }

    /**
     * <p>The label of the tooltip item.</p>
     */
    inline void SetLabel(const Aws::String& value) { m_labelHasBeenSet = true; m_label = value; }

    /**
     * <p>The label of the tooltip item.</p>
     */
    inline void SetLabel(Aws::String&& value) { m_labelHasBeenSet = true; m_label = std::move(value); }

    /**
     * <p>The label of the tooltip item.</p>
     */
    inline void SetLabel(const char* value) { m_labelHasBeenSet = true; m_label.assign(value); }

    /**
     * <p>The label of the tooltip item.</p>
     */
    inline ColumnTooltipItem& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}

    /**
     * <p>The label of the tooltip item.</p>
     */
    inline ColumnTooltipItem& WithLabel(Aws::String&& value) { SetLabel(std::move(value)); return *this;}

    /**
     * <p>The label of the tooltip item.</p>
     */
    inline ColumnTooltipItem& WithLabel(const char* value) { SetLabel(value); return *this;}


    /**
     * <p>The visibility of the tooltip item.</p>
     */
    inline const Visibility& GetVisibility() const{ return m_visibility; }

    /**
     * <p>The visibility of the tooltip item.</p>
     */
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }

    /**
     * <p>The visibility of the tooltip item.</p>
     */
    inline void SetVisibility(const Visibility& value) { m_visibilityHasBeenSet = true; m_visibility = value; }

    /**
     * <p>The visibility of the tooltip item.</p>
     */
    inline void SetVisibility(Visibility&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }

    /**
     * <p>The visibility of the tooltip item.</p>
     */
    inline ColumnTooltipItem& WithVisibility(const Visibility& value) { SetVisibility(value); return *this;}

    /**
     * <p>The visibility of the tooltip item.</p>
     */
    inline ColumnTooltipItem& WithVisibility(Visibility&& value) { SetVisibility(std::move(value)); return *this;}


    /**
     * <p>The aggregation function of the column tooltip item.</p>
     */
    inline const AggregationFunction& GetAggregation() const{ return m_aggregation; }

    /**
     * <p>The aggregation function of the column tooltip item.</p>
     */
    inline bool AggregationHasBeenSet() const { return m_aggregationHasBeenSet; }

    /**
     * <p>The aggregation function of the column tooltip item.</p>
     */
    inline void SetAggregation(const AggregationFunction& value) { m_aggregationHasBeenSet = true; m_aggregation = value; }

    /**
     * <p>The aggregation function of the column tooltip item.</p>
     */
    inline void SetAggregation(AggregationFunction&& value) { m_aggregationHasBeenSet = true; m_aggregation = std::move(value); }

    /**
     * <p>The aggregation function of the column tooltip item.</p>
     */
    inline ColumnTooltipItem& WithAggregation(const AggregationFunction& value) { SetAggregation(value); return *this;}

    /**
     * <p>The aggregation function of the column tooltip item.</p>
     */
    inline ColumnTooltipItem& WithAggregation(AggregationFunction&& value) { SetAggregation(std::move(value)); return *this;}

  private:

    ColumnIdentifier m_column;
    bool m_columnHasBeenSet = false;

    Aws::String m_label;
    bool m_labelHasBeenSet = false;

    Visibility m_visibility;
    bool m_visibilityHasBeenSet = false;

    AggregationFunction m_aggregation;
    bool m_aggregationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
