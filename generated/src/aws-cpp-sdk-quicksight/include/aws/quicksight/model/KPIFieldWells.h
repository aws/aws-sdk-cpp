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
    AWS_QUICKSIGHT_API KPIFieldWells() = default;
    AWS_QUICKSIGHT_API KPIFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API KPIFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value field wells of a KPI visual.</p>
     */
    inline const Aws::Vector<MeasureField>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<MeasureField>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<MeasureField>>
    KPIFieldWells& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = MeasureField>
    KPIFieldWells& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The target value field wells of a KPI visual.</p>
     */
    inline const Aws::Vector<MeasureField>& GetTargetValues() const { return m_targetValues; }
    inline bool TargetValuesHasBeenSet() const { return m_targetValuesHasBeenSet; }
    template<typename TargetValuesT = Aws::Vector<MeasureField>>
    void SetTargetValues(TargetValuesT&& value) { m_targetValuesHasBeenSet = true; m_targetValues = std::forward<TargetValuesT>(value); }
    template<typename TargetValuesT = Aws::Vector<MeasureField>>
    KPIFieldWells& WithTargetValues(TargetValuesT&& value) { SetTargetValues(std::forward<TargetValuesT>(value)); return *this;}
    template<typename TargetValuesT = MeasureField>
    KPIFieldWells& AddTargetValues(TargetValuesT&& value) { m_targetValuesHasBeenSet = true; m_targetValues.emplace_back(std::forward<TargetValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The trend group field wells of a KPI visual.</p>
     */
    inline const Aws::Vector<DimensionField>& GetTrendGroups() const { return m_trendGroups; }
    inline bool TrendGroupsHasBeenSet() const { return m_trendGroupsHasBeenSet; }
    template<typename TrendGroupsT = Aws::Vector<DimensionField>>
    void SetTrendGroups(TrendGroupsT&& value) { m_trendGroupsHasBeenSet = true; m_trendGroups = std::forward<TrendGroupsT>(value); }
    template<typename TrendGroupsT = Aws::Vector<DimensionField>>
    KPIFieldWells& WithTrendGroups(TrendGroupsT&& value) { SetTrendGroups(std::forward<TrendGroupsT>(value)); return *this;}
    template<typename TrendGroupsT = DimensionField>
    KPIFieldWells& AddTrendGroups(TrendGroupsT&& value) { m_trendGroupsHasBeenSet = true; m_trendGroups.emplace_back(std::forward<TrendGroupsT>(value)); return *this; }
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
