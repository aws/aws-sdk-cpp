/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
 * <p>Represents a list of string values used in filter conditions.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataSetStringListFilterValue">AWS
 * API Reference</a></p>
 */
class DataSetStringListFilterValue {
 public:
  AWS_QUICKSIGHT_API DataSetStringListFilterValue() = default;
  AWS_QUICKSIGHT_API DataSetStringListFilterValue(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API DataSetStringListFilterValue& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of static string values used for filtering.</p>
   */
  inline const Aws::Vector<Aws::String>& GetStaticValues() const { return m_staticValues; }
  inline bool StaticValuesHasBeenSet() const { return m_staticValuesHasBeenSet; }
  template <typename StaticValuesT = Aws::Vector<Aws::String>>
  void SetStaticValues(StaticValuesT&& value) {
    m_staticValuesHasBeenSet = true;
    m_staticValues = std::forward<StaticValuesT>(value);
  }
  template <typename StaticValuesT = Aws::Vector<Aws::String>>
  DataSetStringListFilterValue& WithStaticValues(StaticValuesT&& value) {
    SetStaticValues(std::forward<StaticValuesT>(value));
    return *this;
  }
  template <typename StaticValuesT = Aws::String>
  DataSetStringListFilterValue& AddStaticValues(StaticValuesT&& value) {
    m_staticValuesHasBeenSet = true;
    m_staticValues.emplace_back(std::forward<StaticValuesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_staticValues;
  bool m_staticValuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
