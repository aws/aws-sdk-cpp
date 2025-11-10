/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DataPrepListAggregationFunction.h>
#include <aws/quicksight/model/DataPrepSimpleAggregationFunction.h>

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
 * <p>Defines the type of aggregation function to apply to data during data
 * preparation, supporting simple and list aggregations.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataPrepAggregationFunction">AWS
 * API Reference</a></p>
 */
class DataPrepAggregationFunction {
 public:
  AWS_QUICKSIGHT_API DataPrepAggregationFunction() = default;
  AWS_QUICKSIGHT_API DataPrepAggregationFunction(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API DataPrepAggregationFunction& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A simple aggregation function such as <code>SUM</code>, <code>COUNT</code>,
   * <code>AVERAGE</code>, <code>MIN</code>, <code>MAX</code>, <code>MEDIAN</code>,
   * <code>VARIANCE</code>, or <code>STANDARD_DEVIATION</code>.</p>
   */
  inline const DataPrepSimpleAggregationFunction& GetSimpleAggregation() const { return m_simpleAggregation; }
  inline bool SimpleAggregationHasBeenSet() const { return m_simpleAggregationHasBeenSet; }
  template <typename SimpleAggregationT = DataPrepSimpleAggregationFunction>
  void SetSimpleAggregation(SimpleAggregationT&& value) {
    m_simpleAggregationHasBeenSet = true;
    m_simpleAggregation = std::forward<SimpleAggregationT>(value);
  }
  template <typename SimpleAggregationT = DataPrepSimpleAggregationFunction>
  DataPrepAggregationFunction& WithSimpleAggregation(SimpleAggregationT&& value) {
    SetSimpleAggregation(std::forward<SimpleAggregationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list aggregation function that concatenates values from multiple rows into
   * a single delimited string.</p>
   */
  inline const DataPrepListAggregationFunction& GetListAggregation() const { return m_listAggregation; }
  inline bool ListAggregationHasBeenSet() const { return m_listAggregationHasBeenSet; }
  template <typename ListAggregationT = DataPrepListAggregationFunction>
  void SetListAggregation(ListAggregationT&& value) {
    m_listAggregationHasBeenSet = true;
    m_listAggregation = std::forward<ListAggregationT>(value);
  }
  template <typename ListAggregationT = DataPrepListAggregationFunction>
  DataPrepAggregationFunction& WithListAggregation(ListAggregationT&& value) {
    SetListAggregation(std::forward<ListAggregationT>(value));
    return *this;
  }
  ///@}
 private:
  DataPrepSimpleAggregationFunction m_simpleAggregation;
  bool m_simpleAggregationHasBeenSet = false;

  DataPrepListAggregationFunction m_listAggregation;
  bool m_listAggregationHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
