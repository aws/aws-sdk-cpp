/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>

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
 * <p>Contains the value that a search predicate compares against. Specify exactly
 * one member. The member you choose must match the field type and the comparison
 * operator of the predicate.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/OpportunitySearchFilterValue">AWS
 * API Reference</a></p>
 */
class OpportunitySearchFilterValue {
 public:
  AWS_PARTNERCENTRALSELLING_API OpportunitySearchFilterValue() = default;
  AWS_PARTNERCENTRALSELLING_API OpportunitySearchFilterValue(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API OpportunitySearchFilterValue& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A single string value. Used by <code>EqualsTo</code>, and by
   * <code>ContainsAny</code> or <code>ContainsAll</code> for a single-value
   * match.</p>
   */
  inline const Aws::String& GetStringValue() const { return m_stringValue; }
  inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }
  template <typename StringValueT = Aws::String>
  void SetStringValue(StringValueT&& value) {
    m_stringValueHasBeenSet = true;
    m_stringValue = std::forward<StringValueT>(value);
  }
  template <typename StringValueT = Aws::String>
  OpportunitySearchFilterValue& WithStringValue(StringValueT&& value) {
    SetStringValue(std::forward<StringValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of string values. Used by <code>ContainsAny</code> or
   * <code>ContainsAll</code> to match against multiple values.</p>
   */
  inline const Aws::Vector<Aws::String>& GetStringListValue() const { return m_stringListValue; }
  inline bool StringListValueHasBeenSet() const { return m_stringListValueHasBeenSet; }
  template <typename StringListValueT = Aws::Vector<Aws::String>>
  void SetStringListValue(StringListValueT&& value) {
    m_stringListValueHasBeenSet = true;
    m_stringListValue = std::forward<StringListValueT>(value);
  }
  template <typename StringListValueT = Aws::Vector<Aws::String>>
  OpportunitySearchFilterValue& WithStringListValue(StringListValueT&& value) {
    SetStringListValue(std::forward<StringListValueT>(value));
    return *this;
  }
  template <typename StringListValueT = Aws::String>
  OpportunitySearchFilterValue& AddStringListValue(StringListValueT&& value) {
    m_stringListValueHasBeenSet = true;
    m_stringListValue.emplace_back(std::forward<StringListValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An integral numeric value, used by the range comparisons on integral numeric
   * fields.</p>
   */
  inline long long GetLongValue() const { return m_longValue; }
  inline bool LongValueHasBeenSet() const { return m_longValueHasBeenSet; }
  inline void SetLongValue(long long value) {
    m_longValueHasBeenSet = true;
    m_longValue = value;
  }
  inline OpportunitySearchFilterValue& WithLongValue(long long value) {
    SetLongValue(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A fractional numeric value, used by the range comparisons on numeric amount
   * fields such as <code>EstimatedMrr</code>.</p>
   */
  inline double GetDoubleValue() const { return m_doubleValue; }
  inline bool DoubleValueHasBeenSet() const { return m_doubleValueHasBeenSet; }
  inline void SetDoubleValue(double value) {
    m_doubleValueHasBeenSet = true;
    m_doubleValue = value;
  }
  inline OpportunitySearchFilterValue& WithDoubleValue(double value) {
    SetDoubleValue(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A date-time value in RFC 3339 format, used by the range comparisons on date
   * fields.</p>
   */
  inline const Aws::Utils::DateTime& GetDateValue() const { return m_dateValue; }
  inline bool DateValueHasBeenSet() const { return m_dateValueHasBeenSet; }
  template <typename DateValueT = Aws::Utils::DateTime>
  void SetDateValue(DateValueT&& value) {
    m_dateValueHasBeenSet = true;
    m_dateValue = std::forward<DateValueT>(value);
  }
  template <typename DateValueT = Aws::Utils::DateTime>
  OpportunitySearchFilterValue& WithDateValue(DateValueT&& value) {
    SetDateValue(std::forward<DateValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_stringValue;

  Aws::Vector<Aws::String> m_stringListValue;

  long long m_longValue{0};

  double m_doubleValue{0.0};

  Aws::Utils::DateTime m_dateValue{};
  bool m_stringValueHasBeenSet = false;
  bool m_stringListValueHasBeenSet = false;
  bool m_longValueHasBeenSet = false;
  bool m_doubleValueHasBeenSet = false;
  bool m_dateValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
