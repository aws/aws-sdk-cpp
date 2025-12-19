/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
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
 * <p>Defines an aggregation function to be applied to grouped data, creating a new
 * column with the calculated result.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/Aggregation">AWS
 * API Reference</a></p>
 */
class Aggregation {
 public:
  AWS_QUICKSIGHT_API Aggregation() = default;
  AWS_QUICKSIGHT_API Aggregation(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The aggregation function to apply, such as <code>SUM</code>,
   * <code>COUNT</code>, <code>AVERAGE</code>, <code>MIN</code>, <code>MAX</code>
   * </p>
   */
  inline const DataPrepAggregationFunction& GetAggregationFunction() const { return m_aggregationFunction; }
  inline bool AggregationFunctionHasBeenSet() const { return m_aggregationFunctionHasBeenSet; }
  template <typename AggregationFunctionT = DataPrepAggregationFunction>
  void SetAggregationFunction(AggregationFunctionT&& value) {
    m_aggregationFunctionHasBeenSet = true;
    m_aggregationFunction = std::forward<AggregationFunctionT>(value);
  }
  template <typename AggregationFunctionT = DataPrepAggregationFunction>
  Aggregation& WithAggregationFunction(AggregationFunctionT&& value) {
    SetAggregationFunction(std::forward<AggregationFunctionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name for the new column that will contain the aggregated values.</p>
   */
  inline const Aws::String& GetNewColumnName() const { return m_newColumnName; }
  inline bool NewColumnNameHasBeenSet() const { return m_newColumnNameHasBeenSet; }
  template <typename NewColumnNameT = Aws::String>
  void SetNewColumnName(NewColumnNameT&& value) {
    m_newColumnNameHasBeenSet = true;
    m_newColumnName = std::forward<NewColumnNameT>(value);
  }
  template <typename NewColumnNameT = Aws::String>
  Aggregation& WithNewColumnName(NewColumnNameT&& value) {
    SetNewColumnName(std::forward<NewColumnNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique identifier for the new column that will contain the aggregated
   * values.</p>
   */
  inline const Aws::String& GetNewColumnId() const { return m_newColumnId; }
  inline bool NewColumnIdHasBeenSet() const { return m_newColumnIdHasBeenSet; }
  template <typename NewColumnIdT = Aws::String>
  void SetNewColumnId(NewColumnIdT&& value) {
    m_newColumnIdHasBeenSet = true;
    m_newColumnId = std::forward<NewColumnIdT>(value);
  }
  template <typename NewColumnIdT = Aws::String>
  Aggregation& WithNewColumnId(NewColumnIdT&& value) {
    SetNewColumnId(std::forward<NewColumnIdT>(value));
    return *this;
  }
  ///@}
 private:
  DataPrepAggregationFunction m_aggregationFunction;

  Aws::String m_newColumnName;

  Aws::String m_newColumnId;
  bool m_aggregationFunctionHasBeenSet = false;
  bool m_newColumnNameHasBeenSet = false;
  bool m_newColumnIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
