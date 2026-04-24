/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ControlSortDirection.h>

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
 * <p>The sort configuration for selectable values in a control.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SelectableValuesSort">AWS
 * API Reference</a></p>
 */
class SelectableValuesSort {
 public:
  AWS_QUICKSIGHT_API SelectableValuesSort() = default;
  AWS_QUICKSIGHT_API SelectableValuesSort(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API SelectableValuesSort& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The sort direction for the selectable values. Choose one of the following
   * options:</p> <ul> <li> <p> <code>ASC</code>: Sort in ascending order.</p> </li>
   * <li> <p> <code>DESC</code>: Sort in descending order.</p> </li> <li> <p>
   * <code>USER_DEFINED_ORDER</code>: Preserve the order in which the values were
   * entered.</p> </li> </ul>
   */
  inline ControlSortDirection GetDirection() const { return m_direction; }
  inline bool DirectionHasBeenSet() const { return m_directionHasBeenSet; }
  inline void SetDirection(ControlSortDirection value) {
    m_directionHasBeenSet = true;
    m_direction = value;
  }
  inline SelectableValuesSort& WithDirection(ControlSortDirection value) {
    SetDirection(value);
    return *this;
  }
  ///@}
 private:
  ControlSortDirection m_direction{ControlSortDirection::NOT_SET};
  bool m_directionHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
