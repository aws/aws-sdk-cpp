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
   * <p>The field well configuration of a
   * <code>GaugeChartVisual</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GaugeChartFieldWells">AWS
   * API Reference</a></p>
   */
  class GaugeChartFieldWells
  {
  public:
    AWS_QUICKSIGHT_API GaugeChartFieldWells();
    AWS_QUICKSIGHT_API GaugeChartFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GaugeChartFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value field wells of a <code>GaugeChartVisual</code>.</p>
     */
    inline const Aws::Vector<MeasureField>& GetValues() const{ return m_values; }

    /**
     * <p>The value field wells of a <code>GaugeChartVisual</code>.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The value field wells of a <code>GaugeChartVisual</code>.</p>
     */
    inline void SetValues(const Aws::Vector<MeasureField>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The value field wells of a <code>GaugeChartVisual</code>.</p>
     */
    inline void SetValues(Aws::Vector<MeasureField>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The value field wells of a <code>GaugeChartVisual</code>.</p>
     */
    inline GaugeChartFieldWells& WithValues(const Aws::Vector<MeasureField>& value) { SetValues(value); return *this;}

    /**
     * <p>The value field wells of a <code>GaugeChartVisual</code>.</p>
     */
    inline GaugeChartFieldWells& WithValues(Aws::Vector<MeasureField>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The value field wells of a <code>GaugeChartVisual</code>.</p>
     */
    inline GaugeChartFieldWells& AddValues(const MeasureField& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The value field wells of a <code>GaugeChartVisual</code>.</p>
     */
    inline GaugeChartFieldWells& AddValues(MeasureField&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }


    /**
     * <p>The target value field wells of a <code>GaugeChartVisual</code>.</p>
     */
    inline const Aws::Vector<MeasureField>& GetTargetValues() const{ return m_targetValues; }

    /**
     * <p>The target value field wells of a <code>GaugeChartVisual</code>.</p>
     */
    inline bool TargetValuesHasBeenSet() const { return m_targetValuesHasBeenSet; }

    /**
     * <p>The target value field wells of a <code>GaugeChartVisual</code>.</p>
     */
    inline void SetTargetValues(const Aws::Vector<MeasureField>& value) { m_targetValuesHasBeenSet = true; m_targetValues = value; }

    /**
     * <p>The target value field wells of a <code>GaugeChartVisual</code>.</p>
     */
    inline void SetTargetValues(Aws::Vector<MeasureField>&& value) { m_targetValuesHasBeenSet = true; m_targetValues = std::move(value); }

    /**
     * <p>The target value field wells of a <code>GaugeChartVisual</code>.</p>
     */
    inline GaugeChartFieldWells& WithTargetValues(const Aws::Vector<MeasureField>& value) { SetTargetValues(value); return *this;}

    /**
     * <p>The target value field wells of a <code>GaugeChartVisual</code>.</p>
     */
    inline GaugeChartFieldWells& WithTargetValues(Aws::Vector<MeasureField>&& value) { SetTargetValues(std::move(value)); return *this;}

    /**
     * <p>The target value field wells of a <code>GaugeChartVisual</code>.</p>
     */
    inline GaugeChartFieldWells& AddTargetValues(const MeasureField& value) { m_targetValuesHasBeenSet = true; m_targetValues.push_back(value); return *this; }

    /**
     * <p>The target value field wells of a <code>GaugeChartVisual</code>.</p>
     */
    inline GaugeChartFieldWells& AddTargetValues(MeasureField&& value) { m_targetValuesHasBeenSet = true; m_targetValues.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<MeasureField> m_values;
    bool m_valuesHasBeenSet = false;

    Aws::Vector<MeasureField> m_targetValues;
    bool m_targetValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
