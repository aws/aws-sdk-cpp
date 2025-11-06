/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DataSetNumericFilterValue.h>

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
 * <p>A filter condition that filters numeric values within a specified
 * range.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataSetNumericRangeFilterCondition">AWS
 * API Reference</a></p>
 */
class DataSetNumericRangeFilterCondition {
 public:
  AWS_QUICKSIGHT_API DataSetNumericRangeFilterCondition() = default;
  AWS_QUICKSIGHT_API DataSetNumericRangeFilterCondition(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API DataSetNumericRangeFilterCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The minimum numeric value for the range filter.</p>
   */
  inline const DataSetNumericFilterValue& GetRangeMinimum() const { return m_rangeMinimum; }
  inline bool RangeMinimumHasBeenSet() const { return m_rangeMinimumHasBeenSet; }
  template <typename RangeMinimumT = DataSetNumericFilterValue>
  void SetRangeMinimum(RangeMinimumT&& value) {
    m_rangeMinimumHasBeenSet = true;
    m_rangeMinimum = std::forward<RangeMinimumT>(value);
  }
  template <typename RangeMinimumT = DataSetNumericFilterValue>
  DataSetNumericRangeFilterCondition& WithRangeMinimum(RangeMinimumT&& value) {
    SetRangeMinimum(std::forward<RangeMinimumT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum numeric value for the range filter.</p>
   */
  inline const DataSetNumericFilterValue& GetRangeMaximum() const { return m_rangeMaximum; }
  inline bool RangeMaximumHasBeenSet() const { return m_rangeMaximumHasBeenSet; }
  template <typename RangeMaximumT = DataSetNumericFilterValue>
  void SetRangeMaximum(RangeMaximumT&& value) {
    m_rangeMaximumHasBeenSet = true;
    m_rangeMaximum = std::forward<RangeMaximumT>(value);
  }
  template <typename RangeMaximumT = DataSetNumericFilterValue>
  DataSetNumericRangeFilterCondition& WithRangeMaximum(RangeMaximumT&& value) {
    SetRangeMaximum(std::forward<RangeMaximumT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether to include the minimum value in the filter range.</p>
   */
  inline bool GetIncludeMinimum() const { return m_includeMinimum; }
  inline bool IncludeMinimumHasBeenSet() const { return m_includeMinimumHasBeenSet; }
  inline void SetIncludeMinimum(bool value) {
    m_includeMinimumHasBeenSet = true;
    m_includeMinimum = value;
  }
  inline DataSetNumericRangeFilterCondition& WithIncludeMinimum(bool value) {
    SetIncludeMinimum(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether to include the maximum value in the filter range.</p>
   */
  inline bool GetIncludeMaximum() const { return m_includeMaximum; }
  inline bool IncludeMaximumHasBeenSet() const { return m_includeMaximumHasBeenSet; }
  inline void SetIncludeMaximum(bool value) {
    m_includeMaximumHasBeenSet = true;
    m_includeMaximum = value;
  }
  inline DataSetNumericRangeFilterCondition& WithIncludeMaximum(bool value) {
    SetIncludeMaximum(value);
    return *this;
  }
  ///@}
 private:
  DataSetNumericFilterValue m_rangeMinimum;
  bool m_rangeMinimumHasBeenSet = false;

  DataSetNumericFilterValue m_rangeMaximum;
  bool m_rangeMaximumHasBeenSet = false;

  bool m_includeMinimum{false};
  bool m_includeMinimumHasBeenSet = false;

  bool m_includeMaximum{false};
  bool m_includeMaximumHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
