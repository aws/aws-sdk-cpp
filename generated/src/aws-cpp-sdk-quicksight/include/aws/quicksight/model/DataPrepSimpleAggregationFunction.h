/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DataPrepSimpleAggregationFunctionType.h>

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
 * <p>A simple aggregation function that performs standard statistical operations
 * on a column.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataPrepSimpleAggregationFunction">AWS
 * API Reference</a></p>
 */
class DataPrepSimpleAggregationFunction {
 public:
  AWS_QUICKSIGHT_API DataPrepSimpleAggregationFunction() = default;
  AWS_QUICKSIGHT_API DataPrepSimpleAggregationFunction(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API DataPrepSimpleAggregationFunction& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the column on which to perform the aggregation function.</p>
   */
  inline const Aws::String& GetInputColumnName() const { return m_inputColumnName; }
  inline bool InputColumnNameHasBeenSet() const { return m_inputColumnNameHasBeenSet; }
  template <typename InputColumnNameT = Aws::String>
  void SetInputColumnName(InputColumnNameT&& value) {
    m_inputColumnNameHasBeenSet = true;
    m_inputColumnName = std::forward<InputColumnNameT>(value);
  }
  template <typename InputColumnNameT = Aws::String>
  DataPrepSimpleAggregationFunction& WithInputColumnName(InputColumnNameT&& value) {
    SetInputColumnName(std::forward<InputColumnNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of aggregation function to perform, such as <code>COUNT</code>,
   * <code>SUM</code>, <code>AVERAGE</code>, <code>MIN</code>, <code>MAX</code>,
   * <code>MEDIAN</code>, <code>VARIANCE</code>, or
   * <code>STANDARD_DEVIATION</code>.</p>
   */
  inline DataPrepSimpleAggregationFunctionType GetFunctionType() const { return m_functionType; }
  inline bool FunctionTypeHasBeenSet() const { return m_functionTypeHasBeenSet; }
  inline void SetFunctionType(DataPrepSimpleAggregationFunctionType value) {
    m_functionTypeHasBeenSet = true;
    m_functionType = value;
  }
  inline DataPrepSimpleAggregationFunction& WithFunctionType(DataPrepSimpleAggregationFunctionType value) {
    SetFunctionType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_inputColumnName;

  DataPrepSimpleAggregationFunctionType m_functionType{DataPrepSimpleAggregationFunctionType::NOT_SET};
  bool m_inputColumnNameHasBeenSet = false;
  bool m_functionTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
