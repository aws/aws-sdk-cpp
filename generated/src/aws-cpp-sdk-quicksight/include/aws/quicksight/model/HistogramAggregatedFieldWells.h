/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The field well configuration of a histogram.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/HistogramAggregatedFieldWells">AWS
   * API Reference</a></p>
   */
  class HistogramAggregatedFieldWells
  {
  public:
    AWS_QUICKSIGHT_API HistogramAggregatedFieldWells();
    AWS_QUICKSIGHT_API HistogramAggregatedFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API HistogramAggregatedFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value field wells of a histogram. Values are aggregated by
     * <code>COUNT</code> or <code>DISTINCT_COUNT</code>.</p>
     */
    inline const Aws::Vector<MeasureField>& GetValues() const{ return m_values; }

    /**
     * <p>The value field wells of a histogram. Values are aggregated by
     * <code>COUNT</code> or <code>DISTINCT_COUNT</code>.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The value field wells of a histogram. Values are aggregated by
     * <code>COUNT</code> or <code>DISTINCT_COUNT</code>.</p>
     */
    inline void SetValues(const Aws::Vector<MeasureField>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The value field wells of a histogram. Values are aggregated by
     * <code>COUNT</code> or <code>DISTINCT_COUNT</code>.</p>
     */
    inline void SetValues(Aws::Vector<MeasureField>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The value field wells of a histogram. Values are aggregated by
     * <code>COUNT</code> or <code>DISTINCT_COUNT</code>.</p>
     */
    inline HistogramAggregatedFieldWells& WithValues(const Aws::Vector<MeasureField>& value) { SetValues(value); return *this;}

    /**
     * <p>The value field wells of a histogram. Values are aggregated by
     * <code>COUNT</code> or <code>DISTINCT_COUNT</code>.</p>
     */
    inline HistogramAggregatedFieldWells& WithValues(Aws::Vector<MeasureField>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The value field wells of a histogram. Values are aggregated by
     * <code>COUNT</code> or <code>DISTINCT_COUNT</code>.</p>
     */
    inline HistogramAggregatedFieldWells& AddValues(const MeasureField& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The value field wells of a histogram. Values are aggregated by
     * <code>COUNT</code> or <code>DISTINCT_COUNT</code>.</p>
     */
    inline HistogramAggregatedFieldWells& AddValues(MeasureField&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<MeasureField> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
