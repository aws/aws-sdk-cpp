/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
 * <p>Represents a date value used in filter conditions.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataSetDateFilterValue">AWS
 * API Reference</a></p>
 */
class DataSetDateFilterValue {
 public:
  AWS_QUICKSIGHT_API DataSetDateFilterValue() = default;
  AWS_QUICKSIGHT_API DataSetDateFilterValue(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API DataSetDateFilterValue& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A static date value used for filtering.</p>
   */
  inline const Aws::Utils::DateTime& GetStaticValue() const { return m_staticValue; }
  inline bool StaticValueHasBeenSet() const { return m_staticValueHasBeenSet; }
  template <typename StaticValueT = Aws::Utils::DateTime>
  void SetStaticValue(StaticValueT&& value) {
    m_staticValueHasBeenSet = true;
    m_staticValue = std::forward<StaticValueT>(value);
  }
  template <typename StaticValueT = Aws::Utils::DateTime>
  DataSetDateFilterValue& WithStaticValue(StaticValueT&& value) {
    SetStaticValue(std::forward<StaticValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_staticValue{};
  bool m_staticValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
