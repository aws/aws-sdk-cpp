/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/model/PreferenceType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PinpointSMSVoiceV2 {
namespace Model {

/**
 * <p>A single number preference — specifies a pattern type and filter
 * value.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/NumberPreferenceItem">AWS
 * API Reference</a></p>
 */
class NumberPreferenceItem {
 public:
  AWS_PINPOINTSMSVOICEV2_API NumberPreferenceItem() = default;
  AWS_PINPOINTSMSVOICEV2_API NumberPreferenceItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API NumberPreferenceItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of match to apply to the filter values.</p> <ul> <li> <p>
   * <code>StartsWith</code>: Returns numbers that begin with the filter value.</p>
   * </li> <li> <p> <code>EndsWith</code>: Returns numbers that end with the filter
   * value.</p> </li> <li> <p> <code>Contains</code>: Returns numbers that contain
   * the filter value.</p> </li> <li> <p> <code>ExactMatch</code>: Returns the number
   * that exactly matches the filter value.</p> </li> </ul>
   */
  inline const Aws::Vector<PreferenceType>& GetPreferenceType() const { return m_preferenceType; }
  inline bool PreferenceTypeHasBeenSet() const { return m_preferenceTypeHasBeenSet; }
  template <typename PreferenceTypeT = Aws::Vector<PreferenceType>>
  void SetPreferenceType(PreferenceTypeT&& value) {
    m_preferenceTypeHasBeenSet = true;
    m_preferenceType = std::forward<PreferenceTypeT>(value);
  }
  template <typename PreferenceTypeT = Aws::Vector<PreferenceType>>
  NumberPreferenceItem& WithPreferenceType(PreferenceTypeT&& value) {
    SetPreferenceType(std::forward<PreferenceTypeT>(value));
    return *this;
  }
  inline NumberPreferenceItem& AddPreferenceType(PreferenceType value) {
    m_preferenceTypeHasBeenSet = true;
    m_preferenceType.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The digit pattern values to match against available phone numbers, using the
   * specified preference type.</p>
   */
  inline const Aws::Vector<Aws::String>& GetFilter() const { return m_filter; }
  inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
  template <typename FilterT = Aws::Vector<Aws::String>>
  void SetFilter(FilterT&& value) {
    m_filterHasBeenSet = true;
    m_filter = std::forward<FilterT>(value);
  }
  template <typename FilterT = Aws::Vector<Aws::String>>
  NumberPreferenceItem& WithFilter(FilterT&& value) {
    SetFilter(std::forward<FilterT>(value));
    return *this;
  }
  template <typename FilterT = Aws::String>
  NumberPreferenceItem& AddFilter(FilterT&& value) {
    m_filterHasBeenSet = true;
    m_filter.emplace_back(std::forward<FilterT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<PreferenceType> m_preferenceType;

  Aws::Vector<Aws::String> m_filter;
  bool m_preferenceTypeHasBeenSet = false;
  bool m_filterHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
