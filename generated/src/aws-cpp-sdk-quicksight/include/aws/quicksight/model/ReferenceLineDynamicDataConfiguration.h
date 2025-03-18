/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ColumnIdentifier.h>
#include <aws/quicksight/model/AggregationFunction.h>
#include <aws/quicksight/model/NumericalAggregationFunction.h>
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
   * <p>The dynamic configuration of the reference line data
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ReferenceLineDynamicDataConfiguration">AWS
   * API Reference</a></p>
   */
  class ReferenceLineDynamicDataConfiguration
  {
  public:
    AWS_QUICKSIGHT_API ReferenceLineDynamicDataConfiguration() = default;
    AWS_QUICKSIGHT_API ReferenceLineDynamicDataConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ReferenceLineDynamicDataConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The column that the dynamic data targets.</p>
     */
    inline const ColumnIdentifier& GetColumn() const { return m_column; }
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }
    template<typename ColumnT = ColumnIdentifier>
    void SetColumn(ColumnT&& value) { m_columnHasBeenSet = true; m_column = std::forward<ColumnT>(value); }
    template<typename ColumnT = ColumnIdentifier>
    ReferenceLineDynamicDataConfiguration& WithColumn(ColumnT&& value) { SetColumn(std::forward<ColumnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The aggregation function that is used in the dynamic data.</p>
     */
    inline const AggregationFunction& GetMeasureAggregationFunction() const { return m_measureAggregationFunction; }
    inline bool MeasureAggregationFunctionHasBeenSet() const { return m_measureAggregationFunctionHasBeenSet; }
    template<typename MeasureAggregationFunctionT = AggregationFunction>
    void SetMeasureAggregationFunction(MeasureAggregationFunctionT&& value) { m_measureAggregationFunctionHasBeenSet = true; m_measureAggregationFunction = std::forward<MeasureAggregationFunctionT>(value); }
    template<typename MeasureAggregationFunctionT = AggregationFunction>
    ReferenceLineDynamicDataConfiguration& WithMeasureAggregationFunction(MeasureAggregationFunctionT&& value) { SetMeasureAggregationFunction(std::forward<MeasureAggregationFunctionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The calculation that is used in the dynamic data.</p>
     */
    inline const NumericalAggregationFunction& GetCalculation() const { return m_calculation; }
    inline bool CalculationHasBeenSet() const { return m_calculationHasBeenSet; }
    template<typename CalculationT = NumericalAggregationFunction>
    void SetCalculation(CalculationT&& value) { m_calculationHasBeenSet = true; m_calculation = std::forward<CalculationT>(value); }
    template<typename CalculationT = NumericalAggregationFunction>
    ReferenceLineDynamicDataConfiguration& WithCalculation(CalculationT&& value) { SetCalculation(std::forward<CalculationT>(value)); return *this;}
    ///@}
  private:

    ColumnIdentifier m_column;
    bool m_columnHasBeenSet = false;

    AggregationFunction m_measureAggregationFunction;
    bool m_measureAggregationFunctionHasBeenSet = false;

    NumericalAggregationFunction m_calculation;
    bool m_calculationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
