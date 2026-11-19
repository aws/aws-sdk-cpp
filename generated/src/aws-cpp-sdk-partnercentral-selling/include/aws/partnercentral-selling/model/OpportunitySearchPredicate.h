/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/OpportunitySearchFilterName.h>
#include <aws/partnercentral-selling/model/OpportunitySearchFilterValue.h>

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
 * <p>A leaf filter condition. It carries the field (<code>Key</code>) and the
 * typed value (<code>Value</code>) to compare against. The enclosing
 * <code>OpportunitySearchFilter</code> member determines the comparison
 * operator.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/OpportunitySearchPredicate">AWS
 * API Reference</a></p>
 */
class OpportunitySearchPredicate {
 public:
  AWS_PARTNERCENTRALSELLING_API OpportunitySearchPredicate() = default;
  AWS_PARTNERCENTRALSELLING_API OpportunitySearchPredicate(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API OpportunitySearchPredicate& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The opportunity field that the condition applies to.</p>
   */
  inline OpportunitySearchFilterName GetKey() const { return m_key; }
  inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
  inline void SetKey(OpportunitySearchFilterName value) {
    m_keyHasBeenSet = true;
    m_key = value;
  }
  inline OpportunitySearchPredicate& WithKey(OpportunitySearchFilterName value) {
    SetKey(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The typed value the condition compares against. Specify one of the
   * following:</p> <ul> <li> <p>A single string value – used by
   * <code>EqualsTo</code>, and by <code>ContainsAny</code> or
   * <code>ContainsAll</code> for a single-value match.</p> </li> <li> <p>A list of
   * string values – used by <code>ContainsAny</code> or <code>ContainsAll</code> to
   * match against multiple values.</p> </li> <li> <p>An integral numeric value –
   * used by the range comparisons on integral numeric fields.</p> </li> <li> <p>A
   * fractional numeric value – used by the range comparisons on numeric amount
   * fields such as <code>EstimatedMrr</code>.</p> </li> <li> <p>A date-time value in
   * RFC 3339 format – used by the range comparisons on date fields.</p> </li> </ul>
   */
  inline const OpportunitySearchFilterValue& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = OpportunitySearchFilterValue>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = OpportunitySearchFilterValue>
  OpportunitySearchPredicate& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}
 private:
  OpportunitySearchFilterName m_key{OpportunitySearchFilterName::NOT_SET};

  OpportunitySearchFilterValue m_value;
  bool m_keyHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
