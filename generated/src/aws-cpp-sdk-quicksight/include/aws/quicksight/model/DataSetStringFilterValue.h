/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
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
 * <p>Represents a string value used in filter conditions.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataSetStringFilterValue">AWS
 * API Reference</a></p>
 */
class DataSetStringFilterValue {
 public:
  AWS_QUICKSIGHT_API DataSetStringFilterValue() = default;
  AWS_QUICKSIGHT_API DataSetStringFilterValue(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API DataSetStringFilterValue& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A static string value used for filtering.</p>
   */
  inline const Aws::String& GetStaticValue() const { return m_staticValue; }
  inline bool StaticValueHasBeenSet() const { return m_staticValueHasBeenSet; }
  template <typename StaticValueT = Aws::String>
  void SetStaticValue(StaticValueT&& value) {
    m_staticValueHasBeenSet = true;
    m_staticValue = std::forward<StaticValueT>(value);
  }
  template <typename StaticValueT = Aws::String>
  DataSetStringFilterValue& WithStaticValue(StaticValueT&& value) {
    SetStaticValue(std::forward<StaticValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_staticValue;
  bool m_staticValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
