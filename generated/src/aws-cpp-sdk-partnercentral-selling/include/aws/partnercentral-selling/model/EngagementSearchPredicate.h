/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/EngagementSearchFilterName.h>
#include <aws/partnercentral-selling/model/EngagementSearchFilterValue.h>

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
 * <p>A leaf condition in an <code>EngagementSearchFilter</code> tree. It specifies
 * the field (<code>Key</code>) and the typed value (<code>Value</code>) to
 * compare. The <code>EngagementSearchFilter</code> member that contains the
 * condition specifies the comparison operator.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/EngagementSearchPredicate">AWS
 * API Reference</a></p>
 */
class EngagementSearchPredicate {
 public:
  AWS_PARTNERCENTRALSELLING_API EngagementSearchPredicate() = default;
  AWS_PARTNERCENTRALSELLING_API EngagementSearchPredicate(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API EngagementSearchPredicate& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The engagement field that the condition applies to.</p>
   */
  inline EngagementSearchFilterName GetKey() const { return m_key; }
  inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
  inline void SetKey(EngagementSearchFilterName value) {
    m_keyHasBeenSet = true;
    m_key = value;
  }
  inline EngagementSearchPredicate& WithKey(EngagementSearchFilterName value) {
    SetKey(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The typed value the condition compares against.</p>
   */
  inline const EngagementSearchFilterValue& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = EngagementSearchFilterValue>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = EngagementSearchFilterValue>
  EngagementSearchPredicate& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}
 private:
  EngagementSearchFilterName m_key{EngagementSearchFilterName::NOT_SET};

  EngagementSearchFilterValue m_value;
  bool m_keyHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
