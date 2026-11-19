/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/FilterValue.h>
#include <aws/partnercentral-selling/model/FilterableField.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralSelling {
namespace Model {

/**
 * <p>A single comparison in a filter. It names the field to compare and the value
 * to compare it against.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/FilterCondition">AWS
 * API Reference</a></p>
 */
class FilterCondition {
 public:
  AWS_PARTNERCENTRALSELLING_API FilterCondition() = default;
  AWS_PARTNERCENTRALSELLING_API FilterCondition(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API FilterCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The field that the condition applies to.</p>
   */
  inline FilterableField GetKey() const { return m_key; }
  inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
  inline void SetKey(FilterableField value) {
    m_keyHasBeenSet = true;
    m_key = value;
  }
  inline FilterCondition& WithKey(FilterableField value) {
    SetKey(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value that the condition compares the field against.</p>
   */
  inline const FilterValue& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = FilterValue>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = FilterValue>
  FilterCondition& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}
 private:
  FilterableField m_key{FilterableField::NOT_SET};

  FilterValue m_value;
  bool m_keyHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
