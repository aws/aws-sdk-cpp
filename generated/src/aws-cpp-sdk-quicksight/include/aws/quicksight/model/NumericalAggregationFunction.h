/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/SimpleNumericalAggregationFunction.h>
#include <aws/quicksight/model/PercentileAggregation.h>
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
   * <p>Aggregation for numerical values.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/NumericalAggregationFunction">AWS
   * API Reference</a></p>
   */
  class NumericalAggregationFunction
  {
  public:
    AWS_QUICKSIGHT_API NumericalAggregationFunction() = default;
    AWS_QUICKSIGHT_API NumericalAggregationFunction(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API NumericalAggregationFunction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Built-in aggregation functions for numerical values.</p> <ul> <li> <p>
     * <code>SUM</code>: The sum of a dimension or measure. </p> </li> <li> <p>
     * <code>AVERAGE</code>: The average of a dimension or measure.</p> </li> <li> <p>
     * <code>MIN</code>: The minimum value of a dimension or measure.</p> </li> <li>
     * <p> <code>MAX</code>: The maximum value of a dimension or measure.</p> </li>
     * <li> <p> <code>COUNT</code>: The count of a dimension or measure.</p> </li> <li>
     * <p> <code>DISTINCT_COUNT</code>: The count of distinct values in a dimension or
     * measure.</p> </li> <li> <p> <code>VAR</code>: The variance of a dimension or
     * measure.</p> </li> <li> <p> <code>VARP</code>: The partitioned variance of a
     * dimension or measure.</p> </li> <li> <p> <code>STDEV</code>: The standard
     * deviation of a dimension or measure.</p> </li> <li> <p> <code>STDEVP</code>: The
     * partitioned standard deviation of a dimension or measure.</p> </li> <li> <p>
     * <code>MEDIAN</code>: The median value of a dimension or measure.</p> </li> </ul>
     */
    inline SimpleNumericalAggregationFunction GetSimpleNumericalAggregation() const { return m_simpleNumericalAggregation; }
    inline bool SimpleNumericalAggregationHasBeenSet() const { return m_simpleNumericalAggregationHasBeenSet; }
    inline void SetSimpleNumericalAggregation(SimpleNumericalAggregationFunction value) { m_simpleNumericalAggregationHasBeenSet = true; m_simpleNumericalAggregation = value; }
    inline NumericalAggregationFunction& WithSimpleNumericalAggregation(SimpleNumericalAggregationFunction value) { SetSimpleNumericalAggregation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An aggregation based on the percentile of values in a dimension or
     * measure.</p>
     */
    inline const PercentileAggregation& GetPercentileAggregation() const { return m_percentileAggregation; }
    inline bool PercentileAggregationHasBeenSet() const { return m_percentileAggregationHasBeenSet; }
    template<typename PercentileAggregationT = PercentileAggregation>
    void SetPercentileAggregation(PercentileAggregationT&& value) { m_percentileAggregationHasBeenSet = true; m_percentileAggregation = std::forward<PercentileAggregationT>(value); }
    template<typename PercentileAggregationT = PercentileAggregation>
    NumericalAggregationFunction& WithPercentileAggregation(PercentileAggregationT&& value) { SetPercentileAggregation(std::forward<PercentileAggregationT>(value)); return *this;}
    ///@}
  private:

    SimpleNumericalAggregationFunction m_simpleNumericalAggregation{SimpleNumericalAggregationFunction::NOT_SET};
    bool m_simpleNumericalAggregationHasBeenSet = false;

    PercentileAggregation m_percentileAggregation;
    bool m_percentileAggregationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
