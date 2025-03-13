/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/SimpleTotalAggregationFunction.h>
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
   * <p>An aggregation function that aggregates the total values of a
   * measure.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TotalAggregationFunction">AWS
   * API Reference</a></p>
   */
  class TotalAggregationFunction
  {
  public:
    AWS_QUICKSIGHT_API TotalAggregationFunction() = default;
    AWS_QUICKSIGHT_API TotalAggregationFunction(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TotalAggregationFunction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A built in aggregation function for total values.</p>
     */
    inline SimpleTotalAggregationFunction GetSimpleTotalAggregationFunction() const { return m_simpleTotalAggregationFunction; }
    inline bool SimpleTotalAggregationFunctionHasBeenSet() const { return m_simpleTotalAggregationFunctionHasBeenSet; }
    inline void SetSimpleTotalAggregationFunction(SimpleTotalAggregationFunction value) { m_simpleTotalAggregationFunctionHasBeenSet = true; m_simpleTotalAggregationFunction = value; }
    inline TotalAggregationFunction& WithSimpleTotalAggregationFunction(SimpleTotalAggregationFunction value) { SetSimpleTotalAggregationFunction(value); return *this;}
    ///@}
  private:

    SimpleTotalAggregationFunction m_simpleTotalAggregationFunction{SimpleTotalAggregationFunction::NOT_SET};
    bool m_simpleTotalAggregationFunctionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
