/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AggregationSortConfiguration.h>
#include <aws/quicksight/model/SelectableValuesSort.h>

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
 * <p>The sort configuration for control values. This is a tagged union type.
 * Specify either <code>SelectableValuesSort</code> or
 * <code>ControlColumnSort</code>, but not both.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ControlSortConfiguration">AWS
 * API Reference</a></p>
 */
class ControlSortConfiguration {
 public:
  AWS_QUICKSIGHT_API ControlSortConfiguration() = default;
  AWS_QUICKSIGHT_API ControlSortConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API ControlSortConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The sort configuration for user-specified values in the control. Use this
   * option to sort values that are manually entered by users in a dropdown or list
   * control.</p>
   */
  inline const SelectableValuesSort& GetSelectableValuesSort() const { return m_selectableValuesSort; }
  inline bool SelectableValuesSortHasBeenSet() const { return m_selectableValuesSortHasBeenSet; }
  template <typename SelectableValuesSortT = SelectableValuesSort>
  void SetSelectableValuesSort(SelectableValuesSortT&& value) {
    m_selectableValuesSortHasBeenSet = true;
    m_selectableValuesSort = std::forward<SelectableValuesSortT>(value);
  }
  template <typename SelectableValuesSortT = SelectableValuesSort>
  ControlSortConfiguration& WithSelectableValuesSort(SelectableValuesSortT&& value) {
    SetSelectableValuesSort(std::forward<SelectableValuesSortT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sort configuration for controls that are tied to a dataset column. Use
   * this option to sort control values by an aggregate of a column.</p>
   */
  inline const AggregationSortConfiguration& GetControlColumnSort() const { return m_controlColumnSort; }
  inline bool ControlColumnSortHasBeenSet() const { return m_controlColumnSortHasBeenSet; }
  template <typename ControlColumnSortT = AggregationSortConfiguration>
  void SetControlColumnSort(ControlColumnSortT&& value) {
    m_controlColumnSortHasBeenSet = true;
    m_controlColumnSort = std::forward<ControlColumnSortT>(value);
  }
  template <typename ControlColumnSortT = AggregationSortConfiguration>
  ControlSortConfiguration& WithControlColumnSort(ControlColumnSortT&& value) {
    SetControlColumnSort(std::forward<ControlColumnSortT>(value));
    return *this;
  }
  ///@}
 private:
  SelectableValuesSort m_selectableValuesSort;

  AggregationSortConfiguration m_controlColumnSort;
  bool m_selectableValuesSortHasBeenSet = false;
  bool m_controlColumnSortHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
