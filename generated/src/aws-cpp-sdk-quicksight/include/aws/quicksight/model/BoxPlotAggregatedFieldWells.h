/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/DimensionField.h>
#include <aws/quicksight/model/MeasureField.h>
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
   * <p>The aggregated field well for a box plot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/BoxPlotAggregatedFieldWells">AWS
   * API Reference</a></p>
   */
  class BoxPlotAggregatedFieldWells
  {
  public:
    AWS_QUICKSIGHT_API BoxPlotAggregatedFieldWells();
    AWS_QUICKSIGHT_API BoxPlotAggregatedFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API BoxPlotAggregatedFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The group by field well of a box plot chart. Values are grouped based on
     * group by fields.</p>
     */
    inline const Aws::Vector<DimensionField>& GetGroupBy() const{ return m_groupBy; }

    /**
     * <p>The group by field well of a box plot chart. Values are grouped based on
     * group by fields.</p>
     */
    inline bool GroupByHasBeenSet() const { return m_groupByHasBeenSet; }

    /**
     * <p>The group by field well of a box plot chart. Values are grouped based on
     * group by fields.</p>
     */
    inline void SetGroupBy(const Aws::Vector<DimensionField>& value) { m_groupByHasBeenSet = true; m_groupBy = value; }

    /**
     * <p>The group by field well of a box plot chart. Values are grouped based on
     * group by fields.</p>
     */
    inline void SetGroupBy(Aws::Vector<DimensionField>&& value) { m_groupByHasBeenSet = true; m_groupBy = std::move(value); }

    /**
     * <p>The group by field well of a box plot chart. Values are grouped based on
     * group by fields.</p>
     */
    inline BoxPlotAggregatedFieldWells& WithGroupBy(const Aws::Vector<DimensionField>& value) { SetGroupBy(value); return *this;}

    /**
     * <p>The group by field well of a box plot chart. Values are grouped based on
     * group by fields.</p>
     */
    inline BoxPlotAggregatedFieldWells& WithGroupBy(Aws::Vector<DimensionField>&& value) { SetGroupBy(std::move(value)); return *this;}

    /**
     * <p>The group by field well of a box plot chart. Values are grouped based on
     * group by fields.</p>
     */
    inline BoxPlotAggregatedFieldWells& AddGroupBy(const DimensionField& value) { m_groupByHasBeenSet = true; m_groupBy.push_back(value); return *this; }

    /**
     * <p>The group by field well of a box plot chart. Values are grouped based on
     * group by fields.</p>
     */
    inline BoxPlotAggregatedFieldWells& AddGroupBy(DimensionField&& value) { m_groupByHasBeenSet = true; m_groupBy.push_back(std::move(value)); return *this; }


    /**
     * <p>The value field well of a box plot chart. Values are aggregated based on
     * group by fields.</p>
     */
    inline const Aws::Vector<MeasureField>& GetValues() const{ return m_values; }

    /**
     * <p>The value field well of a box plot chart. Values are aggregated based on
     * group by fields.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The value field well of a box plot chart. Values are aggregated based on
     * group by fields.</p>
     */
    inline void SetValues(const Aws::Vector<MeasureField>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The value field well of a box plot chart. Values are aggregated based on
     * group by fields.</p>
     */
    inline void SetValues(Aws::Vector<MeasureField>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The value field well of a box plot chart. Values are aggregated based on
     * group by fields.</p>
     */
    inline BoxPlotAggregatedFieldWells& WithValues(const Aws::Vector<MeasureField>& value) { SetValues(value); return *this;}

    /**
     * <p>The value field well of a box plot chart. Values are aggregated based on
     * group by fields.</p>
     */
    inline BoxPlotAggregatedFieldWells& WithValues(Aws::Vector<MeasureField>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The value field well of a box plot chart. Values are aggregated based on
     * group by fields.</p>
     */
    inline BoxPlotAggregatedFieldWells& AddValues(const MeasureField& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The value field well of a box plot chart. Values are aggregated based on
     * group by fields.</p>
     */
    inline BoxPlotAggregatedFieldWells& AddValues(MeasureField&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<DimensionField> m_groupBy;
    bool m_groupByHasBeenSet = false;

    Aws::Vector<MeasureField> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
