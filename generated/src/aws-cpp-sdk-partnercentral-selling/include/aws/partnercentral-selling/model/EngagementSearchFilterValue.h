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
 * <p>The value that a leaf condition compares against. Specify one of the
 * following:</p> <ul> <li> <p> <code>StringValue</code>: A single string, used
 * with <code>EqualsTo</code>, <code>ContainsAny</code>, and
 * <code>ContainsAll</code>.</p> </li> <li> <p> <code>StringListValue</code>: A
 * list of strings, used with <code>ContainsAny</code> and
 * <code>ContainsAll</code>.</p> </li> <li> <p> <code>DateValue</code>: A date and
 * time, used with range comparisons on date fields.</p> </li> <li> <p>
 * <code>LongValue</code>: A whole number, used with range comparisons on numeric
 * fields.</p> </li> </ul><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/EngagementSearchFilterValue">AWS
 * API Reference</a></p>
 */
class EngagementSearchFilterValue {
 public:
  AWS_PARTNERCENTRALSELLING_API EngagementSearchFilterValue() = default;
  AWS_PARTNERCENTRALSELLING_API EngagementSearchFilterValue(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API EngagementSearchFilterValue& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A single string value, used by <code>EqualsTo</code>,
   * <code>ContainsAny</code>, and <code>ContainsAll</code>.</p>
   */
  inline const Aws::String& GetStringValue() const { return m_stringValue; }
  inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }
  template <typename StringValueT = Aws::String>
  void SetStringValue(StringValueT&& value) {
    m_stringValueHasBeenSet = true;
    m_stringValue = std::forward<StringValueT>(value);
  }
  template <typename StringValueT = Aws::String>
  EngagementSearchFilterValue& WithStringValue(StringValueT&& value) {
    SetStringValue(std::forward<StringValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of 1 to 20 string values, used by <code>ContainsAny</code> and
   * <code>ContainsAll</code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetStringListValue() const { return m_stringListValue; }
  inline bool StringListValueHasBeenSet() const { return m_stringListValueHasBeenSet; }
  template <typename StringListValueT = Aws::Vector<Aws::String>>
  void SetStringListValue(StringListValueT&& value) {
    m_stringListValueHasBeenSet = true;
    m_stringListValue = std::forward<StringListValueT>(value);
  }
  template <typename StringListValueT = Aws::Vector<Aws::String>>
  EngagementSearchFilterValue& WithStringListValue(StringListValueT&& value) {
    SetStringListValue(std::forward<StringListValueT>(value));
    return *this;
  }
  template <typename StringListValueT = Aws::String>
  EngagementSearchFilterValue& AddStringListValue(StringListValueT&& value) {
    m_stringListValueHasBeenSet = true;
    m_stringListValue.emplace_back(std::forward<StringListValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An integral numeric value, used by the range comparisons on numeric
   * fields.</p>
   */
  inline long long GetLongValue() const { return m_longValue; }
  inline bool LongValueHasBeenSet() const { return m_longValueHasBeenSet; }
  inline void SetLongValue(long long value) {
    m_longValueHasBeenSet = true;
    m_longValue = value;
  }
  inline EngagementSearchFilterValue& WithLongValue(long long value) {
    SetLongValue(value);
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
  EngagementSearchFilterValue& WithDateValue(DateValueT&& value) {
    SetDateValue(std::forward<DateValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_stringValue;

  Aws::Vector<Aws::String> m_stringListValue;

  long long m_longValue{0};

  Aws::Utils::DateTime m_dateValue{};
  bool m_stringValueHasBeenSet = false;
  bool m_stringListValueHasBeenSet = false;
  bool m_longValueHasBeenSet = false;
  bool m_dateValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
