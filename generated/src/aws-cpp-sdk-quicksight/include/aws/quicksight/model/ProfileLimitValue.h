/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/LimitUnit.h>

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
 * <p>A value that defines a resource usage limit, consisting of a maximum value
 * and a unit of measurement.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ProfileLimitValue">AWS
 * API Reference</a></p>
 */
class ProfileLimitValue {
 public:
  AWS_QUICKSIGHT_API ProfileLimitValue() = default;
  AWS_QUICKSIGHT_API ProfileLimitValue(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API ProfileLimitValue& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The maximum allowed value for the resource.</p>
   */
  inline long long GetMaxValue() const { return m_maxValue; }
  inline bool MaxValueHasBeenSet() const { return m_maxValueHasBeenSet; }
  inline void SetMaxValue(long long value) {
    m_maxValueHasBeenSet = true;
    m_maxValue = value;
  }
  inline ProfileLimitValue& WithMaxValue(long long value) {
    SetMaxValue(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unit of measurement for the limit value.</p>
   */
  inline LimitUnit GetUnit() const { return m_unit; }
  inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
  inline void SetUnit(LimitUnit value) {
    m_unitHasBeenSet = true;
    m_unit = value;
  }
  inline ProfileLimitValue& WithUnit(LimitUnit value) {
    SetUnit(value);
    return *this;
  }
  ///@}
 private:
  long long m_maxValue{0};

  LimitUnit m_unit{LimitUnit::NOT_SET};
  bool m_maxValueHasBeenSet = false;
  bool m_unitHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
