/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DataPrepAggregationFunction.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>Configuration for how to handle value columns in pivot operations, including
 * aggregation settings.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ValueColumnConfiguration">AWS
 * API Reference</a></p>
 */
class ValueColumnConfiguration {
 public:
  AWS_QUICKSIGHT_API ValueColumnConfiguration() = default;
  AWS_QUICKSIGHT_API ValueColumnConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API ValueColumnConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The aggregation function to apply when multiple values map to the same
   * pivoted cell.</p>
   */
  inline const DataPrepAggregationFunction& GetAggregationFunction() const { return m_aggregationFunction; }
  inline bool AggregationFunctionHasBeenSet() const { return m_aggregationFunctionHasBeenSet; }
  template <typename AggregationFunctionT = DataPrepAggregationFunction>
  void SetAggregationFunction(AggregationFunctionT&& value) {
    m_aggregationFunctionHasBeenSet = true;
    m_aggregationFunction = std::forward<AggregationFunctionT>(value);
  }
  template <typename AggregationFunctionT = DataPrepAggregationFunction>
  ValueColumnConfiguration& WithAggregationFunction(AggregationFunctionT&& value) {
    SetAggregationFunction(std::forward<AggregationFunctionT>(value));
    return *this;
  }
  ///@}
 private:
  DataPrepAggregationFunction m_aggregationFunction;
  bool m_aggregationFunctionHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
