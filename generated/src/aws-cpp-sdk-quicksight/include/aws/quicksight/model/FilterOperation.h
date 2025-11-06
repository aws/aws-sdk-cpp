/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DataSetDateFilterCondition.h>
#include <aws/quicksight/model/DataSetNumericFilterCondition.h>
#include <aws/quicksight/model/DataSetStringFilterCondition.h>

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
 * <p>A transform operation that filters rows based on a condition.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FilterOperation">AWS
 * API Reference</a></p>
 */
class FilterOperation {
 public:
  AWS_QUICKSIGHT_API FilterOperation() = default;
  AWS_QUICKSIGHT_API FilterOperation(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API FilterOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An expression that must evaluate to a Boolean value. Rows for which the
   * expression evaluates to true are kept in the dataset.</p>
   */
  inline const Aws::String& GetConditionExpression() const { return m_conditionExpression; }
  inline bool ConditionExpressionHasBeenSet() const { return m_conditionExpressionHasBeenSet; }
  template <typename ConditionExpressionT = Aws::String>
  void SetConditionExpression(ConditionExpressionT&& value) {
    m_conditionExpressionHasBeenSet = true;
    m_conditionExpression = std::forward<ConditionExpressionT>(value);
  }
  template <typename ConditionExpressionT = Aws::String>
  FilterOperation& WithConditionExpression(ConditionExpressionT&& value) {
    SetConditionExpression(std::forward<ConditionExpressionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A string-based filter condition within a filter operation.</p>
   */
  inline const DataSetStringFilterCondition& GetStringFilterCondition() const { return m_stringFilterCondition; }
  inline bool StringFilterConditionHasBeenSet() const { return m_stringFilterConditionHasBeenSet; }
  template <typename StringFilterConditionT = DataSetStringFilterCondition>
  void SetStringFilterCondition(StringFilterConditionT&& value) {
    m_stringFilterConditionHasBeenSet = true;
    m_stringFilterCondition = std::forward<StringFilterConditionT>(value);
  }
  template <typename StringFilterConditionT = DataSetStringFilterCondition>
  FilterOperation& WithStringFilterCondition(StringFilterConditionT&& value) {
    SetStringFilterCondition(std::forward<StringFilterConditionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A numeric-based filter condition within a filter operation.</p>
   */
  inline const DataSetNumericFilterCondition& GetNumericFilterCondition() const { return m_numericFilterCondition; }
  inline bool NumericFilterConditionHasBeenSet() const { return m_numericFilterConditionHasBeenSet; }
  template <typename NumericFilterConditionT = DataSetNumericFilterCondition>
  void SetNumericFilterCondition(NumericFilterConditionT&& value) {
    m_numericFilterConditionHasBeenSet = true;
    m_numericFilterCondition = std::forward<NumericFilterConditionT>(value);
  }
  template <typename NumericFilterConditionT = DataSetNumericFilterCondition>
  FilterOperation& WithNumericFilterCondition(NumericFilterConditionT&& value) {
    SetNumericFilterCondition(std::forward<NumericFilterConditionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A date-based filter condition within a filter operation.</p>
   */
  inline const DataSetDateFilterCondition& GetDateFilterCondition() const { return m_dateFilterCondition; }
  inline bool DateFilterConditionHasBeenSet() const { return m_dateFilterConditionHasBeenSet; }
  template <typename DateFilterConditionT = DataSetDateFilterCondition>
  void SetDateFilterCondition(DateFilterConditionT&& value) {
    m_dateFilterConditionHasBeenSet = true;
    m_dateFilterCondition = std::forward<DateFilterConditionT>(value);
  }
  template <typename DateFilterConditionT = DataSetDateFilterCondition>
  FilterOperation& WithDateFilterCondition(DateFilterConditionT&& value) {
    SetDateFilterCondition(std::forward<DateFilterConditionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_conditionExpression;
  bool m_conditionExpressionHasBeenSet = false;

  DataSetStringFilterCondition m_stringFilterCondition;
  bool m_stringFilterConditionHasBeenSet = false;

  DataSetNumericFilterCondition m_numericFilterCondition;
  bool m_numericFilterConditionHasBeenSet = false;

  DataSetDateFilterCondition m_dateFilterCondition;
  bool m_dateFilterConditionHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
