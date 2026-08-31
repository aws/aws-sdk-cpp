/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>

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
 * <p>Per-rule validation constraints that override the field's default validation
 * when the containing rule matches. All fields are optional; only the constraints
 * that need to differ from the field's default validation are
 * provided.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/ConditionalValidation">AWS
 * API Reference</a></p>
 */
class ConditionalValidation {
 public:
  AWS_PINPOINTSMSVOICEV2_API ConditionalValidation() = default;
  AWS_PINPOINTSMSVOICEV2_API ConditionalValidation(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API ConditionalValidation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The minimum length for the field value when this rule applies.</p>
   */
  inline int GetMinLength() const { return m_minLength; }
  inline bool MinLengthHasBeenSet() const { return m_minLengthHasBeenSet; }
  inline void SetMinLength(int value) {
    m_minLengthHasBeenSet = true;
    m_minLength = value;
  }
  inline ConditionalValidation& WithMinLength(int value) {
    SetMinLength(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum length for the field value when this rule applies.</p>
   */
  inline int GetMaxLength() const { return m_maxLength; }
  inline bool MaxLengthHasBeenSet() const { return m_maxLengthHasBeenSet; }
  inline void SetMaxLength(int value) {
    m_maxLengthHasBeenSet = true;
    m_maxLength = value;
  }
  inline ConditionalValidation& WithMaxLength(int value) {
    SetMaxLength(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A regular expression that the field value must match when this rule
   * applies.</p>
   */
  inline const Aws::String& GetPattern() const { return m_pattern; }
  inline bool PatternHasBeenSet() const { return m_patternHasBeenSet; }
  template <typename PatternT = Aws::String>
  void SetPattern(PatternT&& value) {
    m_patternHasBeenSet = true;
    m_pattern = std::forward<PatternT>(value);
  }
  template <typename PatternT = Aws::String>
  ConditionalValidation& WithPattern(PatternT&& value) {
    SetPattern(std::forward<PatternT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The allowed values for a select field when this rule applies. A subset of the
   * field's full option list.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAllowedValues() const { return m_allowedValues; }
  inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }
  template <typename AllowedValuesT = Aws::Vector<Aws::String>>
  void SetAllowedValues(AllowedValuesT&& value) {
    m_allowedValuesHasBeenSet = true;
    m_allowedValues = std::forward<AllowedValuesT>(value);
  }
  template <typename AllowedValuesT = Aws::Vector<Aws::String>>
  ConditionalValidation& WithAllowedValues(AllowedValuesT&& value) {
    SetAllowedValues(std::forward<AllowedValuesT>(value));
    return *this;
  }
  template <typename AllowedValuesT = Aws::String>
  ConditionalValidation& AddAllowedValues(AllowedValuesT&& value) {
    m_allowedValuesHasBeenSet = true;
    m_allowedValues.emplace_back(std::forward<AllowedValuesT>(value));
    return *this;
  }
  ///@}
 private:
  int m_minLength{0};

  int m_maxLength{0};

  Aws::String m_pattern;

  Aws::Vector<Aws::String> m_allowedValues;
  bool m_minLengthHasBeenSet = false;
  bool m_maxLengthHasBeenSet = false;
  bool m_patternHasBeenSet = false;
  bool m_allowedValuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
