/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/NumericalAggregationFunction.h>
#include <aws/quicksight/model/CategoricalAggregationFunction.h>
#include <aws/quicksight/model/DateAggregationFunction.h>
#include <aws/quicksight/model/AttributeAggregationFunction.h>
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
   * <p>An aggregation function aggregates values from a dimension or measure.</p>
   * <p>This is a union type structure. For this structure to be valid, only one of
   * the attributes can be defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AggregationFunction">AWS
   * API Reference</a></p>
   */
  class AggregationFunction
  {
  public:
    AWS_QUICKSIGHT_API AggregationFunction() = default;
    AWS_QUICKSIGHT_API AggregationFunction(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AggregationFunction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Aggregation for numerical values.</p>
     */
    inline const NumericalAggregationFunction& GetNumericalAggregationFunction() const { return m_numericalAggregationFunction; }
    inline bool NumericalAggregationFunctionHasBeenSet() const { return m_numericalAggregationFunctionHasBeenSet; }
    template<typename NumericalAggregationFunctionT = NumericalAggregationFunction>
    void SetNumericalAggregationFunction(NumericalAggregationFunctionT&& value) { m_numericalAggregationFunctionHasBeenSet = true; m_numericalAggregationFunction = std::forward<NumericalAggregationFunctionT>(value); }
    template<typename NumericalAggregationFunctionT = NumericalAggregationFunction>
    AggregationFunction& WithNumericalAggregationFunction(NumericalAggregationFunctionT&& value) { SetNumericalAggregationFunction(std::forward<NumericalAggregationFunctionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Aggregation for categorical values.</p> <ul> <li> <p> <code>COUNT</code>:
     * Aggregate by the total number of values, including duplicates.</p> </li> <li>
     * <p> <code>DISTINCT_COUNT</code>: Aggregate by the total number of distinct
     * values.</p> </li> </ul>
     */
    inline CategoricalAggregationFunction GetCategoricalAggregationFunction() const { return m_categoricalAggregationFunction; }
    inline bool CategoricalAggregationFunctionHasBeenSet() const { return m_categoricalAggregationFunctionHasBeenSet; }
    inline void SetCategoricalAggregationFunction(CategoricalAggregationFunction value) { m_categoricalAggregationFunctionHasBeenSet = true; m_categoricalAggregationFunction = value; }
    inline AggregationFunction& WithCategoricalAggregationFunction(CategoricalAggregationFunction value) { SetCategoricalAggregationFunction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Aggregation for date values.</p> <ul> <li> <p> <code>COUNT</code>: Aggregate
     * by the total number of values, including duplicates.</p> </li> <li> <p>
     * <code>DISTINCT_COUNT</code>: Aggregate by the total number of distinct
     * values.</p> </li> <li> <p> <code>MIN</code>: Select the smallest date value.</p>
     * </li> <li> <p> <code>MAX</code>: Select the largest date value.</p> </li> </ul>
     */
    inline DateAggregationFunction GetDateAggregationFunction() const { return m_dateAggregationFunction; }
    inline bool DateAggregationFunctionHasBeenSet() const { return m_dateAggregationFunctionHasBeenSet; }
    inline void SetDateAggregationFunction(DateAggregationFunction value) { m_dateAggregationFunctionHasBeenSet = true; m_dateAggregationFunction = value; }
    inline AggregationFunction& WithDateAggregationFunction(DateAggregationFunction value) { SetDateAggregationFunction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Aggregation for attributes.</p>
     */
    inline const AttributeAggregationFunction& GetAttributeAggregationFunction() const { return m_attributeAggregationFunction; }
    inline bool AttributeAggregationFunctionHasBeenSet() const { return m_attributeAggregationFunctionHasBeenSet; }
    template<typename AttributeAggregationFunctionT = AttributeAggregationFunction>
    void SetAttributeAggregationFunction(AttributeAggregationFunctionT&& value) { m_attributeAggregationFunctionHasBeenSet = true; m_attributeAggregationFunction = std::forward<AttributeAggregationFunctionT>(value); }
    template<typename AttributeAggregationFunctionT = AttributeAggregationFunction>
    AggregationFunction& WithAttributeAggregationFunction(AttributeAggregationFunctionT&& value) { SetAttributeAggregationFunction(std::forward<AttributeAggregationFunctionT>(value)); return *this;}
    ///@}
  private:

    NumericalAggregationFunction m_numericalAggregationFunction;
    bool m_numericalAggregationFunctionHasBeenSet = false;

    CategoricalAggregationFunction m_categoricalAggregationFunction{CategoricalAggregationFunction::NOT_SET};
    bool m_categoricalAggregationFunctionHasBeenSet = false;

    DateAggregationFunction m_dateAggregationFunction{DateAggregationFunction::NOT_SET};
    bool m_dateAggregationFunctionHasBeenSet = false;

    AttributeAggregationFunction m_attributeAggregationFunction;
    bool m_attributeAggregationFunctionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
