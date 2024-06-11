/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/MeasureField.h>
#include <aws/quicksight/model/DimensionField.h>
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
   * <p>The field well configuration of a KPI visual.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/KPIFieldWells">AWS
   * API Reference</a></p>
   */
  class KPIFieldWells
  {
  public:
    AWS_QUICKSIGHT_API KPIFieldWells();
    AWS_QUICKSIGHT_API KPIFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API KPIFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value field wells of a KPI visual.</p>
     */
    inline const Aws::Vector<MeasureField>& GetValues() const{ return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    inline void SetValues(const Aws::Vector<MeasureField>& value) { m_valuesHasBeenSet = true; m_values = value; }
    inline void SetValues(Aws::Vector<MeasureField>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }
    inline KPIFieldWells& WithValues(const Aws::Vector<MeasureField>& value) { SetValues(value); return *this;}
    inline KPIFieldWells& WithValues(Aws::Vector<MeasureField>&& value) { SetValues(std::move(value)); return *this;}
    inline KPIFieldWells& AddValues(const MeasureField& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    inline KPIFieldWells& AddValues(MeasureField&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The target value field wells of a KPI visual.</p>
     */
    inline const Aws::Vector<MeasureField>& GetTargetValues() const{ return m_targetValues; }
    inline bool TargetValuesHasBeenSet() const { return m_targetValuesHasBeenSet; }
    inline void SetTargetValues(const Aws::Vector<MeasureField>& value) { m_targetValuesHasBeenSet = true; m_targetValues = value; }
    inline void SetTargetValues(Aws::Vector<MeasureField>&& value) { m_targetValuesHasBeenSet = true; m_targetValues = std::move(value); }
    inline KPIFieldWells& WithTargetValues(const Aws::Vector<MeasureField>& value) { SetTargetValues(value); return *this;}
    inline KPIFieldWells& WithTargetValues(Aws::Vector<MeasureField>&& value) { SetTargetValues(std::move(value)); return *this;}
    inline KPIFieldWells& AddTargetValues(const MeasureField& value) { m_targetValuesHasBeenSet = true; m_targetValues.push_back(value); return *this; }
    inline KPIFieldWells& AddTargetValues(MeasureField&& value) { m_targetValuesHasBeenSet = true; m_targetValues.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The trend group field wells of a KPI visual.</p>
     */
    inline const Aws::Vector<DimensionField>& GetTrendGroups() const{ return m_trendGroups; }
    inline bool TrendGroupsHasBeenSet() const { return m_trendGroupsHasBeenSet; }
    inline void SetTrendGroups(const Aws::Vector<DimensionField>& value) { m_trendGroupsHasBeenSet = true; m_trendGroups = value; }
    inline void SetTrendGroups(Aws::Vector<DimensionField>&& value) { m_trendGroupsHasBeenSet = true; m_trendGroups = std::move(value); }
    inline KPIFieldWells& WithTrendGroups(const Aws::Vector<DimensionField>& value) { SetTrendGroups(value); return *this;}
    inline KPIFieldWells& WithTrendGroups(Aws::Vector<DimensionField>&& value) { SetTrendGroups(std::move(value)); return *this;}
    inline KPIFieldWells& AddTrendGroups(const DimensionField& value) { m_trendGroupsHasBeenSet = true; m_trendGroups.push_back(value); return *this; }
    inline KPIFieldWells& AddTrendGroups(DimensionField&& value) { m_trendGroupsHasBeenSet = true; m_trendGroups.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<MeasureField> m_values;
    bool m_valuesHasBeenSet = false;

    Aws::Vector<MeasureField> m_targetValues;
    bool m_targetValuesHasBeenSet = false;

    Aws::Vector<DimensionField> m_trendGroups;
    bool m_trendGroupsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
